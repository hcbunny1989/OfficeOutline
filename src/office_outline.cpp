#include "xml.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <optional>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <sys/wait.h>
#include <unistd.h>
#include <utility>
#include <vector>

namespace fs = std::filesystem;

namespace outline {

namespace {

using Attrs = std::vector<std::pair<std::string, std::string>>;

std::string lower(std::string value)
{
    std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });
    return value;
}

std::string stripLeadingSlash(std::string value)
{
    while (!value.empty() && value.front() == '/') {
        value.erase(value.begin());
    }
    return value;
}

std::string shellQuote(const fs::path& path)
{
    std::string s = path.string();
    std::string out = "'";
    for (char c : s) {
        if (c == '\'') {
            out += "'\\''";
        } else {
            out.push_back(c);
        }
    }
    out.push_back('\'');
    return out;
}

std::string readFile(const fs::path& path)
{
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        throw std::runtime_error("Cannot open file: " + path.string());
    }
    std::ostringstream ss;
    ss << in.rdbuf();
    return ss.str();
}

bool isFalseValue(const std::string& value)
{
    std::string v = lower(value);
    return v == "0" || v == "false" || v == "off" || v == "none";
}

std::optional<bool> parseOnOff(const XmlNode* node)
{
    if (!node) {
        return std::nullopt;
    }
    std::string value = attrLocal(*node, "val");
    if (value.empty()) {
        return true;
    }
    return !isFalseValue(value);
}

std::string normalizeColor(std::string value)
{
    if (value.empty() || lower(value) == "auto") {
        return {};
    }
    if (value.size() == 6 || value.size() == 8) {
        bool hex = std::all_of(value.begin(), value.end(), [](unsigned char c) {
            return std::isxdigit(c) != 0;
        });
        if (hex) {
            return "#" + value;
        }
    }
    return value;
}

std::string formatNumber(double value)
{
    std::ostringstream ss;
    ss << std::fixed << std::setprecision(2) << value;
    std::string out = ss.str();
    while (out.size() > 1 && out.back() == '0') {
        out.pop_back();
    }
    if (!out.empty() && out.back() == '.') {
        out.pop_back();
    }
    return out;
}

std::string halfPointsToPt(const std::string& value)
{
    if (value.empty()) {
        return {};
    }
    try {
        return formatNumber(std::stod(value) / 2.0);
    } catch (...) {
        return value;
    }
}

std::string hundredPointsToPt(const std::string& value)
{
    if (value.empty()) {
        return {};
    }
    try {
        return formatNumber(std::stod(value) / 100.0);
    } catch (...) {
        return value;
    }
}

struct TextFormat {
    std::string fontName;
    std::string fontSize;
    std::string fontColor;
    std::optional<bool> bold;
    std::optional<bool> italic;
    std::string underline;
};

TextFormat mergeFormat(TextFormat base, const TextFormat& overlay)
{
    if (!overlay.fontName.empty()) {
        base.fontName = overlay.fontName;
    }
    if (!overlay.fontSize.empty()) {
        base.fontSize = overlay.fontSize;
    }
    if (!overlay.fontColor.empty()) {
        base.fontColor = overlay.fontColor;
    }
    if (overlay.bold.has_value()) {
        base.bold = overlay.bold;
    }
    if (overlay.italic.has_value()) {
        base.italic = overlay.italic;
    }
    if (!overlay.underline.empty()) {
        base.underline = overlay.underline;
    }
    return base;
}

Attrs tagAttrs(std::string tag)
{
    return {{"tag", std::move(tag)}};
}

void addAttr(Attrs& attrs, std::string key, std::string value)
{
    if (!value.empty()) {
        attrs.emplace_back(std::move(key), std::move(value));
    }
}

void addFormatAttrs(Attrs& attrs, const TextFormat& format)
{
    attrs.emplace_back("fontName", format.fontName);
    attrs.emplace_back("fontSize", format.fontSize);
    attrs.emplace_back("fontColor", format.fontColor);
    attrs.emplace_back("bold", format.bold.value_or(false) ? "true" : "false");
    attrs.emplace_back("italic", format.italic.value_or(false) ? "true" : "false");
    attrs.emplace_back("underline", format.underline.empty() ? "none" : format.underline);
}

std::string childText(const XmlNode& node, std::string_view childName)
{
    const XmlNode* child = firstChildLocal(node, childName);
    return child ? child->text : std::string();
}

std::string relationshipIdAttr(const XmlNode& node)
{
    std::string id = attr(node, "r:id");
    return id.empty() ? attrLocal(node, "id") : id;
}

std::string resolvePartTarget(std::string_view sourcePart, std::string target)
{
    if (target.empty()) {
        return {};
    }
    if (target.rfind("http://", 0) == 0 || target.rfind("https://", 0) == 0 || target.rfind("mailto:", 0) == 0) {
        return target;
    }
    if (!target.empty() && target.front() == '/') {
        return stripLeadingSlash(std::move(target));
    }
    fs::path base = fs::path(std::string(sourcePart)).parent_path();
    return (base / fs::path(target)).lexically_normal().generic_string();
}

class MarkdownWriter {
public:
    explicit MarkdownWriter(std::ostream& out) : out_(out) {}

    void rawLine(const std::string& line)
    {
        out_ << line << '\n';
    }

    void open(const std::string& name, const Attrs& attrs)
    {
        line("<" + name + renderAttrs(attrs) + ">");
        ++indent_;
    }

    void close(const std::string& name)
    {
        if (indent_ > 0) {
            --indent_;
        }
        line("</" + name + ">");
    }

    void empty(const std::string& name, const Attrs& attrs)
    {
        line("<" + name + renderAttrs(attrs) + " />");
    }

