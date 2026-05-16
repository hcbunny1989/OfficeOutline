#include "xml.hpp"

#include <algorithm>
#include <cctype>
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

std::string twipsToPt(const std::string& value)
{
    if (value.empty()) {
        return {};
    }
    try {
        return formatNumber(std::stod(value) / 20.0);
    } catch (...) {
        return value;
    }
}

std::string emuToPt(const std::string& value)
{
    if (value.empty()) {
        return {};
    }
    try {
        return formatNumber(std::stod(value) / 12700.0);
    } catch (...) {
        return value;
    }
}

std::string normalizeWordAlignment(const std::string& value)
{
    std::string v = lower(value);
    if (v == "start") {
        return "left";
    }
    if (v == "end") {
        return "right";
    }
    if (v == "both") {
        return "justify";
    }
    return value;
}

std::string normalizeDrawingAlignment(const std::string& value)
{
    std::string v = lower(value);
    if (v == "l") {
        return "left";
    }
    if (v == "ctr") {
        return "center";
    }
    if (v == "r") {
        return "right";
    }
    if (v == "just" || v == "dist") {
        return "justify";
    }
    return value;
}

std::string contentTypeForPath(const std::string& target)
{
    std::string ext = lower(fs::path(target).extension().string());
    if (ext == ".png") {
        return "image/png";
    }
    if (ext == ".jpg" || ext == ".jpeg") {
        return "image/jpeg";
    }
    if (ext == ".gif") {
        return "image/gif";
    }
    if (ext == ".bmp") {
        return "image/bmp";
    }
    if (ext == ".tif" || ext == ".tiff") {
        return "image/tiff";
    }
    if (ext == ".emf") {
        return "image/x-emf";
    }
    if (ext == ".wmf") {
        return "image/x-wmf";
    }
    if (ext == ".svg") {
        return "image/svg+xml";
    }
    return {};
}

struct TextFormat {
    std::string fontName;
    std::string fontSize;
    std::string fontColor;
    std::optional<bool> bold;
    std::optional<bool> italic;
    std::string underline;
};

struct ParagraphInfo {
    std::string alignment;
    std::string indentLeft;
    std::string indentRight;
    std::string indentFirstLine;
    std::string indentHanging;
    std::string marginLeft;
    std::string marginRight;
    std::string indent;
    std::string listId;
    std::string listLevel;
    std::string listType;
    std::string listFormat;
    std::string listText;
    std::string bulletChar;
    std::string numberingType;
    std::string numberingStart;
};

