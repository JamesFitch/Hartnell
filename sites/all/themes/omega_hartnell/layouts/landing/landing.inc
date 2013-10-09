<?php

// Plugin definition
$plugin = array(
  'title' => t('Academics - Landing, left sidebar, 1-3'),
  'category' => t('Hartnell'),
  'icon' => 'landing.png',
  'theme' => 'landing',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'landing.css',
  'regions' => array(
    'content' => t('Row 1'),
    'lower_col_2' => t('Row 2, Column 1'),
    'lower_col_3' => t('Row 2, Column 2'),
    'lower_col_4' => t('Row 2, Column 3'),
    'lower_col_1' => t('Left sidebar'),
    'sidebar-2' => t('Sidebar - Lower'),
  ),
);
