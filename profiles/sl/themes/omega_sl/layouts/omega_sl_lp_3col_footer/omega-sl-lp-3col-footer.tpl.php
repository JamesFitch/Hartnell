<div class="panel-display omega-grid omega-sl-lp-3col-footer" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="layout-inside">
    <?php if ($content['row1']): ?>
    <div class="grid-12 row1">
      <div class="inside"><?php print $content['row1']; ?></div>
    </div><!-- /.grid-12 .row1 -->
    <?php endif; ?>

    <div class="row2">
      <?php if ($content['row2col2']): ?>
      <div class="grid-6 row2col2 push-3">
        <div class="inside"><?php print $content['row2col2']; ?></div>
      </div><!-- /.grid-4 .row2col2 -->
      <?php endif; ?>

      <?php if ($content['row2col1']): ?>
      <div class="grid-3 row2col1 pull-6">
        <div class="inside"><?php print $content['row2col1']; ?></div>
      </div><!-- /.grid-6 .row2col1 -->
      <?php endif; ?>
          
      <?php if ($content['row2col3']): ?>
      <div class="grid-3 row2col3">
        <div class="inside"><?php print $content['row2col3']; ?></div>
      </div><!-- /.grid-4 .row2col3 -->
      <?php endif; ?>
    </div><!-- /.row2 -->
        
    <?php if ($content['row3']): ?>
    <div class="grid-12 row3">
      <div class="inside"><?php print $content['row3']; ?></div>
    </div><!-- /.grid-9 .row3 -->
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

</div><!-- /.panel-display .omega-grid .omega-sl-lp-3col-footer -->
