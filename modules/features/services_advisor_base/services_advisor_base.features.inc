<?php
/**
 * @file
 * services_advisor_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function services_advisor_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function services_advisor_base_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['m/d/Y'] = 'm/d/Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function services_advisor_base_date_format_types() {
  $format_types = array();
  // Exported date format type: importer_format
  $format_types['importer_format'] = 'Importer Format';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function services_advisor_base_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: importer_format::ar
  $locale_date_formats['importer_format::ar'] = array(
    'type' => 'importer_format',
    'format' => 'm/d/Y',
    'locales' => array(
      0 => 'ar',
    ),
  );
  // Exported format: importer_format::en
  $locale_date_formats['importer_format::en'] = array(
    'type' => 'importer_format',
    'format' => 'm/d/Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  return $locale_date_formats;
}

/**
 * Implements hook_image_default_styles().
 */
function services_advisor_base_image_default_styles() {
  $styles = array();

  // Exported image style: scale_120_w.
  $styles['scale_120_w'] = array(
    'label' => 'Scale 120 w',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_logo.
  $styles['small_logo'] = array(
    'label' => 'small logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 70,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function services_advisor_base_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Regular page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