struct CellFormat {
    TextFormat text;
    std::string alignment;
    std::string verticalAlignment;
    std::string indent;
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

void addParagraphAttrs(Attrs& attrs, const ParagraphInfo& paragraph)
{
    addAttr(attrs, "alignment", paragraph.alignment);
    addAttr(attrs, "indentLeft", paragraph.indentLeft);
    addAttr(attrs, "indentRight", paragraph.indentRight);
    addAttr(attrs, "indentFirstLine", paragraph.indentFirstLine);
    addAttr(attrs, "indentHanging", paragraph.indentHanging);
    addAttr(attrs, "marginLeft", paragraph.marginLeft);
    addAttr(attrs, "marginRight", paragraph.marginRight);
    addAttr(attrs, "indent", paragraph.indent);
    addAttr(attrs, "listId", paragraph.listId);
    addAttr(attrs, "listLevel", paragraph.listLevel);
    addAttr(attrs, "listType", paragraph.listType);
    addAttr(attrs, "listFormat", paragraph.listFormat);
    addAttr(attrs, "listText", paragraph.listText);
    addAttr(attrs, "bulletChar", paragraph.bulletChar);
    addAttr(attrs, "numberingType", paragraph.numberingType);
    addAttr(attrs, "numberingStart", paragraph.numberingStart);
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

bool isExternalTarget(const std::string& target)
{
    return target.rfind("http://", 0) == 0 || target.rfind("https://", 0) == 0 || target.rfind("mailto:", 0) == 0;
}

void addEmbeddedObjectAttrs(Attrs& attrs, const Package& package, const std::string& target)
{
    addAttr(attrs, "contentType", contentTypeForPath(target));
    if (target.empty() || isExternalTarget(target) || !package.exists(target)) {
        return;
    }

    std::string data = package.readEntry(target);
    attrs.emplace_back("dataAvailable", "true");
    attrs.emplace_back("sizeBytes", std::to_string(data.size()));
}

bool addNonVisualAttrs(Attrs& attrs, const XmlNode& node)
{
    for (const XmlNode* current = &node; current; current = current->parent) {
        std::vector<const XmlNode*> candidates;
        std::string currentName = localName(current->name);
        if (currentName == "docPr" || currentName == "cNvPr") {
            candidates.push_back(current);
        }
        std::vector<const XmlNode*> docPr = descendantsLocal(*current, "docPr");
        candidates.insert(candidates.end(), docPr.begin(), docPr.end());
        std::vector<const XmlNode*> cNvPr = descendantsLocal(*current, "cNvPr");
        candidates.insert(candidates.end(), cNvPr.begin(), cNvPr.end());

        for (const XmlNode* candidate : candidates) {
            std::string objectId = attrLocal(*candidate, "id");
            std::string name = attrLocal(*candidate, "name");
            std::string description = attrLocal(*candidate, "descr");
            std::string title = attrLocal(*candidate, "title");
            if (objectId.empty() && name.empty() && description.empty() && title.empty()) {
                continue;
            }
            addAttr(attrs, "objectId", objectId);
            addAttr(attrs, "objectName", name);
            addAttr(attrs, "description", description);
            addAttr(attrs, "title", title);
            return true;
        }
    }
    return false;
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

class NumberingSet {
public:
    struct Level {
        std::string format;
        std::string text;
    };

    void load(const Package& package)
    {
        if (!package.exists("word/numbering.xml")) {
            return;
        }

        XmlParser parser;
        auto doc = parser.parse(package.readEntry("word/numbering.xml"));
        const XmlNode* root = documentElement(*doc);
        if (!root) {
            return;
        }

        for (const XmlNode* abstractNum : childrenLocal(*root, "abstractNum")) {
            std::string abstractId = attrLocal(*abstractNum, "abstractNumId");
            if (abstractId.empty()) {
                continue;
            }
            for (const XmlNode* lvl : childrenLocal(*abstractNum, "lvl")) {
                std::string ilvl = attrLocal(*lvl, "ilvl");
                if (ilvl.empty()) {
                    ilvl = "0";
                }
                Level level;
                if (const XmlNode* numFmt = firstChildLocal(*lvl, "numFmt")) {
                    level.format = attrLocal(*numFmt, "val");
                }
                if (const XmlNode* lvlText = firstChildLocal(*lvl, "lvlText")) {
                    level.text = attrLocal(*lvlText, "val");
                }
                abstractLevels_[abstractId][ilvl] = std::move(level);
            }
        }

        for (const XmlNode* num : childrenLocal(*root, "num")) {
            std::string numId = attrLocal(*num, "numId");
            const XmlNode* abstractNumId = firstChildLocal(*num, "abstractNumId");
            if (!numId.empty() && abstractNumId) {
                numToAbstract_[numId] = attrLocal(*abstractNumId, "val");
            }
        }
    }

    Level level(const std::string& numId, const std::string& ilvl) const
    {
        auto numIt = numToAbstract_.find(numId);
        if (numIt == numToAbstract_.end()) {
            return {};
        }
        auto abstractIt = abstractLevels_.find(numIt->second);
        if (abstractIt == abstractLevels_.end()) {
            return {};
        }
        std::string levelId = ilvl.empty() ? "0" : ilvl;
        auto levelIt = abstractIt->second.find(levelId);
        if (levelIt == abstractIt->second.end()) {
            return {};
        }
        return levelIt->second;
    }

private:
    std::map<std::string, std::map<std::string, Level>> abstractLevels_;
    std::map<std::string, std::string> numToAbstract_;
};

struct DocxContext {
    const Package& package;
    MarkdownWriter& md;
    StyleSet styles;
    NumberingSet numbering;
};

Attrs formattedAttrs(std::string tag, const TextFormat& format)
{
    Attrs attrs = tagAttrs(std::move(tag));
    addFormatAttrs(attrs, format);
    return attrs;
}

Attrs formattedCellAttrs(std::string tag, const CellFormat& format)
{
    Attrs attrs = formattedAttrs(std::move(tag), format.text);
    addAttr(attrs, "alignment", format.alignment);
    addAttr(attrs, "verticalAlignment", format.verticalAlignment);
    addAttr(attrs, "indent", format.indent);
    return attrs;
}

void emitWordContent(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& baseFormat);
void emitWordInline(const XmlNode& node, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& currentFormat);
void emitChartRef(const Package& package, const XmlNode& chart, MarkdownWriter& md, const RelationshipMap& rels, const std::string& part);

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

ParagraphInfo wordParagraphInfo(const XmlNode& paragraph, const NumberingSet& numbering)
{
    ParagraphInfo info;
    const XmlNode* pPr = firstChildLocal(paragraph, "pPr");
    if (!pPr) {
        return info;
    }

    if (const XmlNode* jc = firstChildLocal(*pPr, "jc")) {
        info.alignment = normalizeWordAlignment(attrLocal(*jc, "val"));
    }
    if (const XmlNode* ind = firstChildLocal(*pPr, "ind")) {
        std::string left = attrLocal(*ind, "left");
        if (left.empty()) {
            left = attrLocal(*ind, "start");
        }
        std::string right = attrLocal(*ind, "right");
        if (right.empty()) {
            right = attrLocal(*ind, "end");
        }
        info.indentLeft = twipsToPt(left);
        info.indentRight = twipsToPt(right);
        info.indentFirstLine = twipsToPt(attrLocal(*ind, "firstLine"));
        info.indentHanging = twipsToPt(attrLocal(*ind, "hanging"));
    }
    if (const XmlNode* numPr = firstChildLocal(*pPr, "numPr")) {
        if (const XmlNode* ilvl = firstChildLocal(*numPr, "ilvl")) {
            info.listLevel = attrLocal(*ilvl, "val");
        }
        if (const XmlNode* numId = firstChildLocal(*numPr, "numId")) {
            info.listId = attrLocal(*numId, "val");
        }
        NumberingSet::Level level = numbering.level(info.listId, info.listLevel);
        info.listFormat = level.format;
        info.listText = level.text;
        if (!info.listId.empty()) {
            info.listType = lower(level.format) == "bullet" ? "bullet" : "numbered";
        }
    }
    return info;
}

ParagraphInfo drawingParagraphInfo(const XmlNode& paragraph)
{
    ParagraphInfo info;
    const XmlNode* pPr = firstChildLocal(paragraph, "pPr");
    if (!pPr) {
        return info;
    }

    info.alignment = normalizeDrawingAlignment(attrLocal(*pPr, "algn"));
    info.listLevel = attrLocal(*pPr, "lvl");
    info.marginLeft = emuToPt(attrLocal(*pPr, "marL"));
    info.marginRight = emuToPt(attrLocal(*pPr, "marR"));
    info.indent = emuToPt(attrLocal(*pPr, "indent"));

    if (const XmlNode* bullet = firstChildLocal(*pPr, "buChar")) {
        info.listType = "bullet";
        info.bulletChar = attrLocal(*bullet, "char");
    } else if (const XmlNode* autoNum = firstChildLocal(*pPr, "buAutoNum")) {
        info.listType = "numbered";
        info.numberingType = attrLocal(*autoNum, "type");
        info.numberingStart = attrLocal(*autoNum, "startAt");
    } else if (firstChildLocal(*pPr, "buNone")) {
        info.listType = "none";
    }
    return info;
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

std::string revisionType(const std::string& name)
{
    if (name == "ins") {
        return "insert";
    }
    if (name == "del") {
        return "delete";
    }
    if (name == "moveFrom") {
        return "moveFrom";
    }
    if (name == "moveTo") {
        return "moveTo";
    }
    return name;
}

void addRevisionAttrs(Attrs& attrs, const XmlNode& node)
{
    addAttr(attrs, "id", attrLocal(node, "id"));
    addAttr(attrs, "author", attrLocal(node, "author"));
    addAttr(attrs, "date", attrLocal(node, "date"));
}

void emitBookmark(MarkdownWriter& md, const XmlNode& node)
{
    std::string name = localName(node.name);
    Attrs attrs = tagAttrs("bookmark");
    addAttr(attrs, "action", name == "bookmarkEnd" ? "end" : "start");
    addAttr(attrs, "id", attrLocal(node, "id"));
    addAttr(attrs, "name", attrLocal(node, "name"));
    addAttr(attrs, "columnFirst", attrLocal(node, "colFirst"));
    addAttr(attrs, "columnLast", attrLocal(node, "colLast"));
    md.empty("bookmark", attrs);
}

void emitGenericBookmarks(const XmlNode& root, MarkdownWriter& md)
{
    for (std::string name : {"bookmark", "bmk"}) {
        for (const XmlNode* bookmark : descendantsLocal(root, name)) {
            Attrs attrs = tagAttrs("bookmark");
            addAttr(attrs, "sourceElement", bookmark->name);
            addAttr(attrs, "id", attrLocal(*bookmark, "id"));
            addAttr(attrs, "name", attrLocal(*bookmark, "name"));
            addAttr(attrs, "target", attrLocal(*bookmark, "target"));
            md.empty("bookmark", attrs);
        }
    }
}

void emitRevision(const XmlNode& revision, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& format)
{
    Attrs attrs = tagAttrs("revision");
    addAttr(attrs, "type", revisionType(localName(revision.name)));
    addRevisionAttrs(attrs, revision);
    ctx.md.open("revision", attrs);
    for (const auto& child : revision.children) {
        emitWordInline(*child, rels, part, ctx, format);
    }
    ctx.md.close("revision");
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
        std::string target = relationshipTarget(rels, id, part);
        addAttr(imageAttrs, "target", target);
        addNonVisualAttrs(imageAttrs, *blip);
        addEmbeddedObjectAttrs(imageAttrs, ctx.package, target);
        ctx.md.empty("image", imageAttrs);
    }
    for (const XmlNode* imageData : descendantsLocal(drawing, "imagedata")) {
        std::string id = relationshipIdAttr(*imageData);
        Attrs imageAttrs = tagAttrs("image");
        addAttr(imageAttrs, "relationshipId", id);
        std::string target = relationshipTarget(rels, id, part);
        addAttr(imageAttrs, "target", target);
        addNonVisualAttrs(imageAttrs, *imageData);
        addEmbeddedObjectAttrs(imageAttrs, ctx.package, target);
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
            addNonVisualAttrs(shapeAttrs, *shape);
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

    for (const XmlNode* chart : descendantsLocal(drawing, "chart")) {
        emitChartRef(ctx.package, *chart, ctx.md, rels, part);
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
    addParagraphAttrs(attrs, wordParagraphInfo(paragraph, ctx.numbering));
    ctx.md.open("paragraph", attrs);

    for (const auto& child : paragraph.children) {
        if (localName(child->name) == "pPr") {
            continue;
        }
        emitWordInline(*child, rels, part, ctx, format);
    }

    ctx.md.close("paragraph");
}

int wordGridSpan(const XmlNode& cell)
{
    const XmlNode* tcPr = firstChildLocal(cell, "tcPr");
    if (!tcPr) {
        return 1;
    }
    const XmlNode* gridSpan = firstChildLocal(*tcPr, "gridSpan");
    if (!gridSpan) {
        return 1;
    }
    try {
        return std::max(1, std::stoi(attrLocal(*gridSpan, "val")));
    } catch (...) {
        return 1;
    }
}

std::string wordVMergeState(const XmlNode& cell)
{
    const XmlNode* tcPr = firstChildLocal(cell, "tcPr");
    if (!tcPr) {
        return {};
    }
    const XmlNode* vMerge = firstChildLocal(*tcPr, "vMerge");
    if (!vMerge) {
        return {};
    }
    std::string value = attrLocal(*vMerge, "val");
    if (value.empty()) {
        return "continue";
    }
    return value;
}

struct WordTableCell {
    const XmlNode* node = nullptr;
    int column = 0;
    int colspan = 1;
    int rowspan = 1;
    int mergeOriginRow = -1;
    int mergeOriginColumn = -1;
    std::string vMerge;
};

WordTableCell* findWordCellAtColumn(std::vector<WordTableCell>& row, int column)
{
    for (WordTableCell& cell : row) {
        if (cell.column == column) {
            return &cell;
        }
    }
    return nullptr;
}

std::vector<std::vector<WordTableCell>> collectWordTableCells(const XmlNode& table)
{
    std::vector<std::vector<WordTableCell>> rows;
    for (const auto& rowPtr : table.children) {
        if (localName(rowPtr->name) != "tr") {
            continue;
        }
        std::vector<WordTableCell> cells;
        int column = 0;
        for (const auto& cellPtr : rowPtr->children) {
            if (localName(cellPtr->name) != "tc") {
                continue;
            }
            WordTableCell cell;
            cell.node = cellPtr.get();
            cell.column = column;
            cell.colspan = wordGridSpan(*cell.node);
            cell.vMerge = wordVMergeState(*cell.node);
            cells.push_back(cell);
            column += cell.colspan;
        }
        rows.push_back(std::move(cells));
    }

    for (size_t rowIndex = 0; rowIndex < rows.size(); ++rowIndex) {
        for (WordTableCell& cell : rows[rowIndex]) {
            if (cell.vMerge == "restart") {
                int rowspan = 1;
                for (size_t next = rowIndex + 1; next < rows.size(); ++next) {
                    WordTableCell* continuation = findWordCellAtColumn(rows[next], cell.column);
                    if (!continuation || continuation->vMerge != "continue") {
                        break;
                    }
                    continuation->rowspan = 0;
                    continuation->mergeOriginRow = static_cast<int>(rowIndex);
                    continuation->mergeOriginColumn = cell.column;
                    ++rowspan;
                }
                cell.rowspan = rowspan;
            } else if (cell.vMerge == "continue") {
                cell.rowspan = 0;
            }
        }
    }

    return rows;
}

void emitTable(const XmlNode& table, const RelationshipMap& rels, const std::string& part, DocxContext& ctx, const TextFormat& baseFormat)
{
    Attrs attrs = formattedAttrs("table", baseFormat);
    ctx.md.open("table", attrs);
    std::vector<std::vector<WordTableCell>> rows = collectWordTableCells(table);
    for (size_t rowIndex = 0; rowIndex < rows.size(); ++rowIndex) {
        Attrs rowAttrs = tagAttrs("table_row");
        addAttr(rowAttrs, "index", std::to_string(rowIndex));
        ctx.md.open("table_row", rowAttrs);
        for (const WordTableCell& cell : rows[rowIndex]) {
            Attrs cellAttrs = formattedAttrs("table_cell", baseFormat);
            addAttr(cellAttrs, "column", std::to_string(cell.column));
            cellAttrs.emplace_back("rowspan", std::to_string(cell.rowspan));
            cellAttrs.emplace_back("colspan", std::to_string(cell.colspan));
            addAttr(cellAttrs, "vMerge", cell.vMerge);
            if (cell.mergeOriginRow < 0 && (cell.rowspan > 1 || cell.colspan > 1)) {
                addAttr(cellAttrs, "merged", "origin");
            }
            if (cell.mergeOriginRow >= 0) {
                addAttr(cellAttrs, "merged", "covered");
                addAttr(cellAttrs, "mergeOriginRow", std::to_string(cell.mergeOriginRow));
                addAttr(cellAttrs, "mergeOriginColumn", std::to_string(cell.mergeOriginColumn));
            }
            ctx.md.open("table_cell", cellAttrs);
            emitWordContent(*cell.node, rels, part, ctx, baseFormat);
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
    } else if (name == "ins" || name == "del" || name == "moveTo" || name == "moveFrom") {
        emitRevision(node, rels, part, ctx, currentFormat);
    } else if (name == "bookmarkStart" || name == "bookmarkEnd") {
        emitBookmark(ctx.md, node);
    } else if (name == "fldSimple" || name == "smartTag" || name == "sdt" || name == "sdtContent") {
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
        } else if (name == "bookmarkStart" || name == "bookmarkEnd") {
            emitBookmark(ctx.md, *child);
        } else if (name == "ins" || name == "del" || name == "moveTo" || name == "moveFrom") {
            emitRevision(*child, rels, part, ctx, baseFormat);
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

void emitRevisionPartSummaries(const Package& package, MarkdownWriter& md, const std::string& prefix)
{
    for (const std::string& part : package.entries(prefix, ".xml")) {
        std::string lowered = lower(part);
        if (lowered.find("revision") == std::string::npos && lowered.find("/revisions/") == std::string::npos) {
            continue;
        }

        Attrs attrs = tagAttrs("revision");
        addAttr(attrs, "part", part);
        try {
            XmlParser parser;
            auto doc = parser.parse(package.readEntry(part));
            if (const XmlNode* root = documentElement(*doc)) {
                addAttr(attrs, "element", localName(root->name));
                addRevisionAttrs(attrs, *root);
            }
        } catch (...) {
        }
        md.empty("revision", attrs);
    }
}

void parseDocx(const Package& package, MarkdownWriter& md, const fs::path& source)
{
    DocxContext ctx{package, md, {}, {}};
    ctx.styles.load(package);
    ctx.numbering.load(package);

    md.rawLine("# Office Outline");
    md.rawLine("");
    Attrs attrs = tagAttrs("document");
    addAttr(attrs, "type", "docx");
    addAttr(attrs, "source", source.string());
    md.open("document", attrs);
    emitRevisionPartSummaries(package, md, "word/");

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

std::vector<CellFormat> loadXlsxFormats(const Package& package)
{
    std::vector<CellFormat> formats;
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
            CellFormat format;
            std::string fontId = attrLocal(*xf, "fontId");
            if (!fontId.empty()) {
                try {
                    size_t idx = static_cast<size_t>(std::stoul(fontId));
                    if (idx < fonts.size()) {
                        format.text = fonts[idx];
                    }
                } catch (...) {
                }
            }
            if (const XmlNode* alignment = firstChildLocal(*xf, "alignment")) {
                format.alignment = attrLocal(*alignment, "horizontal");
                format.verticalAlignment = attrLocal(*alignment, "vertical");
                format.indent = attrLocal(*alignment, "indent");
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

CellFormat xlsxCellFormat(const std::vector<CellFormat>& formats, const XmlNode& cell)
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

struct CellAddress {
    int row = 0;
    int column = 0;
};

struct CellRange {
    CellAddress start;
    CellAddress end;
    std::string ref;
};

std::optional<CellAddress> parseCellAddress(std::string_view ref)
{
    CellAddress address;
    size_t pos = 0;
    while (pos < ref.size() && std::isalpha(static_cast<unsigned char>(ref[pos]))) {
        address.column = address.column * 26 + (std::toupper(static_cast<unsigned char>(ref[pos])) - 'A' + 1);
        ++pos;
    }
    while (pos < ref.size() && std::isdigit(static_cast<unsigned char>(ref[pos]))) {
        address.row = address.row * 10 + (ref[pos] - '0');
        ++pos;
    }
    if (address.row <= 0 || address.column <= 0) {
        return std::nullopt;
    }
    return address;
}

std::optional<CellRange> parseCellRange(std::string ref)
{
    size_t colon = ref.find(':');
    if (colon == std::string::npos) {
        return std::nullopt;
    }
    std::optional<CellAddress> start = parseCellAddress(std::string_view(ref).substr(0, colon));
    std::optional<CellAddress> end = parseCellAddress(std::string_view(ref).substr(colon + 1));
    if (!start || !end) {
        return std::nullopt;
    }
    CellRange range;
    range.start = *start;
    range.end = *end;
    range.ref = std::move(ref);
    return range;
}

bool containsCell(const CellRange& range, const CellAddress& address)
{
    return address.row >= range.start.row && address.row <= range.end.row && address.column >= range.start.column && address.column <= range.end.column;
}

const CellRange* findMergeRange(const std::vector<CellRange>& ranges, const CellAddress& address)
{
    for (const CellRange& range : ranges) {
        if (containsCell(range, address)) {
            return &range;
        }
    }
    return nullptr;
}

std::vector<CellRange> xlsxMergeRanges(const XmlNode& worksheet)
{
    std::vector<CellRange> ranges;
    for (const XmlNode* mergeCell : descendantsLocal(worksheet, "mergeCell")) {
        std::optional<CellRange> range = parseCellRange(attrLocal(*mergeCell, "ref"));
        if (range) {
            ranges.push_back(std::move(*range));
        }
    }
    return ranges;
}

void emitDrawingTextBody(const XmlNode& body, MarkdownWriter& md, const TextFormat& baseFormat, const RelationshipMap& rels, const std::string& part)
{
    for (const XmlNode* paragraph : descendantsLocal(body, "p")) {
        Attrs pAttrs = formattedAttrs("paragraph", baseFormat);
        addParagraphAttrs(pAttrs, drawingParagraphInfo(*paragraph));
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

const XmlNode* firstDescendantLocalNode(const XmlNode& node, std::string_view name)
{
    std::vector<const XmlNode*> nodes = descendantsLocal(node, name);
    return nodes.empty() ? nullptr : nodes.front();
}

bool endsWith(std::string_view value, std::string_view suffix)
{
    return value.size() >= suffix.size() && value.substr(value.size() - suffix.size()) == suffix;
}

std::string firstFormulaRef(const XmlNode& node)
{
    const XmlNode* formula = firstDescendantLocalNode(node, "f");
    return formula ? formula->text : std::string();
}

std::string firstCachedPointValue(const XmlNode& node)
{
    for (const XmlNode* point : descendantsLocal(node, "pt")) {
        if (const XmlNode* value = firstChildLocal(*point, "v")) {
            return value->text;
        }
    }
    return {};
}

std::string chartType(const XmlNode& root)
{
    const XmlNode* plotArea = firstDescendantLocalNode(root, "plotArea");
    if (!plotArea) {
        return {};
    }
    for (const auto& child : plotArea->children) {
        std::string name = localName(child->name);
        if (endsWith(name, "Chart")) {
            return name;
        }
    }
    return {};
}

std::string chartTitle(const XmlNode& root)
{
    const XmlNode* title = firstDescendantLocalNode(root, "title");
    if (!title) {
        return {};
    }
    std::string text = textDescendants(*title, "t");
    if (text.empty()) {
        text = firstCachedPointValue(*title);
    }
    if (text.empty()) {
        text = firstFormulaRef(*title);
    }
    return text;
}

std::string chartSeriesName(const XmlNode& series)
{
    const XmlNode* tx = firstChildLocal(series, "tx");
    if (!tx) {
        return {};
    }
    std::string name = textDescendants(*tx, "t");
    if (name.empty()) {
        name = firstCachedPointValue(*tx);
    }
    if (name.empty()) {
        name = firstFormulaRef(*tx);
    }
    return name;
}

void emitChartRef(const Package& package, const XmlNode& chart, MarkdownWriter& md, const RelationshipMap& rels, const std::string& part)
{
    std::string id = relationshipIdAttr(chart);
    std::string target = relationshipTarget(rels, id, part);
    Attrs attrs = tagAttrs("chart");
    addAttr(attrs, "relationshipId", id);
    addAttr(attrs, "target", target);

    if (target.empty() || isExternalTarget(target) || !package.exists(target)) {
        md.empty("chart", attrs);
        return;
    }

    XmlParser parser;
    auto doc = parser.parse(package.readEntry(target));
    addAttr(attrs, "chartType", chartType(*doc));
    addAttr(attrs, "title", chartTitle(*doc));
    md.open("chart", attrs);

    for (const XmlNode* series : descendantsLocal(*doc, "ser")) {
        Attrs seriesAttrs = tagAttrs("chart_series");
        if (const XmlNode* idx = firstChildLocal(*series, "idx")) {
            addAttr(seriesAttrs, "index", attrLocal(*idx, "val"));
        }
        addAttr(seriesAttrs, "name", chartSeriesName(*series));
        if (const XmlNode* tx = firstChildLocal(*series, "tx")) {
            addAttr(seriesAttrs, "nameRef", firstFormulaRef(*tx));
        }
        if (const XmlNode* cat = firstChildLocal(*series, "cat")) {
            addAttr(seriesAttrs, "categoriesRef", firstFormulaRef(*cat));
            addAttr(seriesAttrs, "categoryCount", std::to_string(descendantsLocal(*cat, "pt").size()));
        }
        if (const XmlNode* val = firstChildLocal(*series, "val")) {
            addAttr(seriesAttrs, "valuesRef", firstFormulaRef(*val));
            addAttr(seriesAttrs, "valueCount", std::to_string(descendantsLocal(*val, "pt").size()));
        }
        md.empty("chart_series", seriesAttrs);
    }

    md.close("chart");
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
        std::string target = relationshipTarget(rels, id, part);
        addAttr(imageAttrs, "target", target);
        addNonVisualAttrs(imageAttrs, *blip);
        addEmbeddedObjectAttrs(imageAttrs, package, target);
        md.empty("image", imageAttrs);
    }
    for (const XmlNode* shape : descendantsLocal(*doc, "sp")) {
        Attrs shapeAttrs = tagAttrs("shape");
        addNonVisualAttrs(shapeAttrs, *shape);
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
        addNonVisualAttrs(frameAttrs, *frame);
        std::vector<const XmlNode*> nonVisualProps = descendantsLocal(*frame, "cNvPr");
        if (!nonVisualProps.empty()) {
            addAttr(frameAttrs, "id", attrLocal(*nonVisualProps.front(), "id"));
            addAttr(frameAttrs, "name", attrLocal(*nonVisualProps.front(), "name"));
        }
        md.open("shape", frameAttrs);
        for (const XmlNode* chart : descendantsLocal(*frame, "chart")) {
            emitChartRef(package, *chart, md, rels, part);
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
                    const std::vector<CellFormat>& formats)
{
    XmlParser parser;
    auto doc = parser.parse(package.readEntry(part));
    RelationshipMap rels = loadRelationships(package, part);
    std::vector<CellRange> mergeRanges = xlsxMergeRanges(*doc);

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
            CellFormat format = xlsxCellFormat(formats, *cell);
            Attrs cellAttrs = formattedCellAttrs("table_cell", format);
            std::string ref = attrLocal(*cell, "r");
            addAttr(cellAttrs, "ref", ref);
            std::string rowspanValue = "1";
            std::string colspanValue = "1";
            std::optional<CellAddress> address = parseCellAddress(ref);
            if (address) {
                const CellRange* mergeRange = findMergeRange(mergeRanges, *address);
                if (mergeRange) {
                    int rowspan = mergeRange->end.row - mergeRange->start.row + 1;
                    int colspan = mergeRange->end.column - mergeRange->start.column + 1;
                    addAttr(cellAttrs, "mergedRef", mergeRange->ref);
                    if (address->row == mergeRange->start.row && address->column == mergeRange->start.column) {
                        addAttr(cellAttrs, "merged", "origin");
                        rowspanValue = std::to_string(rowspan);
                        colspanValue = std::to_string(colspan);
                    } else {
                        addAttr(cellAttrs, "merged", "covered");
                        addAttr(cellAttrs, "mergeOriginRow", std::to_string(mergeRange->start.row));
                        addAttr(cellAttrs, "mergeOriginColumn", std::to_string(mergeRange->start.column));
                        rowspanValue = "0";
                        colspanValue = "0";
                    }
                }
            }
            cellAttrs.emplace_back("rowspan", rowspanValue);
            cellAttrs.emplace_back("colspan", colspanValue);
            md.open("table_cell", cellAttrs);

            auto hyperlinkIt = hyperlinkTargets.find(ref);
            bool hasHyperlink = hyperlinkIt != hyperlinkTargets.end();
            if (hasHyperlink) {
                Attrs hAttrs = formattedAttrs("hyperlink", format.text);
                addAttr(hAttrs, "target", hyperlinkIt->second);
                md.open("hyperlink", hAttrs);
            }
            if (const XmlNode* formula = firstChildLocal(*cell, "f")) {
                md.text("formula", tagAttrs("formula"), formula->text);
            }
            std::string value = xlsxCellText(*cell, shared);
            if (!value.empty()) {
                emitPlainText(md, format.text, value);
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
    emitRevisionPartSummaries(package, md, "xl/");

    std::vector<CellFormat> formats = loadXlsxFormats(package);
    std::vector<std::string> shared = loadSharedStrings(package);
    RelationshipMap workbookRels = loadRelationships(package, "xl/workbook.xml");

    if (package.exists("xl/workbook.xml")) {
        XmlParser parser;
        auto doc = parser.parse(package.readEntry("xl/workbook.xml"));
        for (const XmlNode* definedName : descendantsLocal(*doc, "definedName")) {
            Attrs bookmarkAttrs = tagAttrs("bookmark");
            addAttr(bookmarkAttrs, "type", "definedName");
            addAttr(bookmarkAttrs, "name", attrLocal(*definedName, "name"));
            addAttr(bookmarkAttrs, "localSheetId", attrLocal(*definedName, "localSheetId"));
            addAttr(bookmarkAttrs, "hidden", attrLocal(*definedName, "hidden"));
            md.text("bookmark", bookmarkAttrs, definedName->text);
        }
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
            std::string colspan = attrLocal(*cell, "gridSpan");
            std::string rowspan = attrLocal(*cell, "rowSpan");
            int colSpanValue = 1;
            if (!colspan.empty()) {
                try {
                    colSpanValue = std::max(1, std::stoi(colspan));
                } catch (...) {
                    colSpanValue = 1;
                }
            }
            addAttr(cellAttrs, "column", std::to_string(colIndex));
            cellAttrs.emplace_back("rowspan", rowspan.empty() ? "1" : rowspan);
            cellAttrs.emplace_back("colspan", colspan.empty() ? "1" : colspan);
            std::string hMerge = attrLocal(*cell, "hMerge");
            std::string vMerge = attrLocal(*cell, "vMerge");
            addAttr(cellAttrs, "hMerge", hMerge);
            addAttr(cellAttrs, "vMerge", vMerge);
            if ((!hMerge.empty() && !isFalseValue(hMerge)) || (!vMerge.empty() && !isFalseValue(vMerge))) {
                addAttr(cellAttrs, "merged", "covered");
            } else if ((rowspan.empty() ? "1" : rowspan) != "1" || (colspan.empty() ? "1" : colspan) != "1") {
                addAttr(cellAttrs, "merged", "origin");
            }
            md.open("table_cell", cellAttrs);
            emitDrawingTextBody(*cell, md, baseFormat, rels, part);
            md.close("table_cell");
            colIndex += colSpanValue;
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
    emitGenericBookmarks(*doc, md);

    for (const XmlNode* pic : descendantsLocal(*doc, "pic")) {
        Attrs drawingAttrs = tagAttrs("drawing_object");
        addAttr(drawingAttrs, "kind", "picture");
        md.open("drawing_object", drawingAttrs);
        for (const XmlNode* blip : descendantsLocal(*pic, "blip")) {
            std::string id = attrLocal(*blip, "embed");
            Attrs imageAttrs = tagAttrs("image");
            addAttr(imageAttrs, "relationshipId", id);
            std::string target = relationshipTarget(rels, id, part);
            addAttr(imageAttrs, "target", target);
            addNonVisualAttrs(imageAttrs, *blip);
            addEmbeddedObjectAttrs(imageAttrs, package, target);
            md.empty("image", imageAttrs);
        }
        md.close("drawing_object");
    }

    for (const XmlNode* shape : descendantsLocal(*doc, "sp")) {
        Attrs shapeAttrs = tagAttrs("shape");
        addNonVisualAttrs(shapeAttrs, *shape);
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
        addNonVisualAttrs(frameAttrs, *frame);
        std::vector<const XmlNode*> nonVisualProps = descendantsLocal(*frame, "cNvPr");
        if (!nonVisualProps.empty()) {
            addAttr(frameAttrs, "id", attrLocal(*nonVisualProps.front(), "id"));
            addAttr(frameAttrs, "name", attrLocal(*nonVisualProps.front(), "name"));
        }
        md.open("shape", frameAttrs);
        for (const XmlNode* chart : charts) {
            emitChartRef(package, *chart, md, rels, part);
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
    emitRevisionPartSummaries(package, md, "ppt/");

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
