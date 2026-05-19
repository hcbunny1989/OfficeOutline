# Office Outline

<document tag="document" type="docx" source="corpus/docx/图表测试test.docx">
  <part tag="part" path="word/document.xml">
    <paragraph tag="paragraph" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">
      <text_run tag="text_run" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">
        <plain_text tag="plain_text" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">图表测试test1</plain_text>
      </text_run>
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
      <text_run tag="text_run" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
        <drawing_object tag="drawing_object" kind="drawing">
          <chart tag="chart" relationshipId="rId4" target="word/charts/chart1.xml" anchorType="inline" widthPt="413.9" heightPt="235.3" chartType="pieChart" title="销售额">
            <chart_source tag="chart_source" relationshipId="rId1" target="word/embeddings/Workbook1.xlsx" relationshipType="http://schemas.openxmlformats.org/officeDocument/2006/relationships/package" type="embedded_xlsx">
              <table tag="table" sheet="Sheet1" part="xl/worksheets/sheet1.xml" role="chart_data">
                <table_row tag="table_row" index="1">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">销售额</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="2">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">第一季度</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">8.2</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="3">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">第二季度</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3.2</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="4">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">第三季度</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">1.4</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="5">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">第四季度</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">1.2</plain_text>
                  </table_cell>
                </table_row>
              </table>
            </chart_source>
            <chart_legend tag="chart_legend" position="t" overlay="false" textColor="tx1">
              <chart_legend_entry tag="chart_legend_entry" index="0" source="point" seriesIndex="1" pointIndex="0" label="第一季度" fillColor="accent1" lineColor="bg1" />
              <chart_legend_entry tag="chart_legend_entry" index="1" source="point" seriesIndex="1" pointIndex="1" label="第二季度" fillColor="accent2" lineColor="bg1" />
              <chart_legend_entry tag="chart_legend_entry" index="2" source="point" seriesIndex="1" pointIndex="2" label="第三季度" fillColor="accent3" lineColor="bg1" />
              <chart_legend_entry tag="chart_legend_entry" index="3" source="point" seriesIndex="1" pointIndex="3" label="第四季度" fillColor="accent4" lineColor="bg1" />
            </chart_legend>
            <chart_data_labels tag="chart_data_labels" scope="series" seriesIndex="1" position="inEnd" showLegendKey="false" showValue="true" showCategoryName="false" showSeriesName="false" showPercent="false" showBubbleSize="false" showLeaderLines="true" numberFormat="General" sourceLinked="1" />
            <chart_data_labels tag="chart_data_labels" scope="chart" showLegendKey="false" showValue="true" showCategoryName="false" showSeriesName="false" showPercent="false" showBubbleSize="false" showLeaderLines="true" />
            <chart_series tag="chart_series" index="1" name="销售额" nameRef="Sheet1!$B$1" categoriesRef="Sheet1!$A$2:$A$5" categoryCount="4" valuesRef="Sheet1!$B$2:$B$5" valueCount="4">
              <chart_point tag="chart_point" index="0" category="第一季度" value="8.2" fillColor="accent1" lineColor="bg1" />
              <chart_point tag="chart_point" index="1" category="第二季度" value="3.2" fillColor="accent2" lineColor="bg1" />
              <chart_point tag="chart_point" index="2" category="第三季度" value="1.4" fillColor="accent3" lineColor="bg1" />
              <chart_point tag="chart_point" index="3" category="第四季度" value="1.2" fillColor="accent4" lineColor="bg1" />
            </chart_series>
          </chart>
        </drawing_object>
      </text_run>
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">
      <text_run tag="text_run" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">
        <plain_text tag="plain_text" fontName="" fontSize="26" fontColor="" bold="false" italic="false" underline="none">图表测试test2</plain_text>
      </text_run>
      <bookmark tag="bookmark" action="start" id="0" name="_GoBack" />
      <bookmark tag="bookmark" action="end" id="0" />
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
    </paragraph>
    <paragraph tag="paragraph" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
      <text_run tag="text_run" fontName="" fontSize="10.5" fontColor="" bold="false" italic="false" underline="none">
        <drawing_object tag="drawing_object" kind="drawing">
          <chart tag="chart" relationshipId="rId5" target="word/charts/chart2.xml" anchorType="inline" widthPt="413.9" heightPt="235.3" chartType="lineChart">
            <chart_source tag="chart_source" relationshipId="rId1" target="word/embeddings/Workbook2.xlsx" relationshipType="http://schemas.openxmlformats.org/officeDocument/2006/relationships/package" type="embedded_xlsx">
              <table tag="table" sheet="Sheet1" part="xl/worksheets/sheet1.xml" role="chart_data">
                <table_row tag="table_row" index="1">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">系列 1</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="C1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">系列 2</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="D1" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">系列 3</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="2">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">类别 1</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4.3</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="C2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2.4</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="D2" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="3">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">类别 2</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2.5</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="C3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4.4</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="D3" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="4">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">类别 3</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3.5</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="C4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">1.8</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="D4" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3</plain_text>
                  </table_cell>
                </table_row>
                <table_row tag="table_row" index="5">
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="A5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">类别 4</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="B5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4.5</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="C5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2.8</plain_text>
                  </table_cell>
                  <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" ref="D5" rowspan="1" colspan="1">
                    <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">5</plain_text>
                  </table_cell>
                </table_row>
              </table>
            </chart_source>
            <chart_legend tag="chart_legend" position="b" overlay="false" textColor="tx1">
              <chart_legend_entry tag="chart_legend_entry" index="0" source="series" seriesIndex="0" label="系列 1" lineColor="accent1" />
              <chart_legend_entry tag="chart_legend_entry" index="1" source="series" seriesIndex="1" label="系列 2" lineColor="accent2" />
              <chart_legend_entry tag="chart_legend_entry" index="2" source="series" seriesIndex="2" label="系列 3" lineColor="accent6" />
            </chart_legend>
            <chart_axis tag="chart_axis" type="catAx" id="536837501" position="b" crossAxis="546136367" crosses="autoZero" tickLabelPosition="nextTo" majorTickMark="none" minorTickMark="none" orientation="minMax" />
            <chart_axis tag="chart_axis" type="valAx" id="546136367" position="l" crossAxis="536837501" crosses="autoZero" tickLabelPosition="nextTo" majorTickMark="none" minorTickMark="none" orientation="minMax" numberFormat="General" sourceLinked="1" majorGridlines="true" />
            <chart_data_labels tag="chart_data_labels" scope="series" seriesIndex="0" />
            <chart_data_labels tag="chart_data_labels" scope="series" seriesIndex="1" />
            <chart_data_labels tag="chart_data_labels" scope="series" seriesIndex="2" />
            <chart_data_labels tag="chart_data_labels" scope="chart" showLegendKey="false" showValue="false" showCategoryName="false" showSeriesName="false" showPercent="false" showBubbleSize="false" />
            <chart_series tag="chart_series" index="0" name="系列 1" lineColor="accent1" nameRef="Sheet1!$B$1" categoriesRef="Sheet1!$A$2:$A$5" categoryCount="4" valuesRef="Sheet1!$B$2:$B$5" valueCount="4">
              <chart_point tag="chart_point" index="0" category="类别1" value="4.3" />
              <chart_point tag="chart_point" index="1" category="类别2" value="2.5" />
              <chart_point tag="chart_point" index="2" category="类别3" value="3.5" />
              <chart_point tag="chart_point" index="3" category="类别4" value="4.5" />
            </chart_series>
            <chart_series tag="chart_series" index="1" name="系列 2" lineColor="accent2" nameRef="Sheet1!$C$1" categoriesRef="Sheet1!$A$2:$A$5" categoryCount="4" valuesRef="Sheet1!$C$2:$C$5" valueCount="4">
              <chart_point tag="chart_point" index="0" category="类别1" value="2.4" />
              <chart_point tag="chart_point" index="1" category="类别2" value="4.4" />
              <chart_point tag="chart_point" index="2" category="类别3" value="1.8" />
              <chart_point tag="chart_point" index="3" category="类别4" value="2.8" />
            </chart_series>
            <chart_series tag="chart_series" index="2" name="系列 3" lineColor="accent6" nameRef="Sheet1!$D$1" categoriesRef="Sheet1!$A$2:$A$5" categoryCount="4" valuesRef="Sheet1!$D$2:$D$5" valueCount="4">
              <chart_point tag="chart_point" index="0" category="类别1" value="2" />
              <chart_point tag="chart_point" index="1" category="类别2" value="2" />
              <chart_point tag="chart_point" index="2" category="类别3" value="3" />
              <chart_point tag="chart_point" index="3" category="类别4" value="5" />
            </chart_series>
          </chart>
        </drawing_object>
      </text_run>
    </paragraph>
  </part>
</document>
