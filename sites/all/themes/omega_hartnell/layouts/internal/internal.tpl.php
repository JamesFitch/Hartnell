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
 *   - $content['content_2']
 *   - $content['left']
 *   - $content['lower_left']
 *   - $content['lower_middle']
 *   - $content['lower_right']
 *   - $content['lower_left_2']
 *   - $content['lower_middle_2']
 *   - $content['lower_right_2']
 */
?>

<div class="omega-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <div class="panel-panel grid-13 push-3"> 

        <div class="grid-13 alpha omega row1">
            <div class="inside">
                <?php print $content['content']; ?>
            </div> <!-- /.inside -->
        </div> <!-- /.grid-13 .row1 -->

        <div class="grid-13 alpha omega row2">
            <div class="grid-4 alpha omega">
                <div class="inside"><?php print $content['lower_left']; ?></div>
            </div>
            <div class="grid-5  omega">
                <div class="inside"><?php print $content['lower_middle']; ?></div>
            </div>
            <div class="grid-4  omega">
                <div class="inside"><?php print $content['lower_right']; ?></div>
            </div>
        </div><!-- /.grid-13 .row2 -->
        
        <div class="grid-13 alpha omega row3">
           <div class="inside">
                <?php print $content['content_2']; ?>
           </div> <!-- /.inside -->
        </div> <!-- /.grid-13 .row3 -->

        <div class="grid-13 alpha omega row4">
            <div class="grid-4 alpha omega">
                <div class="inside"><?php print $content['lower_left_2']; ?></div>
            </div>
            <div class="grid-5 omega">
                <div class="inside"><?php print $content['lower_middle_2']; ?></div>
            </div>
            <div class="grid-4 omega">
                <div class="inside"><?php print $content['lower_right_2']; ?></div>
            </div>
        </div> <!-- /.grid-13 .row4 -->

    </div> <!--/.panel-panel .grid-13 .push-3 -->

    <div class="grid-3 pull-13 sidebar">
        <div class="inside">
            <?php print $content['left']; ?>
        </div><!-- /.inside -->
    </div><!--/.grid-3 .pull-13 .sidebar -->

</div><!-- /.omega-grid .clearfix-->
