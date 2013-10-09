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
 *   - $content['left']
 *   - $content['middle']
 *   - $content['right']
 */
?>

<div class="omega-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <div class="clearfix">
        <div class="grid-16">
            <div class="inside"><?php print $content['content']; ?></div>
        </div>
    </div>
    <div class="clearfix">
        <div class="grid-4 omega">
            <div class="inside"><?php print $content['left']; ?></div>
        </div>
        <div class="grid-9 omega">
            <div class="inside"><?php print $content['middle']; ?></div>
        </div>
        <div class="grid-3 omega">
            <div class="inside"><?php print $content['right']; ?></div>
        </div>
    </div> 
</div>