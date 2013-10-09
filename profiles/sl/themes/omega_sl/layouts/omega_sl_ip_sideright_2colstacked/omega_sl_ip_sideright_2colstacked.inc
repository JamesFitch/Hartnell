<?php

/**
 * Implements hook_panels_layouts().
 */
function omega_sl_omega_sl_ip_sideright_2colstacked_panels_layouts() {
  $items['omega_sl_ip_sideright_2colstacked'] = array(
      'title' => t('Interior page, right sidebar, 2 col stacked'),
      'category' => t('Higher Ed'),
      'icon' => 'omega_sl_ip_sideright_2colstacked.png',
      'theme' => 'omega_sl_ip_sideright_2colstacked',
      'admin css' => '../omega_sl_panels_admin.css',
      'regions' => array(
        'row1' => t('Row 1'),
        'row2col1' => t('Row 2, Column 1'),
        'row2col2' => t('Row 2, Column 2'),
        'row3' => t('Row 3'),
        'sidebar' => t('Right sidebar'),
        ),
      );

  return $items;
}
