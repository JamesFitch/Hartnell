<?php
/**
 * @file
 * Template for Hartnell Internal page layout
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content']
 *   - $content['left']
 *   - $content['right']
 */
?>
<div Class="panel-display omega-grid" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

	<div class="panel-panel push-3 grid-13 ">

		<div class="grid-13 alpha omega row1">
			<div class="inside">
				<?php print $content['content']; ?>
			</div> <!-- /.inside -->
		</div> <!-- /.grid-13 .row1-->


		<div class="grid-13 alpha omega row2">
      <div class="grid-7 alpha row2col1">
        <div class="inside">
          <?php print $content['row_2_left']; ?>
         </div>  <!-- /.inside -->
      </div> <!-- /.grid-7 row2col1 -->
      <div class="grid-6 omega row2Col2">
        <div class="inside">
          <?php print $content['row_2_right']; ?>
        </div>  <!-- /.inside -->
      </div> <!-- /.grid-6 .row2Col2 -->
		</div> <!-- /.grid-13 .row1-->

		<div class="grid-13 alpha omega row3">
				<div class="inside">
					<?php print $content['content_2']; ?>
				</div> <!-- /.inside -->
		</div> <!-- /.grid-13 .row3 -->

	</div> <!-- /.panel-panel .grid-13 -->

  <div class="grid-3 pull-13 sidebar">
    <div class="inside">
      <?php print $content['left']; ?>
      </div><!-- /.inside -->
  </div> <!-- /.grid-3-->

</div><!-- /.panel-display .omega-grid -->
