<div class="panel-display omega-grid omega-sl-ip-sideright-2colstacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="layout-inside">
    <div class="panel-panel grid-9 content alpha">
    
      <div class="grid-9 content-wrapper alpha omega">
        <div class="grid-9 row1">
          <div class="inside">
            <?php print $content['row1']; ?>
          </div><!-- /.inside -->
        </div><!-- /.grid-9 .row1 -->

        <div class="grid-9 row2">
          <div class="grid-4 row2col1 alpha">
            <div class="inside"><?php print $content['row2col1']; ?></div>
            </div><!-- /.grid-4 .row2col1 -->
          
          <div class="grid-4 row2col2 omega">
            <div class="inside"><?php print $content['row2col2']; ?></div>
          </div><!-- /.grid-4 .row2col2 -->
        </div><!-- /.grid-9 .row2 -->
        
        <div class="grid-9 row3">
          <div class="inside"></div>
            <?php print $content['row3']; ?>
          </div><!-- /.inside -->
        </div><!-- /.grid-9 .row3 -->
      </div><!-- grid-9 content-wrapper-->
      
    </div><!-- /.panel-panel .grid-9 .content -->


    <div class="panel-panel grid-3 sidebar omega">
      <div class="inside">
        <?php print $content['sidebar']; ?>
      </div><!-- /.inside -->
    </div><!-- /.panel-panel .grid-3 .sidebar -->

  </div><!-- /.layout-inside -->

</div><!-- /.panel-display .omega-grid .omega-sl-ip-sideright-2colstacked -->