    void text(const std::string& name, const Attrs& attrs, std::string_view content)
    {
        line("<" + name + renderAttrs(attrs) + ">" + escapeMarkdownText(content) + "</" + name + ">");
    }

private:
    std::ostream& out_;
    int indent_ = 0;

    std::string renderAttrs(const Attrs& attrs) const
    {
        std::string out;
        for (const auto& [key, value] : attrs) {
            out += " ";
            out += key;
            out += "=\"";
            out += escapeAttribute(value);
            out += "\"";
        }
        return out;
    }

    void line(const std::string& value)
    {
        for (int i = 0; i < indent_; ++i) {
            out_ << "  ";
        }
        out_ << value << '\n';
    }
};

class TempDir {
public:
    explicit TempDir(const fs::path& archive)
    {
        path_ = fs::temp_directory_path() / ("office_outline_" + std::to_string(::getpid()) + "_" + std::to_string(counter_++));
        fs::create_directories(path_);
        std::string command = "/usr/bin/unzip -qq -o " + shellQuote(archive) + " -d " + shellQuote(path_);
        int rc = std::system(command.c_str());
        if (rc != 0) {
            throw std::runtime_error("Failed to unzip Office package: " + archive.string());
        }
    }

    ~TempDir()
    {
        std::error_code ec;
        fs::remove_all(path_, ec);
    }

    const fs::path& path() const { return path_; }

private:
    fs::path path_;
    static inline int counter_ = 0;
};

class Package {
public:
    explicit Package(fs::path archive) : archive_(std::move(archive)), temp_(archive_) {}

    bool exists(const std::string& entry) const
    {
        return fs::exists(temp_.path() / fs::path(entry));
    }

    std::string readEntry(const std::string& entry) const
    {
        return readFile(temp_.path() / fs::path(entry));
    }

    std::vector<std::string> entries(const std::string& prefix, const std::string& suffix = {}) const
    {
        std::vector<std::string> result;
        for (const auto& item : fs::recursive_directory_iterator(temp_.path())) {
            if (!item.is_regular_file()) {
                continue;
            }
            std::string rel = fs::relative(item.path(), temp_.path()).generic_string();
            if (!prefix.empty() && rel.rfind(prefix, 0) != 0) {
                continue;
            }
            if (!suffix.empty() && (rel.size() < suffix.size() || rel.substr(rel.size() - suffix.size()) != suffix)) {
                continue;
            }
            result.push_back(rel);
        }
        std::sort(result.begin(), result.end());
        return result;
    }

private:
    fs::path archive_;
    TempDir temp_;
};

struct Relationship {
    std::string id;
    std::string type;
    std::string target;
    std::string mode;
};

using RelationshipMap = std::map<std::string, Relationship>;

RelationshipMap loadRelationships(const Package& package, const std::string& sourcePart)
{
    fs::path part(sourcePart);
    std::string relPart = (part.parent_path() / "_rels" / (part.filename().generic_string() + ".rels")).generic_string();
    RelationshipMap rels;
    if (!package.exists(relPart)) {
        return rels;
    }

    XmlParser parser;
    auto doc = parser.parse(package.readEntry(relPart));
    for (const XmlNode* rel : descendantsLocal(*doc, "Relationship")) {
        Relationship item;
        item.id = attr(*rel, "Id");
        item.type = attr(*rel, "Type");
        item.target = attr(*rel, "Target");
        item.mode = attr(*rel, "TargetMode");
        if (!item.id.empty()) {
            rels[item.id] = std::move(item);
        }
    }
    return rels;
}

std::string relationshipTarget(const RelationshipMap& rels, const std::string& id, const std::string& sourcePart)
{
    auto it = rels.find(id);
    if (it == rels.end()) {
        return {};
    }
    if (it->second.mode == "External") {
        return it->second.target;
    }
    return resolvePartTarget(sourcePart, it->second.target);
}

const XmlNode* documentElement(const XmlNode& doc)
{
    for (const auto& child : doc.children) {
        if (!child->name.empty() && child->name != "#text") {
            return child.get();
        }
    }
    return nullptr;
}

TextFormat parseWordRunProperties(const XmlNode* rPr)
{
    TextFormat format;
    if (!rPr) {
        return format;
    }

    if (const XmlNode* fonts = firstChildLocal(*rPr, "rFonts")) {
        for (std::string key : {"eastAsia", "ascii", "hAnsi", "cs"}) {
            std::string value = attrLocal(*fonts, key);
            if (!value.empty()) {
                format.fontName = value;
                break;
            }
        }
    }
    if (const XmlNode* size = firstChildLocal(*rPr, "sz")) {
        format.fontSize = halfPointsToPt(attrLocal(*size, "val"));
    }
    if (const XmlNode* color = firstChildLocal(*rPr, "color")) {
        format.fontColor = normalizeColor(attrLocal(*color, "val"));
    }
    format.bold = parseOnOff(firstChildLocal(*rPr, "b"));
    format.italic = parseOnOff(firstChildLocal(*rPr, "i"));
    if (const XmlNode* underline = firstChildLocal(*rPr, "u")) {
        std::string value = attrLocal(*underline, "val");
        format.underline = value.empty() ? "single" : value;
    }
    return format;
}

TextFormat parseDrawingRunProperties(const XmlNode* rPr)
{
    TextFormat format;
    if (!rPr) {
        return format;
    }
    if (const XmlNode* latin = firstChildLocal(*rPr, "latin")) {
        format.fontName = attrLocal(*latin, "typeface");
    }
    std::string size = attrLocal(*rPr, "sz");
    if (!size.empty()) {
        format.fontSize = hundredPointsToPt(size);
    }
    std::string bold = attrLocal(*rPr, "b");
    if (!bold.empty()) {
        format.bold = !isFalseValue(bold);
    }
    std::string italic = attrLocal(*rPr, "i");
    if (!italic.empty()) {
        format.italic = !isFalseValue(italic);
    }
    std::string underline = attrLocal(*rPr, "u");
    if (!underline.empty()) {
        format.underline = underline;
    }
    if (const XmlNode* fill = firstChildLocal(*rPr, "solidFill")) {
        if (const XmlNode* color = firstChildLocal(*fill, "srgbClr")) {
            format.fontColor = normalizeColor(attrLocal(*color, "val"));
        }
    }
    return format;
}

