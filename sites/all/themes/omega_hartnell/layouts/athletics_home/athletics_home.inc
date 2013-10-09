<?php

// Plugin definition
$plugin = array(
  'title' => t('Athletics Home'),
  'category' => t('Hartnell'),
  'icon' => 'athletics_home.png',
  'theme' => 'athletics_home',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'athletics_home.css',
  'regions' => array(
    'content' => t('Content'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'lower_col_1' => t('Lower column 1'),
    'lower_col_2' => t('Lower column 2'),
    'lower_col_3' => t('Lower column 3'),
    'lower_col_4' => t('Lower column 4')
  ),
);
