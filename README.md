# OfficeOutline

`office-outline` 是一个轻量 C++17 命令行工具，用于解析 OOXML 格式的 Word/Excel/PowerPoint 文件，并以 Markdown 中的结构化标签输出文档元素。

## 构建

```bash
make
```

运行时依赖系统 `unzip` 解包 `.docx`、`.xlsx`、`.pptx` 包；解析逻辑本身不依赖第三方 C++ 库。

## 使用

```bash
./office-outline input.docx -o output.md
./office-outline input.xlsx -o output.md
./office-outline input.pptx -o output.md
```

如果不传 `-o`，结果会输出到标准输出。

## 输出模型

Markdown 文件中使用 XML/HTML 风格标签表达元素层级。当前覆盖的主要元素包括：

- `paragraph`
- `text_run`
- `plain_text`
- `table`
- `table_row`
- `table_cell`
- `drawing_object`
- `hyperlink`
- `text_box`
- `formula`
- `image`
- `shape`
- `chart`

文本相关元素会带上格式属性：

- `fontName`
- `fontSize`
- `fontColor`
- `bold`
- `italic`
- `underline`

## 测试

```bash
make test-docx
make test-ooxml-corpus
```

`make test-docx` 会解析 `corpus/北大博士研究生毕业论文格式.docx`，生成：

```text
examples/北大博士研究生毕业论文格式.md
```

并校验样例输出中包含核心标签和字体格式属性。

`make test-ooxml-corpus` 会解析 `corpus/xlsx/` 和 `corpus/pptx/` 下的 `.xlsx`、`.pptx` 文件，输出到 `examples/`，并校验表格、幻灯片、形状、文本和图表等关键标签。

## LibreOffice 参考点

实现参考了当前目录下 `core/` 中 LibreOffice 对 OOXML 的模块划分方式，重点关注：

- `core/oox/`：OOXML 通用结构、关系、DrawingML、形状相关导入测试。
- `core/sw/`：Writer/Word 文档结构导入路径。
- `core/sc/`：Calc/Excel 表格结构导入路径。
- `core/sd/`：Impress/PowerPoint 幻灯片和形状导入路径。

本项目没有直接链接 LibreOffice；这里只复用其解析思路：先处理 OOXML 包关系，再按 WordprocessingML、SpreadsheetML、PresentationML/DrawingML 的元素层级输出结构。
