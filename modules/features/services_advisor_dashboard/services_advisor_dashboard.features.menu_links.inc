<?php
/**
 * @file
 * services_advisor_dashboard.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function services_advisor_dashboard_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_my-organization:my-organizations.
  $menu_links['main-menu_my-organization:my-organizations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-organizations',
    'router_path' => 'my-organizations',
    'link_title' => 'My Organization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-organization:my-organizations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_search:search-services.
  $menu_links['main-menu_search:search-services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search-services',
    'router_path' => 'search-services',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'View all services',
      ),
      'identifier' => 'main-menu_search:search-services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My Organization');
  t('Search');

  return $menu_links;
}
