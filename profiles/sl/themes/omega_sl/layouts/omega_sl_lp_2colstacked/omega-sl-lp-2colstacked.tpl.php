<div class="panel-display omega-grid omega-sl-lp-2colstacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="layout-inside">
    <div class="grid-12 row1">
      <div class="inside"><?php print $content['row1']; ?></div>
    </div><!-- /.grid-12 .row1 -->

    <div class="grid-12 row2">
      <div class="grid-6 row2col1 alpha">
        <div class="inside"><?php print $content['row2col1']; ?></div>
      </div><!-- /.grid-6 .row2col1 -->
          
      <div class="grid-6 row2col2 omega">
        <div class="inside"><?php print $content['row2col2']; ?></div>
      </div><!-- /.grid-6 .row2col2 -->
    </div><!-- /.grid-12 .row2 -->
        
    <div class="grid-12 row3">
      <div class="inside"><?php print $content['row3']; ?></div>
    </div><!-- /.grid-9 .row3 -->

  </div><!-- /.layout-inside -->

</div><!-- /.panel-display .omega-grid .omega-sl-lp-2colstacked -->
