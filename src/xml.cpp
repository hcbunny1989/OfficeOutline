#include "xml.hpp"

#include <cctype>
#include <sstream>
#include <stdexcept>

namespace outline {

namespace {

bool isNameChar(char c)
{
    unsigned char uc = static_cast<unsigned char>(c);
    return std::isalnum(uc) || c == '_' || c == ':' || c == '-' || c == '.';
}

void appendCodepoint(std::string& out, unsigned value)
{
    if (value <= 0x7F) {
        out.push_back(static_cast<char>(value));
    } else if (value <= 0x7FF) {
        out.push_back(static_cast<char>(0xC0 | (value >> 6)));
        out.push_back(static_cast<char>(0x80 | (value & 0x3F)));
    } else if (value <= 0xFFFF) {
        out.push_back(static_cast<char>(0xE0 | (value >> 12)));
        out.push_back(static_cast<char>(0x80 | ((value >> 6) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | (value & 0x3F)));
    } else {
        out.push_back(static_cast<char>(0xF0 | (value >> 18)));
        out.push_back(static_cast<char>(0x80 | ((value >> 12) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | ((value >> 6) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | (value & 0x3F)));
    }
}

bool localEquals(std::string_view name, std::string_view expected)
{
    return localName(name) == expected;
}

void collectDescendants(const XmlNode& node, std::string_view name, std::vector<const XmlNode*>& out)
{
    for (const auto& child : node.children) {
        if (localEquals(child->name, name)) {
            out.push_back(child.get());
        }
        collectDescendants(*child, name, out);
    }
}

void collectText(const XmlNode& node, std::string_view local, std::string& out)
{
    if ((local.empty() || localEquals(node.name, local)) && !node.text.empty()) {
        out += node.text;
    }
    for (const auto& child : node.children) {
        collectText(*child, local, out);
    }
}

} // namespace

std::unique_ptr<XmlNode> XmlParser::parse(std::string_view input)
{
    input_ = input;
    pos_ = 0;
    auto root = std::make_unique<XmlNode>();
    root->name = "#document";

    while (pos_ < input_.size()) {
        if (input_[pos_] == '<') {
            if (startsWith("<?")) {
                skipUntil("?>");
            } else if (startsWith("<!--")) {
                skipUntil("-->");
            } else if (startsWith("<![CDATA[")) {
                pos_ += 9;
                size_t end = input_.find("]]>", pos_);
                std::string cdata(input_.substr(pos_, end == std::string_view::npos ? input_.size() - pos_ : end - pos_));
                root->text += cdata;
                pos_ = end == std::string_view::npos ? input_.size() : end + 3;
            } else if (startsWith("<!")) {
                skipUntil(">");
            } else if (startsWith("</")) {
                throw std::runtime_error("Unexpected closing XML tag");
            } else {
                parseElement(*root);
            }
        } else {
            parseText(*root);
        }
    }

    return root;
}

bool XmlParser::startsWith(std::string_view value) const
{
    return input_.substr(pos_, value.size()) == value;
}

void XmlParser::skipWhitespace()
{
    while (pos_ < input_.size() && std::isspace(static_cast<unsigned char>(input_[pos_]))) {
        ++pos_;
    }
}

std::string XmlParser::parseName()
{
    size_t start = pos_;
    while (pos_ < input_.size() && isNameChar(input_[pos_])) {
        ++pos_;
    }
    return std::string(input_.substr(start, pos_ - start));
}

std::string XmlParser::parseAttributeValue()
{
    skipWhitespace();
    if (pos_ >= input_.size() || (input_[pos_] != '"' && input_[pos_] != '\'')) {
        return {};
    }
    char quote = input_[pos_++];
    size_t start = pos_;
    while (pos_ < input_.size() && input_[pos_] != quote) {
        ++pos_;
    }
    std::string value = decodeXmlEntities(input_.substr(start, pos_ - start));
    if (pos_ < input_.size()) {
        ++pos_;
    }
    return value;
}

void XmlParser::skipUntil(std::string_view marker)
{
    size_t end = input_.find(marker, pos_);
    pos_ = end == std::string_view::npos ? input_.size() : end + marker.size();
}

void XmlParser::parseElement(XmlNode& parent)
{
    if (input_[pos_] != '<') {
        return;
    }
    ++pos_;

    auto node = std::make_unique<XmlNode>();
    node->parent = &parent;
    node->name = parseName();

    while (pos_ < input_.size()) {
        skipWhitespace();
        if (startsWith("/>")) {
            pos_ += 2;
            parent.children.push_back(std::move(node));
            return;
        }
        if (startsWith(">")) {
            ++pos_;
            break;
        }

        std::string key = parseName();
        skipWhitespace();
        std::string value;
        if (pos_ < input_.size() && input_[pos_] == '=') {
            ++pos_;
            value = parseAttributeValue();
        }
        if (!key.empty()) {
            node->attrs[key] = value;
        }
    }

    while (pos_ < input_.size()) {
        if (startsWith("</")) {
            pos_ += 2;
            std::string closing = parseName();
            (void)closing;
            skipUntil(">");
            break;
        }
        if (startsWith("<?")) {
            skipUntil("?>");
        } else if (startsWith("<!--")) {
            skipUntil("-->");
        } else if (startsWith("<![CDATA[")) {
            pos_ += 9;
            size_t end = input_.find("]]>", pos_);
            node->text += std::string(input_.substr(pos_, end == std::string_view::npos ? input_.size() - pos_ : end - pos_));
            pos_ = end == std::string_view::npos ? input_.size() : end + 3;
        } else if (startsWith("<!")) {
            skipUntil(">");
        } else if (input_[pos_] == '<') {
            parseElement(*node);
        } else {
            parseText(*node);
        }
    }

    parent.children.push_back(std::move(node));
}

void XmlParser::parseText(XmlNode& node)
{
    size_t start = pos_;
    while (pos_ < input_.size() && input_[pos_] != '<') {
        ++pos_;
    }
    if (pos_ > start) {
        node.text += decodeXmlEntities(input_.substr(start, pos_ - start));
    }
}

std::string localName(std::string_view name)
{
    size_t colon = name.rfind(':');
    if (colon == std::string_view::npos) {
        return std::string(name);
    }
    return std::string(name.substr(colon + 1));
}

std::string attr(const XmlNode& node, std::string_view name)
{
    auto it = node.attrs.find(std::string(name));
    return it == node.attrs.end() ? std::string() : it->second;
}

std::string attrLocal(const XmlNode& node, std::string_view name)
{
    for (const auto& [key, value] : node.attrs) {
        if (localName(key) == name) {
            return value;
        }
    }
    return {};
}

const XmlNode* firstChildLocal(const XmlNode& node, std::string_view name)
{
    for (const auto& child : node.children) {
        if (localName(child->name) == name) {
            return child.get();
        }
    }
    return nullptr;
}

std::vector<const XmlNode*> childrenLocal(const XmlNode& node, std::string_view name)
{
    std::vector<const XmlNode*> result;
    for (const auto& child : node.children) {
        if (localName(child->name) == name) {
            result.push_back(child.get());
        }
    }
    return result;
}

std::vector<const XmlNode*> descendantsLocal(const XmlNode& node, std::string_view name)
{
    std::vector<const XmlNode*> result;
    collectDescendants(node, name, result);
    return result;
}

std::string textDescendants(const XmlNode& node, std::string_view local)
{
    std::string result;
    collectText(node, local, result);
    return result;
}

std::string decodeXmlEntities(std::string_view text)
{
    std::string out;
    out.reserve(text.size());
    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i] != '&') {
            out.push_back(text[i]);
            continue;
        }
        size_t semi = text.find(';', i + 1);
        if (semi == std::string_view::npos) {
            out.push_back(text[i]);
            continue;
        }
        std::string entity(text.substr(i + 1, semi - i - 1));
        if (entity == "amp") {
            out.push_back('&');
        } else if (entity == "lt") {
            out.push_back('<');
        } else if (entity == "gt") {
            out.push_back('>');
        } else if (entity == "quot") {
            out.push_back('"');
        } else if (entity == "apos") {
            out.push_back('\'');
        } else if (!entity.empty() && entity[0] == '#') {
            unsigned value = 0;
            std::stringstream ss;
            if (entity.size() > 2 && (entity[1] == 'x' || entity[1] == 'X')) {
                ss << std::hex << entity.substr(2);
            } else {
                ss << entity.substr(1);
            }
            ss >> value;
            appendCodepoint(out, value);
        } else {
            out.push_back('&');
            out += entity;
            out.push_back(';');
        }
        i = semi;
    }
    return out;
}

std::string escapeMarkdownText(std::string_view text)
{
    std::string out;
    out.reserve(text.size());
    for (char c : text) {
        if (c == '&') {
            out += "&amp;";
        } else if (c == '<') {
            out += "&lt;";
        } else if (c == '>') {
            out += "&gt;";
        } else {
            out.push_back(c);
        }
    }
    return out;
}

std::string escapeAttribute(std::string_view text)
{
    std::string out;
    out.reserve(text.size());
    for (char c : text) {
        if (c == '&') {
            out += "&amp;";
        } else if (c == '<') {
            out += "&lt;";
        } else if (c == '>') {
            out += "&gt;";
        } else if (c == '"') {
            out += "&quot;";
        } else if (c == '\n' || c == '\r') {
            out.push_back(' ');
        } else {
            out.push_back(c);
        }
    }
    return out;
}

} // namespace outline