TextFormat parseSpreadsheetFont(const XmlNode& fontNode)
{
    TextFormat format;
    if (const XmlNode* name = firstChildLocal(fontNode, "name")) {
        format.fontName = attrLocal(*name, "val");
    }
    if (const XmlNode* size = firstChildLocal(fontNode, "sz")) {
        format.fontSize = attrLocal(*size, "val");
    }
    if (const XmlNode* color = firstChildLocal(fontNode, "color")) {
        std::string value = attrLocal(*color, "rgb");
        if (value.empty()) {
            value = attrLocal(*color, "indexed");
        }
        if (value.empty()) {
            value = attrLocal(*color, "theme");
        }
        format.fontColor = normalizeColor(value);
    }
    format.bold = parseOnOff(firstChildLocal(fontNode, "b"));
    format.italic = parseOnOff(firstChildLocal(fontNode, "i"));
    if (const XmlNode* underline = firstChildLocal(fontNode, "u")) {
        std::string value = attrLocal(*underline, "val");
        format.underline = value.empty() ? "single" : value;
    }
    return format;
}

class StyleSet {
public:
    void load(const Package& package)
    {
        if (!package.exists("word/styles.xml")) {
            return;
        }
        XmlParser parser;
        auto doc = parser.parse(package.readEntry("word/styles.xml"));
        const XmlNode* root = documentElement(*doc);
        if (!root) {
            return;
        }

        if (const XmlNode* docDefaults = firstChildLocal(*root, "docDefaults")) {
            if (const XmlNode* rPrDefault = firstChildLocal(*docDefaults, "rPrDefault")) {
                defaultFormat_ = parseWordRunProperties(firstChildLocal(*rPrDefault, "rPr"));
            }
        }

        for (const XmlNode* styleNode : childrenLocal(*root, "style")) {
            Style style;
            style.id = attrLocal(*styleNode, "styleId");
            style.type = attrLocal(*styleNode, "type");
            style.isDefault = attrLocal(*styleNode, "default") == "1";
            if (const XmlNode* basedOn = firstChildLocal(*styleNode, "basedOn")) {
                style.basedOn = attrLocal(*basedOn, "val");
            }
            if (const XmlNode* name = firstChildLocal(*styleNode, "name")) {
                style.name = attrLocal(*name, "val");
            }
            style.format = parseWordRunProperties(firstChildLocal(*styleNode, "rPr"));
            if (!style.id.empty()) {
                if (style.isDefault && style.type == "paragraph") {
                    defaultParagraphStyle_ = style.id;
                }
                if (style.isDefault && style.type == "character") {
                    defaultCharacterStyle_ = style.id;
                }
                styles_[style.id] = std::move(style);
            }
        }
    }

    TextFormat baseFormat() const
    {
        TextFormat base = defaultFormat_;
        if (!defaultParagraphStyle_.empty()) {
            base = mergeFormat(base, styleFormat(defaultParagraphStyle_));
        }
        return base;
    }

    TextFormat styleFormat(const std::string& id) const
    {
        std::set<std::string> seen;
        return styleFormat(id, seen);
    }

    std::string styleName(const std::string& id) const
    {
        auto it = styles_.find(id);
        return it == styles_.end() ? std::string() : it->second.name;
    }

private:
    struct Style {
        std::string id;
        std::string type;
        std::string name;
        std::string basedOn;
        bool isDefault = false;
        TextFormat format;
    };

    TextFormat styleFormat(const std::string& id, std::set<std::string>& seen) const
    {
        if (id.empty() || seen.count(id)) {
            return {};
        }
        auto it = styles_.find(id);
        if (it == styles_.end()) {
            return {};
        }
        seen.insert(id);
        TextFormat base = styleFormat(it->second.basedOn, seen);
        return mergeFormat(base, it->second.format);
    }

    std::map<std::string, Style> styles_;
    TextFormat defaultFormat_;
    std::string defaultParagraphStyle_;
    std::string defaultCharacterStyle_;
};

struct DocxContext {
    const Package& package;
    MarkdownWriter& md;
    StyleSet styles;
};

Attrs formattedAttrs(std::string tag, const TextFormat& format)
{
    Attrs attrs = tagAttrs(std::move(tag));
    addFormatAttrs(attrs, format);
    return attrs;
}

void emitWordContent(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& baseFormat);
void emitWordInline(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& currentFormat);

TextFormat paragraphFormat(const XmlNode& paragraph, const StyleSet& styles, std::string& styleId)
{
    TextFormat format = styles.baseFormat();
    if (const XmlNode* pPr = firstChildLocal(paragraph, "pPr")) {
        if (const XmlNode* pStyle = firstChildLocal(*pPr, "pStyle")) {
            styleId = attrLocal(*pStyle, "val");
            format = mergeFormat(format, styles.styleFormat(styleId));
        }
        if (const XmlNode* rPr = firstChildLocal(*pPr, "rPr")) {
            format = mergeFormat(format, parseWordRunProperties(rPr));
        }
    }
    return format;
}

