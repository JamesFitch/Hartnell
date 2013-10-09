<?php

// Plugin definition
$plugin = array(
  'title' => t('Academics Home'),
  'category' => t('Hartnell'),
  'icon' => 'home.png',
  'theme' => 'home',
  'admin css' => '../omega_hartnell_panels_admin.css',
  'css' => 'home.css',
  'regions' => array(
    'content' => t('Content'),
    'left' => t('Left side'),
    'middle' => t('Middle'),
    'right' => t('Right side')
  ),
);