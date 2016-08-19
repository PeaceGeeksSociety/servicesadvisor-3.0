<?php
/**
 * @file
 * services_advisor_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_advisor_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_categories_json_feed';
  $view->description = '';
  $view->tag = 'unhcr';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service Categories JSON Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Categories JSON Feed';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = 'sector';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Glyph */
  $handler->display->display_options['fields']['field_sector_glyph']['id'] = 'field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['table'] = 'field_data_field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['field'] = 'field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['label'] = 'glyph';
  /* Field: Taxonomy term: Marker Color */
  $handler->display->display_options['fields']['field_sector_marker_color']['id'] = 'field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['table'] = 'field_data_field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['field'] = 'field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['label'] = 'markerColor';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'service_nested_categories' => 'service_nested_categories',
  );
  /* Filter criterion: Taxonomy term: Glyph (field_sector_glyph) */
  $handler->display->display_options['filters']['field_sector_glyph_value']['id'] = 'field_sector_glyph_value';
  $handler->display->display_options['filters']['field_sector_glyph_value']['table'] = 'field_data_field_sector_glyph';
  $handler->display->display_options['filters']['field_sector_glyph_value']['field'] = 'field_sector_glyph_value';
  $handler->display->display_options['filters']['field_sector_glyph_value']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Marker Color (field_sector_marker_color) */
  $handler->display->display_options['filters']['field_sector_marker_color_rgb']['id'] = 'field_sector_marker_color_rgb';
  $handler->display->display_options['filters']['field_sector_marker_color_rgb']['table'] = 'field_data_field_sector_marker_color';
  $handler->display->display_options['filters']['field_sector_marker_color_rgb']['field'] = 'field_sector_marker_color_rgb';
  $handler->display->display_options['filters']['field_sector_marker_color_rgb']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-sectors';
  $translatables['service_categories_json_feed'] = array(
    t('Master'),
    t('Service Categories JSON Feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('glyph'),
    t('markerColor'),
    t('Page'),
  );
  $export['service_categories_json_feed'] = $view;

  $view = new view();
  $view->name = 'service_location_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service location List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service location List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No Service location';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no Service Location records for your organization.';
  /* Relationship: Node Membership */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['ui_name'] = 'Node Membership';
  $handler->display->display_options['relationships']['og_membership_rel']['label'] = 'Node Membership';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: Service Partner */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Service Partner';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Service Partner';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: User Membership */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['ui_name'] = 'User Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'User Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: User */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_user']['ui_name'] = 'User';
  $handler->display->display_options['relationships']['og_membership_related_user']['label'] = 'User';
  $handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
  /* Relationship: Arabic Translations */
  $handler->display->display_options['relationships']['translation']['id'] = 'translation';
  $handler->display->display_options['relationships']['translation']['table'] = 'node';
  $handler->display->display_options['relationships']['translation']['field'] = 'translation';
  $handler->display->display_options['relationships']['translation']['ui_name'] = 'Arabic Translations';
  $handler->display->display_options['relationships']['translation']['language'] = 'ar';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_2']['label'] = 'Org';
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Service Location';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'translation';
  $handler->display->display_options['fields']['title_1']['label'] = 'Service Location (Ar)';
  /* Field: Content translation: Translation status */
  $handler->display->display_options['fields']['translate']['id'] = 'translate';
  $handler->display->display_options['fields']['translate']['table'] = 'node';
  $handler->display->display_options['fields']['translate']['field'] = 'translate';
  $handler->display->display_options['fields']['translate']['relationship'] = 'translation';
  $handler->display->display_options['fields']['translate']['label'] = 'Translation Status';
  $handler->display->display_options['fields']['translate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['translate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['translate']['type'] = 'custom';
  $handler->display->display_options['fields']['translate']['type_custom_true'] = 'Needs work';
  $handler->display->display_options['fields']['translate']['type_custom_false'] = 'Complete ';
  $handler->display->display_options['fields']['translate']['not'] = 0;
  /* Field: Edit translation */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit translation';
  $handler->display->display_options['fields']['nothing']['label'] = 'Translation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[translate] <a href="/node/[nid]/translate"> edit</a>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit English';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'translation';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Edit Arabic';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = '/ar/node/[nid_1]/edit?destination=/';
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = 'Clone';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_location' => 'service_location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;

  /* Display: Service list */
  $handler = $view->new_display('block', 'Service list', 'service_location_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_2' => 'title_2',
    'name' => 'name',
    'field_service_category' => 'field_service_category',
    'nid' => 'nid',
    'title' => 'title',
    'title_1' => 'title_1',
    'translate' => 'translate',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
    'edit_node_1' => 'edit_node_1',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'translate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node_1' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['service_location_list'] = array(
    t('Master'),
    t('Service location List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Service location'),
    t('There are no Service Location records for your organization.'),
    t('Node Membership'),
    t('Service Partner'),
    t('User Membership'),
    t('User'),
    t('Translations'),
    t('Org'),
    t('Service Location'),
    t('Service Location (Ar)'),
    t('Translation Status'),
    t('Needs work'),
    t('Complete '),
    t('Translation'),
    t('[translate] <a href="/node/[nid]/translate"> edit</a>'),
    t('Edit English'),
    t('Edit Arabic'),
    t('Edit'),
    t('Clone'),
    t('All'),
    t('Service list'),
    t('Services'),
  );
  $export['service_location_list'] = $view;

  $view = new view();
  $view->name = 'service_locations_json_feed';
  $view->description = '';
  $view->tag = 'unhcr';
  $view->base_table = 'node';
  $view->human_name = 'Service Locations JSON Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Locations JSON Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'nested location';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'service_nested_location' => 'service_nested_location',
    'forums' => 0,
    'activity_status' => 0,
    'article_type' => 0,
    'categories' => 0,
    'event_type' => 0,
    'gallery_collections' => 0,
    'report_type' => 0,
    'incident_severity' => 0,
    'map_filter_3' => 0,
    'map_filter_4' => 0,
    'partner_type' => 0,
    'service_location_subdistrict' => 0,
    'service_location_village' => 0,
    'project_location' => 0,
    'project_status' => 0,
    'theme' => 0,
    'resource_type' => 0,
    'service_accessibility' => 0,
    'service_activities' => 0,
    'service_availability' => 0,
    'service_available_nationality' => 0,
    'service_categories' => 0,
    'service_coverage' => 0,
    'service_feedback_delay' => 0,
    'service_feedback_mechanism' => 0,
    'service_intake_criteria' => 0,
    'service_location_availability_days' => 0,
    'service_location_district' => 0,
    'service_location_governorate' => 0,
    'service_location_hour_close' => 0,
    'service_location_hour_open' => 0,
    'service_location_region' => 0,
    'service_referral_method' => 0,
    'service_referral_next_step' => 0,
    'service_registration_type' => 0,
    'service_response_delay' => 0,
    'tags' => 0,
    'team_member_type' => 0,
    'contributor_type' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'nested category';
  $handler->display->display_options['relationships']['term_node_tid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'service_nested_categories' => 'service_nested_categories',
    'forums' => 0,
    'categories' => 0,
    'gallery_collections' => 0,
    'partner_type' => 0,
    'service_complaints_mechanism' => 0,
    'service_nested_location' => 0,
    'project_location' => 0,
    'project_status' => 0,
    'service_accessibility' => 0,
    'service_availability' => 0,
    'service_available_nationality' => 0,
    'service_activities' => 0,
    'service_categories' => 0,
    'service_sector' => 0,
    'service_coverage' => 0,
    'service_feedback_delay' => 0,
    'service_feedback_mechanism' => 0,
    'service_intake_criteria' => 0,
    'service_location_availability_days' => 0,
    'service_location_hour_close' => 0,
    'service_location_hour_open' => 0,
    'service_referral_method' => 0,
    'service_referral_next_step' => 0,
    'service_registration_type' => 0,
    'service_response_delay' => 0,
    'tags' => 0,
    'team_member_type' => 0,
    'contributor_type' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_2']['label'] = 'organization';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'region';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['label'] = 'startDate';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'yyyy_mm_dd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_service_end_date']['id'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['table'] = 'field_data_field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['field'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['label'] = 'endDate';
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'yyyy_mm_dd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'serviceName';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['label'] = 'details:Nationality';
  $handler->display->display_options['fields']['field_service_nationality']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['field_service_intake_criteria']['label'] = 'details:Intake Criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['label'] = 'details:Accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['label'] = 'details:Coverage';
  $handler->display->display_options['fields']['field_service_coverage']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['label'] = 'details:Availability';
  $handler->display->display_options['fields']['field_service_availability']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['field_service_referral_method']['label'] = 'details:Referral Method';
  $handler->display->display_options['fields']['field_service_referral_method']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Immediate Next Step after Referral */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['field_service_referral_next_step']['label'] = 'details:Referral Next Steps';
  $handler->display->display_options['fields']['field_service_referral_next_step']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['label'] = 'details:Feedback Mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Feedback Delay */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['field_service_feedback_delay']['label'] = 'details:Feedback Delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['relationship'] = 'field_service_location_service_target_id';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Taxonomy term: Location Point */
  $handler->display->display_options['fields']['field_location_point']['id'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['fields']['field_location_point']['field'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_location_point']['label'] = 'location:geometry';
  $handler->display->display_options['fields']['field_location_point']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_point']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_location_point']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: GPS coordinates */
  $handler->display->display_options['fields']['field_service_location']['id'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['fields']['field_service_location']['field'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['label'] = 'locationAlternate:geometry';
  $handler->display->display_options['fields']['field_service_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_service_location']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_service_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['label'] = 'details:Complaints Mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['label'] = 'category';
  $handler->display->display_options['fields']['field_services_provided']['empty'] = 'Basic Needs';
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided_1']['id'] = 'field_services_provided_1';
  $handler->display->display_options['fields']['field_services_provided_1']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided_1']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided_1']['label'] = 'servicesProvided';
  $handler->display->display_options['fields']['field_services_provided_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_services_provided_1']['separator'] = '||';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided_2']['id'] = 'field_services_provided_2';
  $handler->display->display_options['fields']['field_services_provided_2']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided_2']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided_2']['label'] = 'subCategory';
  $handler->display->display_options['fields']['field_services_provided_2']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_services_provided_2']['delta_offset'] = '1';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_service_office_hours']['id'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['table'] = 'field_data_field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['field'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['label'] = 'officeHours';
  $handler->display->display_options['fields']['field_service_office_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_service_office_hours']['settings'] = array(
    'showclosed' => 'all',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '2',
    'compress' => 0,
    'grouped' => 0,
    'closedformat' => 'Closed',
    'separator_days' => ',',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'hide',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_service_office_hours']['delta_offset'] = '0';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_location' => 'service_location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Taxonomy term: Location Point (field_location_point:lat) */
  $handler->display->display_options['filters']['field_location_point_lat']['id'] = 'field_location_point_lat';
  $handler->display->display_options['filters']['field_location_point_lat']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['filters']['field_location_point_lat']['field'] = 'field_location_point_lat';
  $handler->display->display_options['filters']['field_location_point_lat']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_location_point_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_point_lat']['group'] = 2;
  /* Filter criterion: Content: GPS coordinates (field_service_location:lat) */
  $handler->display->display_options['filters']['field_service_location_lat']['id'] = 'field_service_location_lat';
  $handler->display->display_options['filters']['field_service_location_lat']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['filters']['field_service_location_lat']['field'] = 'field_service_location_lat';
  $handler->display->display_options['filters']['field_service_location_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_service_location_lat']['group'] = 2;
  /* Filter criterion: Content: End Date (field_service_end_date) */
  $handler->display->display_options['filters']['field_service_end_date_value']['id'] = 'field_service_end_date_value';
  $handler->display->display_options['filters']['field_service_end_date_value']['table'] = 'field_data_field_service_end_date';
  $handler->display->display_options['filters']['field_service_end_date_value']['field'] = 'field_service_end_date_value';
  $handler->display->display_options['filters']['field_service_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_service_end_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-locations';
  $translatables['service_locations_json_feed'] = array(
    t('Master'),
    t('Service Locations JSON Feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Group node from OG membership'),
    t('nested location'),
    t('nested category'),
    t('id'),
    t('organization'),
    t('region'),
    t('startDate'),
    t('endDate'),
    t('serviceName'),
    t('details:Nationality'),
    t('details:Intake Criteria'),
    t('details:Accessibility'),
    t('details:Coverage'),
    t('details:Availability'),
    t('details:Referral Method'),
    t('details:Referral Next Steps'),
    t('details:Feedback Mechanism'),
    t('details:Feedback Delay'),
    t('Legal Documents Required'),
    t('location:geometry'),
    t('locationAlternate:geometry'),
    t('details:Complaints Mechanism'),
    t('category'),
    t('Basic Needs'),
    t('servicesProvided'),
    t('subCategory'),
    t('officeHours'),
    t('Published'),
    t('Page'),
  );
  $export['service_locations_json_feed'] = $view;

  $view = new view();
  $view->name = 'service_locations_with_translations';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'unhcr';
  $view->base_table = 'node';
  $view->human_name = 'Service Locations with translations';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content translation: Translations */
  $handler->display->display_options['relationships']['translation']['id'] = 'translation';
  $handler->display->display_options['relationships']['translation']['table'] = 'node';
  $handler->display->display_options['relationships']['translation']['field'] = 'translation';
  $handler->display->display_options['relationships']['translation']['language'] = 'all';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'translation';
  $handler->display->display_options['fields']['title_1']['label'] = 'عنوان';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  $handler->display->display_options['filters']['group_type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_location' => 'service_location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 1;
  /* Filter criterion: Node translation: Child translation */
  $handler->display->display_options['filters']['child_translation']['id'] = 'child_translation';
  $handler->display->display_options['filters']['child_translation']['table'] = 'node';
  $handler->display->display_options['filters']['child_translation']['field'] = 'child_translation';
  $handler->display->display_options['filters']['child_translation']['relationship'] = 'translation';
  $handler->display->display_options['filters']['child_translation']['group'] = 2;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'translation';
  $handler->display->display_options['filters']['language']['operator'] = 'empty';
  $handler->display->display_options['filters']['language']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['service_locations_with_translations'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There is no content in this group.'),
    t('OG membership from node'),
    t('Translations'),
    t('Title'),
    t('عنوان'),
    t('All'),
    t('Block'),
  );
  $export['service_locations_with_translations'] = $view;

  $view = new view();
  $view->name = 'service_partner_login';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Partner login';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'service-partner-node';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Relationship: Membership */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['ui_name'] = 'Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: User */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_user']['ui_name'] = 'User';
  $handler->display->display_options['relationships']['og_membership_related_user']['label'] = 'User';
  $handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_type'] = 'h1';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: clear-all */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'clear-all';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Full Partner Name */
  $handler->display->display_options['fields']['field_service_partner_full_name']['id'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['table'] = 'field_data_field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['field'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_label_colon'] = FALSE;
  /* Field: Content: Partner URL */
  $handler->display->display_options['fields']['field_service_partner_url']['id'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['table'] = 'field_data_field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['field'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['label'] = '';
  $handler->display->display_options['fields']['field_service_partner_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_partner_url']['click_sort_column'] = 'url';
  /* Field: Content: Organization Overview */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Edit Organization  */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit Organization ';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Organization';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/node/[nid]/edit?destination=/user/[uid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Logout */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '/user/logout';
  $handler->display->display_options['fields']['nothing_1']['element_label_class'] = 'logout-btn';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Organization User Details  */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Organization User Details ';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Organization User Details ';
  $handler->display->display_options['fields']['nothing_4']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['path'] = '/node/[nid]/group';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: link wrapper */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'link wrapper';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[nothing] [nothing_4] [nothing_1] ';
  $handler->display->display_options['fields']['nothing_5']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_5']['element_class'] = 'link-wrapper';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add new Service Location';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '/node/add/service-location?og_group_ref=[nid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_partner' => 'service_partner',
  );

  /* Display: Service partner login */
  $handler = $view->new_display('block', 'Service partner login', 'service_partner_login');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'service-partner-login';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_type'] = 'h1';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: clear-all */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'clear-all';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Full Partner Name */
  $handler->display->display_options['fields']['field_service_partner_full_name']['id'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['table'] = 'field_data_field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['field'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_label_colon'] = FALSE;
  /* Field: Content: Partner URL */
  $handler->display->display_options['fields']['field_service_partner_url']['id'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['table'] = 'field_data_field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['field'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['label'] = '';
  $handler->display->display_options['fields']['field_service_partner_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_partner_url']['click_sort_column'] = 'url';
  /* Field: Content: Organization Overview */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Edit Organization  */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit Organization ';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Organization';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/node/[nid]/edit?destination=/user/[uid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Logout */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '/user/logout';
  $handler->display->display_options['fields']['nothing_1']['element_label_class'] = 'logout-btn';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Organization User Details  */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Organization User Details ';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Organization User Details ';
  $handler->display->display_options['fields']['nothing_4']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['path'] = '/node/[nid]/group';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: link wrapper */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'link wrapper';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[nothing] [nothing_4] [nothing_1] ';
  $handler->display->display_options['fields']['nothing_5']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_5']['element_class'] = 'link-wrapper';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add new Service Location';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '/node/add/service-location?og_group_ref=[nid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: Service partner For Node */
  $handler = $view->new_display('block', 'Service partner For Node', 'service_partner_for_node');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Full Partner Name */
  $handler->display->display_options['fields']['field_service_partner_full_name']['id'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['table'] = 'field_data_field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['field'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_service_partner_full_name']['element_label_colon'] = FALSE;
  /* Field: Logout */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Logout';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '/user/logout';
  $handler->display->display_options['fields']['nothing_1']['element_label_class'] = 'logout-btn';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Dashboard */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Dashboard';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Dashboard';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $translatables['service_partner_login'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Membership'),
    t('User'),
    t('Uid'),
    t('Edit Organization'),
    t('Logout'),
    t('Organization User Details '),
    t('[nothing] [nothing_4] [nothing_1] '),
    t('Add new Service Location'),
    t('All'),
    t('Service partner login'),
    t('Service partner For Node'),
    t('Dashboard'),
  );
  $export['service_partner_login'] = $view;

  $view = new view();
  $view->name = 'service_sectors_json_feed';
  $view->description = '';
  $view->tag = 'unhcr';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service Sectors JSON Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Sectors JSON Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = 'sector';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Glyph */
  $handler->display->display_options['fields']['field_sector_glyph']['id'] = 'field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['table'] = 'field_data_field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['field'] = 'field_sector_glyph';
  $handler->display->display_options['fields']['field_sector_glyph']['label'] = 'glyph';
  /* Field: Taxonomy term: Marker Color */
  $handler->display->display_options['fields']['field_sector_marker_color']['id'] = 'field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['table'] = 'field_data_field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['field'] = 'field_sector_marker_color';
  $handler->display->display_options['fields']['field_sector_marker_color']['label'] = 'markerColor';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'service_sector' => 'service_sector',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-sectors';
  $translatables['service_sectors_json_feed'] = array(
    t('Master'),
    t('Service Sectors JSON Feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('glyph'),
    t('markerColor'),
    t('Page'),
  );
  $export['service_sectors_json_feed'] = $view;

  return $export;
}
