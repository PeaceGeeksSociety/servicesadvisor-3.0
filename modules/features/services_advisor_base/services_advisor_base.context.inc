<?php
/**
 * @file
 * services_advisor_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function services_advisor_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_site_wide';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-10',
        ),
        'services_advisor_base-jordan_inner_agency' => array(
          'module' => 'services_advisor_base',
          'delta' => 'jordan_inner_agency',
          'region' => 'footer',
          'weight' => '-22',
        ),
        'services_advisor_base-powered_by_peace_geeks' => array(
          'module' => 'services_advisor_base',
          'delta' => 'powered_by_peace_geeks',
          'region' => 'footer',
          'weight' => '-21',
        ),
        'menu-menu-footermenu' => array(
          'module' => 'menu',
          'delta' => 'menu-footermenu',
          'region' => 'footer_under',
          'weight' => '-10',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'footer_under',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['admin_site_wide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'my_organizations';
  $context->description = 'views generated page my-organizations <list of all partners>';
  $context->tag = 'unhcr';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'my-organizations' => 'my-organizations',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'services_advisor_base-add_service_btn' => array(
          'module' => 'services_advisor_base',
          'delta' => 'add_service_btn',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('unhcr');
  t('views generated page my-organizations <list of all partners>');
  $export['my_organizations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_partners';
  $context->description = 'When you are on a Service Partner';
  $context->tag = 'unhcr';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'service_partner' => 'service_partner',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'services_advisor_base-add_service_btn' => array(
          'module' => 'services_advisor_base',
          'delta' => 'add_service_btn',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('When you are on a Service Partner');
  t('unhcr');
  $export['service_partners'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'users';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-57cd2b20bfa85b655a0cee58327801a2' => array(
          'module' => 'views',
          'delta' => '57cd2b20bfa85b655a0cee58327801a2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['users'] = $context;

  return $export;
}
