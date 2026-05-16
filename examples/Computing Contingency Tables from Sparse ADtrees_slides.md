# Office Outline

<document tag="document" type="pptx" source="corpus/pptx/Computing Contingency Tables from Sparse ADtrees_slides.pptx">
  <part tag="part" kind="slide" name="slide1" path="ppt/slides/slide1.xml">
    <shape tag="shape" id="2" name="标题 1">
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
    <shape tag="shape" id="3" name="副标题 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">				Supervisor: James </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="" fontColor="" bold="false" italic="false" underline="none">Cussens</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="4" name="页脚占位符 3">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide2" path="ppt/slides/slide2.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">1. Contingency Tables and Sparse ADtrees </plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
    <shape tag="shape" id="6" name="右箭头 5" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="7" name="TextBox 6" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">Data Set</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="8" name="TextBox 7" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="false" italic="false" underline="none">Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="10" name="页脚占位符 9">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="3">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide3" path="ppt/slides/slide3.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">1. Contingency Tables and Sparse ADtrees </plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Sparse ADtrees</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">	Sparse ADtree(All-Dimensions tree) is a tree with two type of nodes: ADnodes and Vary nodes,  and omits the most common value nodes and those nodes with zero counts.  [Moore &amp; Lee 1998]</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="9" name="矩形 8" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 100</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="10" name="椭圆 9" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 2</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="13" name="矩形 12" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="14" name="矩形 13" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 60</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="15" name="矩形 14" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 60</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="16" name="矩形 15" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="17" name="矩形 16" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="18" name="矩形 17" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="19" name="矩形 18" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="20" name="矩形 19" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="26" name="椭圆 25" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="27" name="椭圆 26" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="28" name="椭圆 27" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 2</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="29" name="椭圆 28" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="30" name="椭圆 29" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 1</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="64" name="矩形 63" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="65" name="矩形 64" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="66" name="矩形 65" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="73" name="TextBox 72" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="74" name="TextBox 73" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="75" name="TextBox 74" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">……</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="76" name="TextBox 75" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">……</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="77" name="TextBox 76" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="78" name="TextBox 77" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="79" name="TextBox 78" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="81" name="TextBox 80" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="82" name="TextBox 81" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="83" name="TextBox 82" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="84" name="TextBox 83" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="85" name="TextBox 84" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="86" name="TextBox 85" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="87" name="TextBox 86" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="88" name="TextBox 87" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="89" name="TextBox 88" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="91" name="TextBox 90" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="92" name="TextBox 91" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="93" name="椭圆 92" presetGeometry="ellipse">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">MCV = 3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="96" name="TextBox 95" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">20</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="97" name="TextBox 96" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="98" name="TextBox 97" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">40</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="99" name="TextBox 98" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">…</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="100" name="TextBox 99" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Age</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="101" name="TextBox 100" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="102" name="TextBox 101" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="103" name="TextBox 102" presetGeometry="rect">
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
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Six alternative algorithms for building Contingency Tables from Sparse ADtrees</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="6" name="圆角矩形 5" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="7" name="圆角矩形 6" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="8" name="圆角矩形 7" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="9" name="圆角矩形 8" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="10" name="圆角矩形 9" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="11" name="圆角矩形 10" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="12" name="圆角矩形 11" presetGeometry="roundRect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iterated</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="32" name="TextBox 31" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">One dimensional array instead of two dimensional matrix</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="35" name="TextBox 34" presetGeometry="rect">
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
    <shape tag="shape" id="36" name="TextBox 35" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using tree structure</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="37" name="TextBox 36" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="38" name="TextBox 37" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="39" name="TextBox 38" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Iteration instead of recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="24" name="页脚占位符 23">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide5" path="ppt/slides/slide5.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
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
    <shape tag="shape" id="30" name="TextBox 29" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="31" name="TextBox 30" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">List Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="33" name="TextBox 32" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Query: (Female, 160)      Index = (2-1)*3+(1-1)=3</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="40" name="矩形 39" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="41" name="矩形 40" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="42" name="右箭头 41" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="13" name="页脚占位符 12">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="16" name="TextBox 15" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Dict Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="17" name="TextBox 16" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
    <shape tag="shape" id="18" name="右箭头 17" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="19" name="矩形 18" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160 (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170 (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180 (3)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160 (1)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170 (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female (2)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180 (3)</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="2">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Index</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="true" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="true" italic="false" underline="none">1</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">5</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="5">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="6">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="#FF0000" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Index</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">2</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">3</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">4</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="4">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide6" path="ppt/slides/slide6.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="33" name="TextBox 32" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="20" fontColor="" bold="true" italic="false" underline="none">Query: (Female, 160)    Path:  Root -&gt; Female -&gt; 160cm</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="12" name="矩形 11" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Root</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="13" name="矩形 12" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="14" name="矩形 13" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="15" name="矩形 14" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 10</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="22" name="矩形 21" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 0</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="23" name="矩形 22" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="25" name="矩形 24" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="27" name="矩形 26" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 30</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="29" name="矩形 28" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180cm</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none"># = 0</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="52" name="矩形 51" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="53" name="矩形 52" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="54" name="TextBox 53" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">NULL</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="55" name="TextBox 54" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">NULL</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="56" name="TextBox 55" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tree Contingency Table</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="30" name="页脚占位符 29">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide7" path="ppt/slides/slide7.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using Iteration instead of Recursion</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="44" name="TextBox 43" presetGeometry="rect">
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
    <shape tag="shape" id="50" name="TextBox 49" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">when gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Male</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="57" name="TextBox 56" presetGeometry="rect">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">when gender is </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="true" italic="false" underline="none">Female</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="58" name="右箭头 57" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="60" name="右箭头 59" presetGeometry="rightArrow">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="15" name="页脚占位符 14">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Gender</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Male</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Female</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Height</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="16" fontColor="" bold="false" italic="false" underline="none">Count</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">10</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="3">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
    <table tag="table" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
      <table_row tag="table_row" index="0">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">160</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="1">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">170</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">30</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
      <table_row tag="table_row" index="2">
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="0">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">180</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
        <table_cell tag="table_cell" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none" column="1">
          <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
              <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">0</plain_text>
            </text_run>
          </paragraph>
        </table_cell>
      </table_row>
    </table>
  </part>
  <part tag="part" kind="slide" name="slide8" path="ppt/slides/slide8.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">2. Algorithm Design and Implementation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Using Iteration instead of Recursion</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="" bold="false" italic="false" underline="none">			Builds the whole contingency table with the help of pushing and popping nodes from </plain_text>
          </text_run>
          <text_run tag="text_run" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="22" fontColor="#0000FF" bold="false" italic="false" underline="none">stack</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
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
    <shape tag="shape" id="4" name="页脚占位符 3">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide9" path="ppt/slides/slide9.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">3. Testing and Evaluation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Comparing 6 alternative implementations of contingency tables with the original Full Contingency Table on 5 aspects</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="5" name="页脚占位符 4">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" sourceElement="p:graphicFrame" id="4" name="图表 3">
      <chart tag="chart" relationshipId="rId3" target="ppt/charts/chart1.xml" />
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide10" path="ppt/slides/slide10.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">3. Testing and Evaluation</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The time for building 6 types of contingency tables compared with Full Contingency Table</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="6" name="页脚占位符 5">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" sourceElement="p:graphicFrame" id="5" name="图表 4">
      <chart tag="chart" relationshipId="rId3" target="ppt/charts/chart2.xml" />
    </shape>
  </part>
  <part tag="part" kind="slide" name="slide11" path="ppt/slides/slide11.xml">
    <shape tag="shape" id="2" name="标题 1">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="Cambria" fontSize="26" fontColor="" bold="true" italic="false" underline="none">4. Conclusions and Further work</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="3" name="内容占位符 2">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Conclusions</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Six alternative algorithms of building contingency tables from sparse ADtrees are designed and implemented in Python.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Tests by cProfile indicates that building Iterated List Contingency Table takes about 56% of that of Full Contingency Table.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">Further work</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The algorithms could be implemented in C which could be faster than Python.</plain_text>
          </text_run>
        </paragraph>
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">The algorithms could be optimized by using bottom-up iteration instead of top-down iteration.</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
    <shape tag="shape" id="6" name="页脚占位符 5">
      <text_box tag="text_box" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
        <paragraph tag="paragraph" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
          <text_run tag="text_run" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">
            <plain_text tag="plain_text" fontName="" fontSize="" fontColor="" bold="false" italic="false" underline="none">University of York</plain_text>
          </text_run>
        </paragraph>
      </text_box>
    </shape>
  </part>
</document>
