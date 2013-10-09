<?php
/**
 * @file
 * Template for Hartnell Athetics internal page layout
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content']
 *   - $content['left']
 *   - $content['lower_left']
 *   - $content['lower_right']
 */
?>

<div id="panels-dnd-main" class="panel-display omega-grid"  <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
 
	<div class="grid-3 sidebar">
    <div class="inside">
			<?php print $content['left']; ?>
		</div> <!-- /.inside -->
  </div> <!-- /.grid-3 -->
	 
  <div class="panel-panel grid-13">
      
    <div class="grid-13 row1">
      <div class="inside">
        <?php print $content['content']; ?>
      </div> <!-- /.inside -->
    </div> <!-- /.grid-13 .row1 -->


    <div class="grid-13 row2">
      <div class="grid-4 row2_col1 lower_left">
          <div class="inside">
            <?php print $content['lower_left']; ?>
          </div> <!-- /.inside -->
        </div>
        <div class="grid-9 row2_col2 lower_right">
          <div class="inside">
            <?php print $content['lower_right']; ?>
          </div> <!-- /.inside -->
        </div> <!-- /.lower_right -->
    </div> <!-- /.grid-13 .push-4 .row2 -->

	</div> <!-- /.panel-panel .grid-13 -->

</div> <!-- /.omega-grid .clearfix -->
