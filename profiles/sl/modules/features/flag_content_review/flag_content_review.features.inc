<?php
/**
 * @file
 * flag_content_review.features.inc
 */

/**
 * Implements hook_views_api().
 */
function flag_content_review_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function flag_content_review_flag_default_flags() {
  $flags = array();
  // Exported flag: "Needs review".
  $flags['content_review'] = array(
    'content_type' => 'node',
    'title' => 'Needs review',
    'global' => '1',
    'types' => array(
      0 => 'blog_category',
      1 => 'external_resources',
      2 => 'faq',
      3 => 'library_resource',
      4 => 'location',
      5 => 'news',
      6 => 'newsletter',
      7 => 'page',
      8 => 'person',
      9 => 'webform',
      10 => 'scholarship',
    ),
    'flag_short' => 'Flag "[node:title]" for review',
    'flag_long' => 'Flag this content for admin review',
    'flag_message' => 'Content "	[node:title]" has been flagged for review',
    'unflag_short' => 'Unflag "[node:title]"',
    'unflag_long' => 'Remove the "needs review" flag',
    'unflag_message' => 'Content "	[node:title]" has been unflagged for review',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '4',
        1 => '3',
      ),
      'unflag' => array(
        0 => '4',
        1 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'flag_content_review',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
