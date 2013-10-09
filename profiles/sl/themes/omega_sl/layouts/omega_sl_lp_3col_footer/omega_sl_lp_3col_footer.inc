<?php

/**
 * Implements hook_panels_layouts().
 */
function omega_sl_omega_sl_lp_3col_footer_panels_layouts() {
  $items['omega_sl_lp_3col_footer'] = array(
      'title' => t('Landing page'),
      'category' => t('Higher Ed'),
      'icon' => 'omega_sl_lp_3col_footer.png',
      'theme' => 'omega_sl_lp_3col_footer',
      'admin css' => '../omega_sl_panels_admin.css',
      'regions' => array(
        'row1' => t('Row 1'),
        'row2col1' => t('Row 2, Column 1'),
        'row2col2' => t('Row 2, Column 2'),
        'row2col3' => t('Row 2, Column 3'),
        'row3' => t('Row 3'),
        'footercol1' => t('Footer, Column 1'),
        'footercol2' => t('Footer, Column 2'),
        'footercol3' => t('Footer, Column 3'),
        ),
      );

  return $items;
}
