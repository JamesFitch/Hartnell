<div class="panel-display omega-grid omega-sl-ip-3col-footer" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="layout-inside">
    <div class="panel-panel grid-9 push-3 content">
    
      <div class="content-wrapper alpha omega">
        <?php if ($content['row1']): ?>
        <div class="grid-9 row1 alpha omega">
          <div class="inside">
            <?php print $content['row1']; ?>
          </div><!-- /.inside -->
        </div><!-- /.grid-9 .row1 -->
        <?php endif; ?>

        <div class="row2 alpha omega">
          <?php if ($content['row2col1']): ?>
          <div class="grid-7 row2col1 alpha">
            <div class="inside"><?php print $content['row2col1']; ?></div>
          </div><!-- /.grid-7 .row2col1 -->
          <?php endif; ?>

          <?php if ($content['row2col2']): ?>
          <div class="grid-2 row2col2 omega">
            <div class="inside"><?php print $content['row2col2']; ?></div>
          </div><!-- /.grid-2 .row2col2 -->
          <?php endif; ?>
        </div><!-- /.row2 -->
      </div><!-- /.content-wrapper alpha omega -->
      
    </div><!-- /.panel-panel .grid-9 .content -->

    <?php if ($content['sidebar']): ?>
    <div class="panel-panel grid-3 pull-9 sidebar test">
      <div class="inside">
        <?php print $content['sidebar']; ?>
      </div><!-- /.inside -->
    </div><!-- /.panel-panel .grid-3 .sidebar -->
    <?php endif; ?>

    <div class="supplemental-footer">
      <?php if ($content['footercol1']): ?>
      <div class="grid-4 footercol1">
        <div class="inside"><?php print $content['footercol1']; ?></div>
      </div><!-- /.grid-6 .footercol1 -->
      <?php endif; ?>
          
      <?php if ($content['footercol2']): ?>
      <div class="grid-4 footercol2">
        <div class="inside"><?php print $content['footercol2']; ?></div>
      </div><!-- /.grid-4 .footercol2 -->
      <?php endif; ?>
          
      <?php if ($content['footercol3']): ?>
      <div class="grid-4 footercol3">
        <div class="inside"><?php print $content['footercol3']; ?></div>
      </div><!-- /.grid-4 .footercol3 -->
      <?php endif; ?>
    </div><!-- /.supplemental-footer -->

  </div><!-- /.layout-inside -->

</div><!-- /.panel-display .omega-grid .omega-sl-ip-sideleft-2colstacked -->
