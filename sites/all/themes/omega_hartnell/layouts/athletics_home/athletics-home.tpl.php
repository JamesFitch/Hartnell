<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content']
 *   - $content['left']
 *   - $content['right']
 *   - $content['lower_col_1']
 *   - $content['lower_col_2']
 *   - $content['lower_col_3']
 *   - $content['lower_col_4']
 */
?>
<div class="omega-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    
    <div class="inside"><?php print $content['content']; ?></div>
    
    <div class="clearfix">
        <div class="grid-10 alpha">
            <div class="inside"><?php print $content['left']; ?></div>
        </div>
        <div class="grid-6">
            <div class="inside"><?php print $content['right']; ?></div>
        </div>
    </div>
    
    <div class="grid-4 alpha">
        <div class="inside"><?php print $content['lower_col_1']; ?></div>
    </div>
    <div class="grid-4">
        <div class="inside"><?php print $content['lower_col_2']; ?></div>
    </div>
    <div class="grid-4">
        <div class="inside"><?php print $content['lower_col_3']; ?></div>
    </div>
    <div class="grid-4">
        <div class="inside"><?php print $content['lower_col_4']; ?></div>
    </div>
    
</div>