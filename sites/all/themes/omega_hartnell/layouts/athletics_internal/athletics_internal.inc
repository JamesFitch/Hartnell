<?php

// Plugin definition
$plugin = array(
  'title' => t('Athletics - Internal, left sidebar 1-2'),
  'category' => t('Hartnell'),
  'icon' => 'athletics_internal.png',
  'theme' => 'athletics_internal',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'athletics_internal.css',
  'regions' => array(
    'left' => t('Sidebar'),
    'content' => t('Content'),
    'lower_left' => t('Lower left'),
    'lower_right' => t('Lower right'),
  ),
);