TextFormat runFormat(const XmlNode& run, const StyleSet& styles, const TextFormat& inherited)
{
    TextFormat format = inherited;
    if (const XmlNode* rPr = firstChildLocal(run, "rPr")) {
        if (const XmlNode* rStyle = firstChildLocal(*rPr, "rStyle")) {
            format = mergeFormat(format, styles.styleFormat(attrLocal(*rStyle, "val")));
        }
        format = mergeFormat(format, parseWordRunProperties(rPr));
    }
    return format;
}

void emitFormula(MarkdownWriter& md, const XmlNode& node)
{
    Attrs attrs = tagAttrs("formula");
    std::string text = textDescendants(node, "t");
    if (text.empty()) {
        text = textDescendants(node);
    }
    md.text("formula", attrs, text);
}

void emitPlainText(MarkdownWriter& md, const TextFormat& format, std::string_view text)
{
    Attrs attrs = formattedAttrs("plain_text", format);
    md.text("plain_text", attrs, text);
}

void emitDocxDrawing(const XmlNode& drawing, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& format)
{
    Attrs attrs = tagAttrs("drawing_object");
    addAttr(attrs, "kind", localName(drawing.name));
    ctx.md.open("drawing_object", attrs);

    for (const XmlNode* blip : descendantsLocal(drawing, "blip")) {
        std::string id = attrLocal(*blip, "embed");
        if (id.empty()) {
            id = attrLocal(*blip, "link");
        }
        Attrs imageAttrs = tagAttrs("image");
        addAttr(imageAttrs, "relationshipId", id);
        addAttr(imageAttrs, "target", relationshipTarget(rels, id, part));
        ctx.md.empty("image", imageAttrs);
    }
    for (const XmlNode* imageData : descendantsLocal(drawing, "imagedata")) {
        std::string id = relationshipIdAttr(*imageData);
        Attrs imageAttrs = tagAttrs("image");
        addAttr(imageAttrs, "relationshipId", id);
        addAttr(imageAttrs, "target", relationshipTarget(rels, id, part));
        ctx.md.empty("image", imageAttrs);
    }

    std::vector<std::string> shapeNames = {"sp", "shape", "pic", "graphicFrame", "cxnSp", "grpSp"};
    std::set<const XmlNode*> emitted;
    for (const auto& shapeName : shapeNames) {
        for (const XmlNode* shape : descendantsLocal(drawing, shapeName)) {
            if (!emitted.insert(shape).second) {
                continue;
            }
            Attrs shapeAttrs = tagAttrs("shape");
            addAttr(shapeAttrs, "sourceElement", shape->name);
            if (const XmlNode* cNvPr = firstChildLocal(*shape, "cNvPr")) {
                addAttr(shapeAttrs, "id", attrLocal(*cNvPr, "id"));
                addAttr(shapeAttrs, "name", attrLocal(*cNvPr, "name"));
            }
            if (const XmlNode* prst = firstChildLocal(*shape, "prstGeom")) {
                addAttr(shapeAttrs, "presetGeometry", attrLocal(*prst, "prst"));
            } else if (const XmlNode* prst = descendantsLocal(*shape, "prstGeom").empty() ? nullptr : descendantsLocal(*shape, "prstGeom").front()) {
                addAttr(shapeAttrs, "presetGeometry", attrLocal(*prst, "prst"));
            }
            ctx.md.empty("shape", shapeAttrs);
        }
    }

    for (const XmlNode* txbx : descendantsLocal(drawing, "txbxContent")) {
        Attrs boxAttrs = formattedAttrs("text_box", format);
        ctx.md.open("text_box", boxAttrs);
        emitWordContent(*txbx, rels, part, ctx, format);
        ctx.md.close("text_box");
    }

    for (const XmlNode* math : descendantsLocal(drawing, "oMath")) {
        emitFormula(ctx.md, *math);
    }

    ctx.md.close("drawing_object");
}

void emitRun(const XmlNode& run, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& inherited)
{
    TextFormat format = runFormat(run, ctx.styles, inherited);
    Attrs attrs = formattedAttrs("text_run", format);
    ctx.md.open("text_run", attrs);

    for (const auto& childPtr : run.children) {
        const XmlNode& child = *childPtr;
        std::string name = localName(child.name);
        if (name == "rPr") {
            continue;
        }
        if (name == "t" || name == "instrText" || name == "delText") {
            emitPlainText(ctx.md, format, child.text);
        } else if (name == "tab") {
            emitPlainText(ctx.md, format, "\t");
        } else if (name == "br" || name == "cr") {
            ctx.md.empty("line_break", tagAttrs("line_break"));
        } else if (name == "sym") {
            Attrs symAttrs = formattedAttrs("plain_text", format);
            addAttr(symAttrs, "font", attrLocal(child, "font"));
            addAttr(symAttrs, "char", attrLocal(child, "char"));
            ctx.md.empty("plain_text", symAttrs);
        } else if (name == "drawing" || name == "pict" || name == "object") {
            emitDocxDrawing(child, rels, part, ctx, format);
        } else if (name == "oMath" || name == "oMathPara") {
            emitFormula(ctx.md, child);
        } else {
            emitWordInline(child, rels, part, ctx, format);
        }
    }

    ctx.md.close("text_run");
}

void emitHyperlink(const XmlNode& hyperlink, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& format)
{
    std::string id = relationshipIdAttr(hyperlink);
    Attrs attrs = formattedAttrs("hyperlink", format);
    addAttr(attrs, "relationshipId", id);
    addAttr(attrs, "target", relationshipTarget(rels, id, part));
    addAttr(attrs, "anchor", attrLocal(hyperlink, "anchor"));
    ctx.md.open("hyperlink", attrs);
    for (const auto& child : hyperlink.children) {
        emitWordInline(*child, rels, part, ctx, format);
    }
    ctx.md.close("hyperlink");
}

