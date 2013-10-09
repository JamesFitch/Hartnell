<?php 
$subject = false;
if(property_exists($block, 'subject')) {
  $subject = $block->subject;
}
$tag = $subject ? 'section' : 'div';
?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php print render($title_prefix); ?>
    <?php if ($subject): ?>
      <h2<?php print $title_attributes; ?>><?php print $subject; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <div<?php print $content_attributes; ?>>
      <?php print $content ?>
    </div>
  </div>
</<?php print $tag; ?>>

