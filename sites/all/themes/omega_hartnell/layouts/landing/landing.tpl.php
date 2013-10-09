<?php
/**
 * @file
 * Template for Hartnell internal page layout
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content']
 *   - $content['sidebar']
 *   - $content['lower_col_1']
 *   - $content['lower_col_2']
 *   - $content['lower_col_3']
 *   - $content['lower_col_4']
 */
?>
<div class="academics-landing omega-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

		<div class="panel-panel grid-13 push-3">

			<div class="grid-13 alpha omega row1">
				<div class="inside">
						<?php print $content['content']; ?>
				</div> <!-- /.inside -->
			</div> <!-- /.grid-13 .row1 -->
        
			<div class="grid-13 alpha omega row2">
			   <div class="grid-4 alpha left-hand">
				   <div class="inside">
						<?php print $content['lower_col_2']; ?>
				   </div>  <!-- /.inside -->
			   </div> <!-- /.grid-4 .left-hand -->

			   <div class="grid-5 row2col2">
				    <div class="inside">
						<?php print $content['lower_col_3']; ?>
					</div>  <!-- /.inside -->
			   </div> <!-- /.grid-5 row2col2 -->

			   <div class="grid-4 omega right-hand">
					<div class="inside">
						<?php print $content['lower_col_4']; ?>
					</div> <!-- /.inside -->
				</div> <!-- /.grid-4 .right-hand -->
				
			</div><!-- /.grid-13.row2-->

		</div><!-- /.panel-panel .grid-13 .push-3-->

		<div class="grid-3 pull-13 sidebar">
			<div class="inside">
					<?php print $content['lower_col_1']; ?>
			</div><!-- /.inside -->
      <div class="inside"><?php print $content['sidebar-2']; ?></div>
		</div><!-- /.grid-3.sidebar -->

</div><!-- /.omega-grid .clearfix-->