void emitParagraph(const XmlNode& paragraph, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat&)
{
    std::string styleId;
    TextFormat format = paragraphFormat(paragraph, ctx.styles, styleId);
    Attrs attrs = formattedAttrs("paragraph", format);
    addAttr(attrs, "styleId", styleId);
    addAttr(attrs, "styleName", ctx.styles.styleName(styleId));
    ctx.md.open("paragraph", attrs);

    for (const auto& child : paragraph.children) {
        if (localName(child->name) == "pPr") {
            continue;
        }
        emitWordInline(*child, rels, part, ctx, format);
    }

    ctx.md.close("paragraph");
}

void emitTable(const XmlNode& table, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& baseFormat)
{
    Attrs attrs = formattedAttrs("table", baseFormat);
    ctx.md.open("table", attrs);
    int rowIndex = 0;
    for (const auto& rowPtr : table.children) {
        if (localName(rowPtr->name) != "tr") {
            continue;
        }
        Attrs rowAttrs = tagAttrs("table_row");
        addAttr(rowAttrs, "index", std::to_string(rowIndex++));
        ctx.md.open("table_row", rowAttrs);
        int colIndex = 0;
        for (const auto& cellPtr : rowPtr->children) {
            if (localName(cellPtr->name) != "tc") {
                continue;
            }
            Attrs cellAttrs = formattedAttrs("table_cell", baseFormat);
            addAttr(cellAttrs, "column", std::to_string(colIndex++));
            ctx.md.open("table_cell", cellAttrs);
            emitWordContent(*cellPtr, rels, part, ctx, baseFormat);
            ctx.md.close("table_cell");
        }
        ctx.md.close("table_row");
    }
    ctx.md.close("table");
}

void emitWordInline(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& currentFormat)
{
    std::string name = localName(node.name);
    if (name == "r") {
        emitRun(node, rels, part, ctx, currentFormat);
    } else if (name == "hyperlink") {
        emitHyperlink(node, rels, part, ctx, currentFormat);
    } else if (name == "drawing" || name == "pict" || name == "object") {
        emitDocxDrawing(node, rels, part, ctx, currentFormat);
    } else if (name == "oMath" || name == "oMathPara") {
        emitFormula(ctx.md, node);
    } else if (name == "fldSimple" || name == "smartTag" || name == "sdt" || name == "sdtContent" || name == "ins" || name == "moveTo" || name == "moveFrom") {
        for (const auto& child : node.children) {
            emitWordInline(*child, rels, part, ctx, currentFormat);
        }
    } else if (name == "p") {
        emitParagraph(node, rels, part, ctx, currentFormat);
    } else if (name == "tbl") {
        emitTable(node, rels, part, ctx, currentFormat);
    }
}

void emitWordContent(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& baseFormat)
{
    for (const auto& child : node.children) {
        std::string name = localName(child->name);
        if (name == "p") {
            emitParagraph(*child, rels, part, ctx, baseFormat);
        } else if (name == "tbl") {
            emitTable(*child, rels, part, ctx, baseFormat);
        } else if (name == "sdt" || name == "sdtContent" || name == "body" || name == "footnote" || name == "endnote" || name == "hdr" || name == "ftr") {
            emitWordContent(*child, rels, part, ctx, baseFormat);
        }
    }
}

void parseDocxPart(const Package& package, const std::string& part, DocxContext& ctx)
{
    if (!package.exists(part)) {
        return;
    }
    XmlParser parser;
    auto doc = parser.parse(package.readEntry(part));
    const XmlNode* root = documentElement(*doc);
    if (!root) {
        return;
    }
    RelationshipMap rels = loadRelationships(package, part);
    Attrs attrs = tagAttrs("part");
    addAttr(attrs, "path", part);
    ctx.md.open("part", attrs);
    emitWordContent(*root, rels, part, ctx, ctx.styles.baseFormat());
    ctx.md.close("part");
}

void parseDocx(const Package& package, MarkdownWriter& md, const fs::path& source)
{
    DocxContext ctx{package, md, {}};
    ctx.styles.load(package);

    md.rawLine("# Office Outline");
    md.rawLine("");
    Attrs attrs = tagAttrs("document");
    addAttr(attrs, "type", "docx");
    addAttr(attrs, "source", source.string());
    md.open("document", attrs);

    parseDocxPart(package, "word/document.xml", ctx);
    for (const std::string& part : package.entries("word/", ".xml")) {
        fs::path p(part);
        std::string base = p.filename().generic_string();
        bool auxiliary = base.rfind("header", 0) == 0 || base.rfind("footer", 0) == 0 || base == "footnotes.xml" || base == "endnotes.xml";
        if (auxiliary) {
            parseDocxPart(package, part, ctx);
        }
    }

    md.close("document");
}

std::vector<TextFormat> loadXlsxFormats(const Package& package)
{
    std::vector<TextFormat> formats;
    if (!package.exists("xl/styles.xml")) {
        return formats;
    }
    XmlParser parser;
    auto doc = parser.parse(package.readEntry("xl/styles.xml"));
    const XmlNode* root = documentElement(*doc);
    if (!root) {
        return formats;
    }

    std::vector<TextFormat> fonts;
    if (const XmlNode* fontRoot = firstChildLocal(*root, "fonts")) {
        for (const XmlNode* font : childrenLocal(*fontRoot, "font")) {
            fonts.push_back(parseSpreadsheetFont(*font));
        }
    }
    if (const XmlNode* xfs = firstChildLocal(*root, "cellXfs")) {
        for (const XmlNode* xf : childrenLocal(*xfs, "xf")) {
            TextFormat format;
            std::string fontId = attrLocal(*xf, "fontId");
            if (!fontId.empty()) {
                try {
                    size_t idx = static_cast<size_t>(std::stoul(fontId));
                    if (idx < fonts.size()) {
                        format = fonts[idx];
                    }
                } catch (...) {
                }
            }
            formats.push_back(format);
        }
    }
    return formats;
}

