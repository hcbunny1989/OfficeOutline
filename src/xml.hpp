#pragma once

#include <map>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace outline {

struct XmlNode {
    std::string name;
    std::map<std::string, std::string> attrs;
    std::string text;
    std::vector<std::unique_ptr<XmlNode>> children;
    XmlNode* parent = nullptr;
};

class XmlParser {
public:
    std::unique_ptr<XmlNode> parse(std::string_view input);

private:
    std::string_view input_;
    size_t pos_ = 0;

    bool startsWith(std::string_view value) const;
    void skipWhitespace();
    std::string parseName();
    std::string parseAttributeValue();
    void skipUntil(std::string_view marker);
    void parseElement(XmlNode& parent);
    void parseText(XmlNode& node);
};

std::string localName(std::string_view name);
std::string attr(const XmlNode& node, std::string_view name);
std::string attrLocal(const XmlNode& node, std::string_view name);
const XmlNode* firstChildLocal(const XmlNode& node, std::string_view name);
std::vector<const XmlNode*> childrenLocal(const XmlNode& node, std::string_view name);
std::vector<const XmlNode*> descendantsLocal(const XmlNode& node, std::string_view name);
std::string textDescendants(const XmlNode& node, std::string_view local = {});
std::string decodeXmlEntities(std::string_view text);
std::string escapeMarkdownText(std::string_view text);
std::string escapeAttribute(std::string_view text);

} // namespace outline
