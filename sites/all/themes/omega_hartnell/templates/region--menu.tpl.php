<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($main_menu || $secondary_menu): ?>
    <?php endif; ?>
    <a href="#menu" class="menu-link">Menu</a>
    <nav id="menu" role="navigation">
    <?php print $content; ?>
    </nav>
  </div>
</div>
