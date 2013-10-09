<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Add theme stylesheets to print view.
 */
function omega_sl_preprocess_print(&$variables) {
  alpha_css_include();
  $css = drupal_add_css();
  $sl_print_path = drupal_get_path('theme', 'omega_sl') . '/css/print.css';
  $print_weight = $css[$sl_print_path]['weight'];
  $css[$sl_print_path]['weight'] = $print_weight + 50.0;
}
