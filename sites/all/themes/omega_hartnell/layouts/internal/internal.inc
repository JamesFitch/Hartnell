<?php

// Plugin definition
$plugin = array(
  'title' => t('Academics - Internal, left sidebar, 1-3-1-3'),
  'category' => t('Hartnell'),
  'icon' => 'internal.png',
  'theme' => 'internal',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'internal.css',
  'regions' => array(
    'left' => t('Left side'),
    'content' => t('Content'),
    'lower_left' => t('Lower left'),
    'lower_middle' => t('Lower middle'),
    'lower_right' => t('Lower right'),
    'content_2' => t('Content 2'),
    'lower_left_2' => t('Lower left 2'),
    'lower_middle_2' => t('Lower middle 2'),
    'lower_right_2' => t('Lower right 2')
  ),
);
