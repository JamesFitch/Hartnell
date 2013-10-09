<?php
/**
 * @file
 * tax_site_section.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tax_site_section_field_default_fields() {
  $fields = array();

  // Exported field: 'taxonomy_term-site_section-field_banner_image'.
  $fields['taxonomy_term-site_section-field_banner_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_banner_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'deleted' => '0',
      'description' => 'Specify a banner image to be used for pages in this site section and sub-sections.  <br/>
This image will be <strong>not</strong> be used where it\'s been overridden within a sub-section or on a specific page.  <br/>
<a href="/help/hartnell_custom/dynamic-banner-pane" target="_blank">More info</a><br/>
This image will get resized to 1220x300 pixels for landing pages (no sidebar) and 915x300 pixels for internal pages (with a sidebar).',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_banner_image',
      'label' => 'Banner Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => 'ct_flexpage/images',
          ),
          'retroactive_update' => 0,
        ),
        'filefield_paths_enabled' => 1,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '31',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-site_section-field_color_settings'.
  $fields['taxonomy_term-site_section-field_color_settings'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_color_settings',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'site-default' => 'Default',
          'inherit' => 'Inherit from parent section',
          'custom' => 'Custom',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'default_value' => array(
        0 => array(
          'value' => 'inherit',
        ),
      ),
      'deleted' => '0',
      'description' => '<strong>Settings Options:</strong>
<ul>
<li><strong>Default</strong> -- Pages in this section will use the site-wide default colors.</li>
<li><strong>Inherit</strong> --  Pages in this section will use the colors of its parent section (or the site-wide defaults if this is a top-level section).[%parent]</li>
<li><strong>Custom</strong> -- Specify colors for pages in this section.</li>
</ul>
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_color_settings',
      'label' => 'Color Settings',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '37',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-site_section-field_menu_background_color'.
  $fields['taxonomy_term-site_section-field_menu_background_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_menu_background_color',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Set the color for the background of the sidebar menu for this Site Section.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_menu_background_color',
      'label' => 'Menu Background Color',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '41',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-site_section-field_menu_text_color'.
  $fields['taxonomy_term-site_section-field_menu_text_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_menu_text_color',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Set the color for the text to be displayed in the sidebar menu for this Site Section.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_menu_text_color',
      'label' => 'Menu Text Color',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '40',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-site_section-field_title_background_color'.
  $fields['taxonomy_term-site_section-field_title_background_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title_background_color',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Set the color for the background of the title bar for this Site Section.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_title_background_color',
      'label' => 'Title Background Color',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '39',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-site_section-field_title_text_color'.
  $fields['taxonomy_term-site_section-field_title_text_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title_text_color',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'site_section',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Set the color for the text to be displayed in the title bar for this Site Section.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_title_text_color',
      'label' => 'Title Text Color',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '38',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Settings Options:</strong>
<ul>
<li><strong>Default</strong> -- Pages in this section will use the site-wide default colors.</li>
<li><strong>Inherit</strong> --  Pages in this section will use the colors of its parent section (or the site-wide defaults if this is a top-level section).[%parent]</li>
<li><strong>Custom</strong> -- Specify colors for pages in this section.</li>
</ul>
');
  t('Banner Image');
  t('Color Settings');
  t('Menu Background Color');
  t('Menu Text Color');
  t('Set the color for the background of the sidebar menu for this Site Section.');
  t('Set the color for the background of the title bar for this Site Section.');
  t('Set the color for the text to be displayed in the sidebar menu for this Site Section.');
  t('Set the color for the text to be displayed in the title bar for this Site Section.');
  t('Specify a banner image to be used for pages in this site section and sub-sections.  <br/>
This image will be <strong>not</strong> be used where it\'s been overridden within a sub-section or on a specific page.  <br/>
<a href="/help/hartnell_custom/dynamic-banner-pane" target="_blank">More info</a><br/>
This image will get resized to 1220x300 pixels for landing pages (no sidebar) and 915x300 pixels for internal pages (with a sidebar).');
  t('Title Background Color');
  t('Title Text Color');

  return $fields;
}
