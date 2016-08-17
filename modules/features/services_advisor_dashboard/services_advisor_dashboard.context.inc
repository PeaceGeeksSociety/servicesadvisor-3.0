<?php
/**
 * @file
 * services_advisor_dashboard.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function services_advisor_dashboard_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_all_services';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'services_advisor_dashboard:organization_list' => 'services_advisor_dashboard:organization_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'services_advisor_base-add_service_btn' => array(
          'module' => 'services_advisor_base',
          'delta' => 'add_service_btn',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'views-3856efa9d43e2999429c06db0135583a' => array(
          'module' => 'views',
          'delta' => '3856efa9d43e2999429c06db0135583a',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['dashboard_all_services'] = $context;

  return $export;
}
