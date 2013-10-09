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
 *   - $content['lower_left']
 *   - $content['lower_right']
 */
?>
<div class="omega-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="clearfix">
    <div class="grid-13 push-3">
      <div class="inside">
        <?php print $content['content']; ?>
      </div>
   
      <div class="clearfix">
        <div class="inside">
          <?php print $content['content_2']; ?>
        </div>
      </div>

      <div class="grid-10 alpha omega">
        <div class="inside">
          <?php print $content['lower_left']; ?>
        </div>
      </div>
      <div class="grid-3  omega">
        <div class="inside"><?php print $content['lower_right']; ?></div>
      </div>
    </div>

    <div class="grid-3 pull-13 sidebar">
      <div class="inside">
        <?php print $content['left']; ?>
      </div>
    </div>
  </div>
  
</div>
