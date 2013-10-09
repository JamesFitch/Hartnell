<?php

// Plugin definition
$plugin = array(
  'title' => t('Academics - Library'),
  'category' => t('Hartnell'),
  'icon' => 'library.png',
  'theme' => 'library',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'library.css',
  'regions' => array(
    'left' => t('Left side'),
    'content' => t('Content'),
    'content_2' => t('Content 2'),
    'lower_left' => t('Lower left'),
    'lower_right' => t('Lower right')
  ),
);
