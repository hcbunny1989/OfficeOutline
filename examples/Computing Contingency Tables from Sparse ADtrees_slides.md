# Office Outline

<document tag="document" type="pptx" source="corpus/pptx/Computing Contingency Tables from Sparse ADtrees_slides.pptx">
  <part tag="part" kind="slide" name="slide1" path="ppt/slides/slide1.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">Computing Contingency Tables</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">from Sparse ADtrees in Python</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="副标题 2" id="3" name="副标题 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="left">
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">				Student name:       </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">Fei</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none"> Ding</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="left">
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">				Supervisor: James </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">Cussens</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="4" objectName="页脚占位符 3" id="4" name="页脚占位符 3">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide2" path="ppt/slides/slide2.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">1. Contingency Tables and Sparse ADtrees </plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Data </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Cube and </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Contingency Tables</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Data cube </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">is a two-dimensional matrix representing counts</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">of different combination of attributes.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1" listType="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Contingency Table </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">is a smaller table for the counts of only several attributes.  [Moore &amp; Lee 1998]</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="6" objectName="右箭头 5" id="6" name="右箭头 5" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="7" objectName="TextBox 6" id="7" name="TextBox 6" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">Data Set</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="8" objectName="TextBox 7" id="8" name="TextBox 7" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="10" objectName="页脚占位符 9" id="10" name="页脚占位符 9">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide3" path="ppt/slides/slide3.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">1. Contingency Tables and Sparse ADtrees </plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Sparse ADtrees</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="21.88" indent="-21.75" listLevel="1" listType="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">	Sparse ADtree(All-Dimensions tree) is a tree with two type of nodes: ADnodes and Vary nodes,  and omits the most common value nodes and those nodes with zero counts.  [Moore &amp; Lee 1998]</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="9" objectName="矩形 8" id="9" name="矩形 8" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 100</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="10" objectName="椭圆 9" id="10" name="椭圆 9" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 2</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="13" objectName="矩形 12" id="13" name="矩形 12" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="14" objectName="矩形 13" id="14" name="矩形 13" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 60</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="15" objectName="矩形 14" id="15" name="矩形 14" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 60</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="16" objectName="矩形 15" id="16" name="矩形 15" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="17" objectName="矩形 16" id="17" name="矩形 16" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="18" objectName="矩形 17" id="18" name="矩形 17" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="19" objectName="矩形 18" id="19" name="矩形 18" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="20" objectName="矩形 19" id="20" name="矩形 19" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="26" objectName="椭圆 25" id="26" name="椭圆 25" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="27" objectName="椭圆 26" id="27" name="椭圆 26" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="28" objectName="椭圆 27" id="28" name="椭圆 27" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 2</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="29" objectName="椭圆 28" id="29" name="椭圆 28" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="30" objectName="椭圆 29" id="30" name="椭圆 29" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="64" objectName="矩形 63" id="64" name="矩形 63" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="65" objectName="矩形 64" id="65" name="矩形 64" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="66" objectName="矩形 65" id="66" name="矩形 65" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="73" objectName="TextBox 72" id="73" name="TextBox 72" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="74" objectName="TextBox 73" id="74" name="TextBox 73" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="75" objectName="TextBox 74" id="75" name="TextBox 74" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">……</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="76" objectName="TextBox 75" id="76" name="TextBox 75" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">……</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="77" objectName="TextBox 76" id="77" name="TextBox 76" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="78" objectName="TextBox 77" id="78" name="TextBox 77" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="79" objectName="TextBox 78" id="79" name="TextBox 78" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="81" objectName="TextBox 80" id="81" name="TextBox 80" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="82" objectName="TextBox 81" id="82" name="TextBox 81" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="83" objectName="TextBox 82" id="83" name="TextBox 82" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="84" objectName="TextBox 83" id="84" name="TextBox 83" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="85" objectName="TextBox 84" id="85" name="TextBox 84" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="86" objectName="TextBox 85" id="86" name="TextBox 85" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="87" objectName="TextBox 86" id="87" name="TextBox 86" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="88" objectName="TextBox 87" id="88" name="TextBox 87" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="89" objectName="TextBox 88" id="89" name="TextBox 88" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="91" objectName="TextBox 90" id="91" name="TextBox 90" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="92" objectName="TextBox 91" id="92" name="TextBox 91" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="93" objectName="椭圆 92" id="93" name="椭圆 92" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="96" objectName="TextBox 95" id="96" name="TextBox 95" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="97" objectName="TextBox 96" id="97" name="TextBox 96" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="98" objectName="TextBox 97" id="98" name="TextBox 97" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="99" objectName="TextBox 98" id="99" name="TextBox 98" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="100" objectName="TextBox 99" id="100" name="TextBox 99" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="101" objectName="TextBox 100" id="101" name="TextBox 100" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="102" objectName="TextBox 101" id="102" name="TextBox 101" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="103" objectName="TextBox 102" id="103" name="TextBox 102" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide4" path="ppt/slides/slide4.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Six alternative algorithms for building Contingency Tables from Sparse ADtrees</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="6" objectName="圆角矩形 5" id="6" name="圆角矩形 5" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="7" objectName="圆角矩形 6" id="7" name="圆角矩形 6" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="8" objectName="圆角矩形 7" id="8" name="圆角矩形 7" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="9" objectName="圆角矩形 8" id="9" name="圆角矩形 8" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="10" objectName="圆角矩形 9" id="10" name="圆角矩形 9" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="11" objectName="圆角矩形 10" id="11" name="圆角矩形 10" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="12" objectName="圆角矩形 11" id="12" name="圆角矩形 11" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="32" objectName="TextBox 31" id="32" name="TextBox 31" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">One dimensional array instead of two dimensional matrix</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="35" objectName="TextBox 34" id="35" name="TextBox 34" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">hashmap</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="36" objectName="TextBox 35" id="36" name="TextBox 35" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using tree structure</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="37" objectName="TextBox 36" id="37" name="TextBox 36" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="38" objectName="TextBox 37" id="38" name="TextBox 37" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="39" objectName="TextBox 38" id="39" name="TextBox 38" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="24" objectName="页脚占位符 23" id="24" name="页脚占位符 23">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide5" path="ppt/slides/slide5.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Table and Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="30" objectName="TextBox 29" id="30" name="TextBox 29" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="31" objectName="TextBox 30" id="31" name="TextBox 30" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="33" objectName="TextBox 32" id="33" name="TextBox 32" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Query: (Female, 160)      Index = (2-1)*3+(1-1)=3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="40" objectName="矩形 39" id="40" name="矩形 39" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="41" objectName="矩形 40" id="41" name="矩形 40" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="42" objectName="右箭头 41" id="42" name="右箭头 41" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="13" objectName="页脚占位符 12" id="13" name="页脚占位符 12">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="16" objectName="TextBox 15" id="16" name="TextBox 15" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="17" objectName="TextBox 16" id="17" name="TextBox 16" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Key   </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">   </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Value</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="18" objectName="右箭头 17" id="18" name="右箭头 17" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="19" objectName="矩形 18" id="19" name="矩形 18" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160 (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170 (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180 (3)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160 (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170 (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180 (3)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Index</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="true" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="true" italic="false" underline="none">1</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">5</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Index</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide6" path="ppt/slides/slide6.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="33" objectName="TextBox 32" id="33" name="TextBox 32" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Query: (Female, 160)    Path:  Root -&gt; Female -&gt; 160cm</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="12" objectName="矩形 11" id="12" name="矩形 11" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Root</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="13" objectName="矩形 12" id="13" name="矩形 12" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="14" objectName="矩形 13" id="14" name="矩形 13" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="15" objectName="矩形 14" id="15" name="矩形 14" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="22" objectName="矩形 21" id="22" name="矩形 21" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 0</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="23" objectName="矩形 22" id="23" name="矩形 22" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="25" objectName="矩形 24" id="25" name="矩形 24" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="27" objectName="矩形 26" id="27" name="矩形 26" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="29" objectName="矩形 28" id="29" name="矩形 28" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 0</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="52" objectName="矩形 51" id="52" name="矩形 51" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="53" objectName="矩形 52" id="53" name="矩形 52" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="54" objectName="TextBox 53" id="54" name="TextBox 53" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">NULL</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="55" objectName="TextBox 54" id="55" name="TextBox 54" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">NULL</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="56" objectName="TextBox 55" id="56" name="TextBox 55" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="30" objectName="页脚占位符 29" id="30" name="页脚占位符 29">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide7" path="ppt/slides/slide7.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using Iteration instead of Recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="44" objectName="TextBox 43" id="44" name="TextBox 43" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Contingency Table for </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Gender,</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="50" objectName="TextBox 49" id="50" name="TextBox 49" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Contingency Table for </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Height,</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">  </plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">when gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="57" objectName="TextBox 56" id="57" name="TextBox 56" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Contingency Table for </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Height,</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">  </plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">when gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="58" objectName="右箭头 57" id="58" name="右箭头 57" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="60" objectName="右箭头 59" id="60" name="右箭头 59" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="15" objectName="页脚占位符 14" id="15" name="页脚占位符 14">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1" rowspan="1" colspan="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide8" path="ppt/slides/slide8.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using Iteration instead of Recursion</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Recursion approach of building </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">ct</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">(Gender, Height) from dense </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">ADtree</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="42.75" indent="-0.13" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">Function</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">MakeContab</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">([</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Gender</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">, </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">], </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">adTree</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">)</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="42.75" indent="-0.13" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">ct_1</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> = </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">MakeContab</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">([</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">], </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">adTree</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">) when Gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="42.75" indent="-0.13" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">ct_2</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> = </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">MakeContab</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">([</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">], </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">adTree</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">) when Gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="42.75" indent="-0.13" listLevel="1" listType="none">
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">		ct</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none">= Concatenates </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">ct_1</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="" bold="false" italic="false" underline="none"> and </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="19" fontColor="#0000FF" bold="false" italic="true" underline="none">ct_2</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="42.75" indent="-0.13" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">Return</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">ct</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="24" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="24" fontColor="" bold="false" italic="false" underline="none">Iteration approach of building </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="24" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="24" fontColor="" bold="true" italic="false" underline="none">ct</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="24" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="24" fontColor="" bold="false" italic="false" underline="none">(Gender, Height) from dense ADtree</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="64.13" indent="-21.5" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">Function</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="true" italic="false" underline="none">MakeContab</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">([</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Gender</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">, </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">], </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">adTree</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">)</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="64.13" indent="-21.5" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">stack</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">.</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">push</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">(The Root of </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">adTree</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">)</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="64.13" indent="-21.5" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">While</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">stack</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> is not empty</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="64.13" indent="-21.5" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">			Builds the whole contingency table with the help of pushing and popping nodes from </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">stack</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" marginLeft="64.13" indent="-21.5" listType="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">	</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#660033" bold="false" italic="false" underline="none">Return</plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none"> </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="true" underline="none">ct</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="4" objectName="页脚占位符 3" id="4" name="页脚占位符 3">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide9" path="ppt/slides/slide9.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">3. Testing and Evaluation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Comparing 6 alternative implementations of contingency tables with the original Full Contingency Table on 5 aspects</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="5" objectName="页脚占位符 4" id="5" name="页脚占位符 4">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" sourceElement="p:graphicFrame" objectId="4" objectName="图表 3" id="4" name="图表 3">
      <chart tag="chart" relationshipId="rId3" target="ppt/charts/chart1.xml" anchorType="graphicFrame" xPt="-67.5" yPt="45" widthPt="832.51" heightPt="579.38" chartType="radarChart">
        <chart_source tag="chart_source" relationshipId="rId1" target="file:///D:\Learning\postgraduate\Final%20Project\dissertation\profile_results_8400.xlsx" relationshipType="http://schemas.openxmlformats.org/officeDocument/2006/relationships/oleObject" targetMode="External" type="package_part" />
        <chart_legend tag="chart_legend" position="r" xMode="edge" yMode="edge" x="0.67450974605992253" y="0.37985413109935517" w="0.29185710637956447" h="0.29947789164041755">
          <chart_legend_entry tag="chart_legend_entry" index="0" source="series" seriesIndex="0" label="Full Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="1" source="series" seriesIndex="1" label="List Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="2" source="series" seriesIndex="2" label="Iterated List Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="3" source="series" seriesIndex="3" label="Dict Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="4" source="series" seriesIndex="4" label="Iterated Dict Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="5" source="series" seriesIndex="5" label="Tree Contingency Table" />
          <chart_legend_entry tag="chart_legend_entry" index="6" source="series" seriesIndex="6" label="Iterated Tree Contingency Table" />
        </chart_legend>
        <chart_axis tag="chart_axis" type="catAx" id="57606528" position="b" crossAxis="57608064" crosses="autoZero" tickLabelPosition="nextTo" majorTickMark="none" orientation="minMax" majorGridlines="true" />
        <chart_axis tag="chart_axis" type="valAx" id="57608064" position="l" crossAxis="57606528" crosses="autoZero" tickLabelPosition="nextTo" majorTickMark="none" orientation="minMax" numberFormat="0.00%" sourceLinked="1" majorGridlines="true" />
        <chart_series tag="chart_series" index="0" name="Full Contingency Table" nameRef="Best!$B$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$B$2:$B$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="1" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="1" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="1" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="1" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="1" />
        </chart_series>
        <chart_series tag="chart_series" index="1" name="List Contingency Table" nameRef="Best!$C$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$C$2:$C$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.86675224625106795" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.49261446811674403" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.92173676705248797" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.90574954299702104" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.51685875347626098" />
        </chart_series>
        <chart_series tag="chart_series" index="2" name="Iterated List Contingency Table" nameRef="Best!$D$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$D$2:$D$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.66179656361163008" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.34391991062513999" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.6977352574776331" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.74027254040071799" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.38210962039465513" />
        </chart_series>
        <chart_series tag="chart_series" index="3" name="Dict Contingency Table" nameRef="Best!$E$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$E$2:$E$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.83056484932055197" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.52590980429660805" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.8641890278394071" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.9518750281931232" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.63135727828396904" />
        </chart_series>
        <chart_series tag="chart_series" index="4" name="Iterated Dict Contingency Table" nameRef="Best!$F$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$F$2:$F$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.69917856121786393" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.52234528211792597" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.69839031132047713" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.79624595423691602" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.53578955224205904" />
        </chart_series>
        <chart_series tag="chart_series" index="5" name="Tree Contingency Table" nameRef="Best!$G$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$G$2:$G$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.65680872124105705" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.57169835850082806" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.63618805341748419" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.66557113291862213" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.89633284345690889" />
        </chart_series>
        <chart_series tag="chart_series" index="6" name="Iterated Tree Contingency Table" nameRef="Best!$H$1" categoriesRef="Best!$A$2:$A$6" categoryCount="5" valuesRef="Best!$H$2:$H$6" valueCount="5">
          <chart_point tag="chart_point" index="0" category="Length of arity list" value="0.79168922874971404" />
          <chart_point tag="chart_point" index="1" category="Values of aritys" value="0.3484255969666421" />
          <chart_point tag="chart_point" index="2" category="Number of records (non-distinct)" value="0.77797821395535116" />
          <chart_point tag="chart_point" index="3" category="Number of records (distinct)" value="0.8042456051691681" />
          <chart_point tag="chart_point" index="4" category="Length of attribute list" value="0.64954336379267397" />
        </chart_series>
      </chart>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide10" path="ppt/slides/slide10.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">3. Testing and Evaluation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The time for building 6 types of contingency tables compared with Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="6" objectName="页脚占位符 5" id="6" name="页脚占位符 5">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" sourceElement="p:graphicFrame" objectId="5" objectName="图表 4" id="5" name="图表 4">
      <chart tag="chart" relationshipId="rId3" target="ppt/charts/chart2.xml" anchorType="graphicFrame" xPt="16.87" yPt="196.87" widthPt="669.38" heightPt="315" chartType="barChart">
        <chart_source tag="chart_source" relationshipId="rId1" target="file:///D:\Learning\postgraduate\Final%20Project\dissertation\profile_results_8400.xlsx" relationshipType="http://schemas.openxmlformats.org/officeDocument/2006/relationships/oleObject" targetMode="External" type="package_part" />
        <chart_axis tag="chart_axis" type="catAx" id="57653120" position="b" crossAxis="57654656" crosses="autoZero" tickLabelPosition="nextTo" orientation="minMax" />
        <chart_axis tag="chart_axis" type="valAx" id="57654656" position="l" crossAxis="57653120" crosses="autoZero" tickLabelPosition="nextTo" orientation="minMax" numberFormat="0.00%" sourceLinked="1" majorGridlines="true" />
        <chart_data_labels tag="chart_data_labels" scope="series" seriesIndex="0" showValue="true" />
        <chart_data_labels tag="chart_data_labels" scope="chart" showValue="true" />
        <chart_series tag="chart_series" index="0" name="Overall Optimization" nameRef="Best!$A$7" categoriesRef="Best!$B$1:$H$1" categoryCount="7" valuesRef="Best!$B$7:$H$7" valueCount="7">
          <chart_point tag="chart_point" index="0" category="Full Contingency Table" value="1" />
          <chart_point tag="chart_point" index="1" category="List Contingency Table" value="0.74074235557871615" />
          <chart_point tag="chart_point" index="2" category="Iterated List Contingency Table" value="0.56516677850195485" />
          <chart_point tag="chart_point" index="3" category="Dict Contingency Table" value="0.76077919758673218" />
          <chart_point tag="chart_point" index="4" category="Iterated Dict Contingency Table" value="0.65038993222704811" />
          <chart_point tag="chart_point" index="5" category="Tree Contingency Table" value="0.68531982190697993" />
          <chart_point tag="chart_point" index="6" category="Iterated Tree Contingency Table" value="0.67437640172670998" />
        </chart_series>
      </chart>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide11" path="ppt/slides/slide11.xml">
    <shape tag="shape" objectId="2" objectName="标题 1" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">4. Conclusions and Further work</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="3" objectName="内容占位符 2" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Conclusions</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="justify" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Six alternative algorithms of building contingency tables from sparse ADtrees are designed and implemented in Python.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="justify" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tests by cProfile indicates that building Iterated List Contingency Table takes about 56% of that of Full Contingency Table.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Further work</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The algorithms could be implemented in C which could be faster than Python.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" listLevel="1">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The algorithms could be optimized by using bottom-up iteration instead of top-down iteration.</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" objectId="6" objectName="页脚占位符 5" id="6" name="页脚占位符 5">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" alignment="center">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
</document>