std::vector<std::string> loadSharedStrings(const Package& package)
{
    std::vector<std::string> shared;
    if (!package.exists("xl/sharedStrings.xml")) {
        return shared;
    }
    XmlParser parser;
    auto doc = parser.parse(package.readEntry("xl/sharedStrings.xml"));
    for (const XmlNode* si : descendantsLocal(*doc, "si")) {
        shared.push_back(textDescendants(*si, "t"));
    }
    return shared;
}

TextFormat xlsxCellFormat(const std::vector<TextFormat>& formats, const XmlNode& cell)
{
    std::string style = attrLocal(cell, "s");
    if (style.empty()) {
        return {};
    }
    try {
        size_t idx = static_cast<size_t>(std::stoul(style));
        if (idx < formats.size()) {
            return formats[idx];
        }
    } catch (...) {
    }
    return {};
}

std::string xlsxCellText(const XmlNode& cell, const std::vector<std::string>& shared)
{
    std::string type = attrLocal(cell, "t");
    if (type == "inlineStr") {
        if (const XmlNode* inlineStr = firstChildLocal(cell, "is")) {
            return textDescendants(*inlineStr, "t");
        }
    }
    std::string value = childText(cell, "v");
    if (type == "s" && !value.empty()) {
        try {
            size_t index = static_cast<size_t>(std::stoul(value));
            if (index < shared.size()) {
                return shared[index];
            }
        } catch (...) {
        }
    }
    return value;
}

void emitDrawingTextBody(const XmlNode& body, MarkdownWriter& md, const TextFormat& baseFormat, const RelationshipMap& rels, const std::string& part)
{
    for (const XmlNode* paragraph : descendantsLocal(body, "p")) {
        Attrs pAttrs = formattedAttrs("paragraph", baseFormat);
        md.open("paragraph", pAttrs);
        for (const auto& child : paragraph->children) {
            if (localName(child->name) != "r") {
                continue;
            }
            TextFormat runFmt = mergeFormat(baseFormat, parseDrawingRunProperties(firstChildLocal(*child, "rPr")));
            Attrs runAttrs = formattedAttrs("text_run", runFmt);
            if (const XmlNode* rPr = firstChildLocal(*child, "rPr")) {
                if (const XmlNode* hlink = firstChildLocal(*rPr, "hlinkClick")) {
                    std::string id = relationshipIdAttr(*hlink);
                    Attrs hAttrs = formattedAttrs("hyperlink", runFmt);
                    addAttr(hAttrs, "relationshipId", id);
                    addAttr(hAttrs, "target", relationshipTarget(rels, id, part));
                    md.open("hyperlink", hAttrs);
                    md.open("text_run", runAttrs);
                    emitPlainText(md, runFmt, childText(*child, "t"));
                    md.close("text_run");
                    md.close("hyperlink");
                    continue;
                }
            }
            md.open("text_run", runAttrs);
            emitPlainText(md, runFmt, childText(*child, "t"));
            md.close("text_run");
        }
        md.close("paragraph");
    }
}

void emitChartRef(const XmlNode& chart, MarkdownWriter& md, const RelationshipMap& rels, const std::string& part)
{
    std::string id = relationshipIdAttr(chart);
    Attrs attrs = tagAttrs("chart");
    addAttr(attrs, "relationshipId", id);
    addAttr(attrs, "target", relationshipTarget(rels, id, part));
    md.empty("chart", attrs);
}

void emitOoxDrawingPart(const Package& package, const std::string& part, MarkdownWriter& md, const TextFormat& baseFormat)
{
    if (!package.exists(part)) {
        return;
    }
    XmlParser parser;
    auto doc = parser.parse(package.readEntry(part));
    RelationshipMap rels = loadRelationships(package, part);
    Attrs attrs = tagAttrs("drawing_object");
    addAttr(attrs, "part", part);
    md.open("drawing_object", attrs);

    for (const XmlNode* blip : descendantsLocal(*doc, "blip")) {
        std::string id = attrLocal(*blip, "embed");
        if (id.empty()) {
            id = attrLocal(*blip, "link");
        }
        Attrs imageAttrs = tagAttrs("image");
        addAttr(imageAttrs, "relationshipId", id);
        addAttr(imageAttrs, "target", relationshipTarget(rels, id, part));
        md.empty("image", imageAttrs);
    }
    for (const XmlNode* shape : descendantsLocal(*doc, "sp")) {
        Attrs shapeAttrs = tagAttrs("shape");
        if (const XmlNode* cNvPr = firstChildLocal(*shape, "cNvPr")) {
            addAttr(shapeAttrs, "id", attrLocal(*cNvPr, "id"));
            addAttr(shapeAttrs, "name", attrLocal(*cNvPr, "name"));
        }
        if (const XmlNode* prst = descendantsLocal(*shape, "prstGeom").empty() ? nullptr : descendantsLocal(*shape, "prstGeom").front()) {
            addAttr(shapeAttrs, "presetGeometry", attrLocal(*prst, "prst"));
        }
        md.open("shape", shapeAttrs);
        if (const XmlNode* txBody = firstChildLocal(*shape, "txBody")) {
            Attrs boxAttrs = formattedAttrs("text_box", baseFormat);
            md.open("text_box", boxAttrs);
            emitDrawingTextBody(*txBody, md, baseFormat, rels, part);
            md.close("text_box");
        }
        md.close("shape");
    }

    for (const XmlNode* frame : descendantsLocal(*doc, "graphicFrame")) {
        Attrs frameAttrs = tagAttrs("shape");
        addAttr(frameAttrs, "sourceElement", frame->name);
        std::vector<const XmlNode*> nonVisualProps = descendantsLocal(*frame, "cNvPr");
        if (!nonVisualProps.empty()) {
            addAttr(frameAttrs, "id", attrLocal(*nonVisualProps.front(), "id"));
            addAttr(frameAttrs, "name", attrLocal(*nonVisualProps.front(), "name"));
        }
        md.open("shape", frameAttrs);
        for (const XmlNode* chart : descendantsLocal(*frame, "chart")) {
            emitChartRef(*chart, md, rels, part);
        }
        md.close("shape");
    }

    md.close("drawing_object");
}

