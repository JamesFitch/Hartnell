<?php
/**
 * @file
 * ct_ad.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ct_ad_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'audience_promotion';
  $mini->category = '';
  $mini->admin_title = 'Audience Promotion';
  $mini->admin_description = 'Tabbed per-audience promotion display for the home page';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '6',
      ),
      'override_title' => 1,
      'override_title_text' => 'Current Students',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '54',
      ),
      'override_title' => 1,
      'override_title_text' => 'Prospective Students',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['center'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '2',
      ),
      'override_title' => 1,
      'override_title_text' => 'Parents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['center'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '3',
      ),
      'override_title' => 1,
      'override_title_text' => 'Alumni',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['center'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => 'Faculty and Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['center'][4] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'audience_promotion_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'field_ad_audience' => 0,
        'field_ad_link' => 0,
        'field_ad_image' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'exposed' => array(
        'field_ad_audience_tid_op' => 'or',
        'field_ad_audience_tid' => '102',
      ),
      'override_title' => 1,
      'override_title_text' => 'Employers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['center'][5] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['audience_promotion'] = $mini;

  return $export;
}
