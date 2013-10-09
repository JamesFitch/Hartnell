<?php

// Plugin definition
$plugin = array(
  'title' => t('Academics - Internal 2, sidebar, 4 rows, 2 col Alternating'),
  'category' => t('Hartnell'),
  'icon' => 'internal_2.png',
  'theme' => 'internal_2',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'internal_2.css',
  'regions' => array(
    'content' => t('Content'),
    'content_2' => t('Full Row 3'),
    'left' => t('Sidebar'),
    'row_2_left' => t('Row 2 left'),
    'row_2_right' => t('Row 2 right'),
    'row_4_left' => t('Row 4 left'),
    'row_4_right' => t('Row 4 right'),
  ),
);