void parseWorksheet(const Package& package,
                    const std::string& part,
                    const std::string& name,
                    MarkdownWriter& md,
                    const std::vector<std::string>& shared,
                    const std::vector<TextFormat>& formats)
{
    XmlParser parser;
    auto doc = parser.parse(package.readEntry(part));
    RelationshipMap rels = loadRelationships(package, part);

    std::map<std::string, std::string> hyperlinkTargets;
    for (const XmlNode* hyperlink : descendantsLocal(*doc, "hyperlink")) {
        std::string ref = attrLocal(*hyperlink, "ref");
        std::string id = relationshipIdAttr(*hyperlink);
        std::string target = relationshipTarget(rels, id, part);
        if (target.empty()) {
            target = attrLocal(*hyperlink, "location");
        }
        if (!ref.empty()) {
            hyperlinkTargets[ref] = target;
        }
    }

    Attrs tableAttrs = tagAttrs("table");
    addAttr(tableAttrs, "sheet", name);
    addAttr(tableAttrs, "part", part);
    md.open("table", tableAttrs);

    for (const XmlNode* row : descendantsLocal(*doc, "row")) {
        Attrs rowAttrs = tagAttrs("table_row");
        addAttr(rowAttrs, "index", attrLocal(*row, "r"));
        md.open("table_row", rowAttrs);
        for (const XmlNode* cell : childrenLocal(*row, "c")) {
            TextFormat format = xlsxCellFormat(formats, *cell);
            Attrs cellAttrs = formattedAttrs("table_cell", format);
            std::string ref = attrLocal(*cell, "r");
            addAttr(cellAttrs, "ref", ref);
            md.open("table_cell", cellAttrs);

            auto hyperlinkIt = hyperlinkTargets.find(ref);
            bool hasHyperlink = hyperlinkIt != hyperlinkTargets.end();
            if (hasHyperlink) {
                Attrs hAttrs = formattedAttrs("hyperlink", format);
                addAttr(hAttrs, "target", hyperlinkIt->second);
                md.open("hyperlink", hAttrs);
            }
            if (const XmlNode* formula = firstChildLocal(*cell, "f")) {
                md.text("formula", tagAttrs("formula"), formula->text);
            }
            std::string value = xlsxCellText(*cell, shared);
            if (!value.empty()) {
                emitPlainText(md, format, value);
            }
            if (hasHyperlink) {
                md.close("hyperlink");
            }
            md.close("table_cell");
        }
        md.close("table_row");
    }
    md.close("table");

    for (const XmlNode* drawing : descendantsLocal(*doc, "drawing")) {
        std::string id = relationshipIdAttr(*drawing);
        std::string target = relationshipTarget(rels, id, part);
        if (!target.empty()) {
            emitOoxDrawingPart(package, target, md, {});
        }
    }
}

void parseXlsx(const Package& package, MarkdownWriter& md, const fs::path& source)
{
    md.rawLine("# Office Outline");
    md.rawLine("");
    Attrs attrs = tagAttrs("document");
    addAttr(attrs, "type", "xlsx");
    addAttr(attrs, "source", source.string());
    md.open("document", attrs);

    std::vector<TextFormat> formats = loadXlsxFormats(package);
    std::vector<std::string> shared = loadSharedStrings(package);
    RelationshipMap workbookRels = loadRelationships(package, "xl/workbook.xml");

    if (package.exists("xl/workbook.xml")) {
        XmlParser parser;
        auto doc = parser.parse(package.readEntry("xl/workbook.xml"));
        for (const XmlNode* sheet : descendantsLocal(*doc, "sheet")) {
            std::string sheetName = attrLocal(*sheet, "name");
            std::string id = relationshipIdAttr(*sheet);
            std::string target = relationshipTarget(workbookRels, id, "xl/workbook.xml");
            if (!target.empty() && package.exists(target)) {
                parseWorksheet(package, target, sheetName, md, shared, formats);
            }
        }
    }

    md.close("document");
}

void emitPptxTable(const XmlNode& table, MarkdownWriter& md, const RelationshipMap& rels, const std::string& part, const TextFormat& baseFormat)
{
    Attrs attrs = formattedAttrs("table", baseFormat);
    md.open("table", attrs);
    int rowIndex = 0;
    for (const XmlNode* row : childrenLocal(table, "tr")) {
        Attrs rowAttrs = tagAttrs("table_row");
        addAttr(rowAttrs, "index", std::to_string(rowIndex++));
        md.open("table_row", rowAttrs);
        int colIndex = 0;
        for (const XmlNode* cell : childrenLocal(*row, "tc")) {
            Attrs cellAttrs = formattedAttrs("table_cell", baseFormat);
            addAttr(cellAttrs, "column", std::to_string(colIndex++));
            md.open("table_cell", cellAttrs);
            emitDrawingTextBody(*cell, md, baseFormat, rels, part);
            md.close("table_cell");
        }
        md.close("table_row");
    }
    md.close("table");
}

