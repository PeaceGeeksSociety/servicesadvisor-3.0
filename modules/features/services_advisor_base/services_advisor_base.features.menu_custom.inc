<?php
/**
 * @file
 * services_advisor_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function services_advisor_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footermenu.
  $menus['menu-footermenu'] = array(
    'menu_name' => 'menu-footermenu',
    'title' => 'footer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('footer menu');

  return $menus;
}