void parseSlide(const Package& package, const std::string& part, const std::string& slideName, MarkdownWriter& md)
{
    XmlParser parser;
    auto doc = parser.parse(package.readEntry(part));
    RelationshipMap rels = loadRelationships(package, part);
    TextFormat baseFormat;

    Attrs slideAttrs = tagAttrs("part");
    addAttr(slideAttrs, "kind", "slide");
    addAttr(slideAttrs, "name", slideName);
    addAttr(slideAttrs, "path", part);
    md.open("part", slideAttrs);

    for (const XmlNode* pic : descendantsLocal(*doc, "pic")) {
        Attrs drawingAttrs = tagAttrs("drawing_object");
        addAttr(drawingAttrs, "kind", "picture");
        md.open("drawing_object", drawingAttrs);
        for (const XmlNode* blip : descendantsLocal(*pic, "blip")) {
            std::string id = attrLocal(*blip, "embed");
            Attrs imageAttrs = tagAttrs("image");
            addAttr(imageAttrs, "relationshipId", id);
            addAttr(imageAttrs, "target", relationshipTarget(rels, id, part));
            md.empty("image", imageAttrs);
        }
        md.close("drawing_object");
    }

    for (const XmlNode* shape : descendantsLocal(*doc, "sp")) {
        Attrs shapeAttrs = tagAttrs("shape");
        if (const XmlNode* cNvPr = descendantsLocal(*shape, "cNvPr").empty() ? nullptr : descendantsLocal(*shape, "cNvPr").front()) {
            addAttr(shapeAttrs, "id", attrLocal(*cNvPr, "id"));
            addAttr(shapeAttrs, "name", attrLocal(*cNvPr, "name"));
        }
        if (const XmlNode* prst = descendantsLocal(*shape, "prstGeom").empty() ? nullptr : descendantsLocal(*shape, "prstGeom").front()) {
            addAttr(shapeAttrs, "presetGeometry", attrLocal(*prst, "prst"));
        }
        md.open("shape", shapeAttrs);
        if (const XmlNode* txBody = firstChildLocal(*shape, "txBody")) {
            Attrs boxAttrs = formattedAttrs("text_box", baseFormat);
            md.open("text_box", boxAttrs);
            emitDrawingTextBody(*txBody, md, baseFormat, rels, part);
            md.close("text_box");
        }
        md.close("shape");
    }

    for (const XmlNode* frame : descendantsLocal(*doc, "graphicFrame")) {
        std::vector<const XmlNode*> charts = descendantsLocal(*frame, "chart");
        if (charts.empty()) {
            continue;
        }
        Attrs frameAttrs = tagAttrs("shape");
        addAttr(frameAttrs, "sourceElement", frame->name);
        std::vector<const XmlNode*> nonVisualProps = descendantsLocal(*frame, "cNvPr");
        if (!nonVisualProps.empty()) {
            addAttr(frameAttrs, "id", attrLocal(*nonVisualProps.front(), "id"));
            addAttr(frameAttrs, "name", attrLocal(*nonVisualProps.front(), "name"));
        }
        md.open("shape", frameAttrs);
        for (const XmlNode* chart : charts) {
            emitChartRef(*chart, md, rels, part);
        }
        md.close("shape");
    }

    for (const XmlNode* table : descendantsLocal(*doc, "tbl")) {
        emitPptxTable(*table, md, rels, part, baseFormat);
    }

    md.close("part");
}

void parsePptx(const Package& package, MarkdownWriter& md, const fs::path& source)
{
    md.rawLine("# Office Outline");
    md.rawLine("");
    Attrs attrs = tagAttrs("document");
    addAttr(attrs, "type", "pptx");
    addAttr(attrs, "source", source.string());
    md.open("document", attrs);

    RelationshipMap rels = loadRelationships(package, "ppt/presentation.xml");
    if (package.exists("ppt/presentation.xml")) {
        XmlParser parser;
        auto doc = parser.parse(package.readEntry("ppt/presentation.xml"));
        int index = 1;
        for (const XmlNode* slideId : descendantsLocal(*doc, "sldId")) {
            std::string id = relationshipIdAttr(*slideId);
            std::string target = relationshipTarget(rels, id, "ppt/presentation.xml");
            if (!target.empty() && package.exists(target)) {
                parseSlide(package, target, "slide" + std::to_string(index++), md);
            }
        }
    }

    md.close("document");
}

void parseOfficeFile(const fs::path& input, std::ostream& out)
{
    if (!fs::exists(input)) {
        throw std::runtime_error("Input file does not exist: " + input.string());
    }
    Package package(input);
    MarkdownWriter md(out);
    std::string ext = lower(input.extension().string());
    if (ext == ".docx") {
        parseDocx(package, md, input);
    } else if (ext == ".xlsx") {
        parseXlsx(package, md, input);
    } else if (ext == ".pptx") {
        parsePptx(package, md, input);
    } else {
        throw std::runtime_error("Unsupported extension: " + ext + " (expected .docx, .xlsx, or .pptx)");
    }
}

void printUsage(const char* argv0)
{
    std::cerr << "Usage: " << argv0 << " <input.docx|input.xlsx|input.pptx> [-o output.md]\n";
}

} // namespace

} // namespace outline

int main(int argc, char** argv)
{
    if (argc < 2) {
        outline::printUsage(argv[0]);
        return 2;
    }

    fs::path input;
    fs::path output;
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if ((arg == "-o" || arg == "--output") && i + 1 < argc) {
            output = argv[++i];
        } else if (input.empty()) {
            input = arg;
        } else {
            outline::printUsage(argv[0]);
            return 2;
        }
    }

    try {
        if (output.empty()) {
            outline::parseOfficeFile(input, std::cout);
        } else {
            std::ofstream out(output);
            if (!out) {
                throw std::runtime_error("Cannot open output file: " + output.string());
            }
            outline::parseOfficeFile(input, out);
        }
    } catch (const std::exception& ex) {
        std::cerr << "office-outline: " << ex.what() << '\n';
        return 1;
    }

    return 0;
}
