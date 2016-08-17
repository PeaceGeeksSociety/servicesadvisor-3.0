<?php
/**
 * @file
 * services_advisor_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_advisor_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_organizations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'my_organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Organization';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Membership */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['ui_name'] = 'Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'Membership';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Current User */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'Current User';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-organization';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Organization';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['my_organizations'] = array(
    t('Master'),
    t('My Organization'),
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
    t('Membership'),
    t('All'),
    t('Page'),
  );
  $export['my_organizations'] = $view;

  $view = new view();
  $view->name = 'services_advisor_dashboard';
  $view->description = 'User\'s dashboard';
  $view->tag = 'Service Advisor';
  $view->base_table = 'node';
  $view->human_name = 'Services Advisor Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Services';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any service_location content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Result summary */
  $handler->display->display_options['empty']['result']['id'] = 'result';
  $handler->display->display_options['empty']['result']['table'] = 'views';
  $handler->display->display_options['empty']['result']['field'] = 'result';
  $handler->display->display_options['empty']['result']['empty'] = TRUE;
  /* Relationship: Service Location Term */
  $handler->display->display_options['relationships']['field_service_location_location_tid']['id'] = 'field_service_location_location_tid';
  $handler->display->display_options['relationships']['field_service_location_location_tid']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['relationships']['field_service_location_location_tid']['field'] = 'field_service_location_location_tid';
  $handler->display->display_options['relationships']['field_service_location_location_tid']['ui_name'] = 'Service Location Term';
  $handler->display->display_options['relationships']['field_service_location_location_tid']['label'] = 'Service Location Term';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Organization */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['ui_name'] = 'Organization';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_service_location_location']['label'] = '';
  $handler->display->display_options['fields']['field_service_location_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_location_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Services */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['ui_name'] = 'Services';
  $handler->display->display_options['fields']['field_services_provided']['label'] = '';
  $handler->display->display_options['fields']['field_services_provided']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_location' => 'service_location',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Search */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Search';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  /* Filter criterion: Organization */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['ui_name'] = 'Organization';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'organization';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  /* Filter criterion: Services Provided */
  $handler->display->display_options['filters']['field_services_provided_tid']['id'] = 'field_services_provided_tid';
  $handler->display->display_options['filters']['field_services_provided_tid']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['filters']['field_services_provided_tid']['field'] = 'field_services_provided_tid';
  $handler->display->display_options['filters']['field_services_provided_tid']['ui_name'] = 'Services Provided';
  $handler->display->display_options['filters']['field_services_provided_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_services_provided_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['operator_id'] = 'field_services_provided_tid_op';
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['label'] = 'Services Provided';
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['operator'] = 'field_services_provided_tid_op';
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['identifier'] = 'services_provided';
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_services_provided_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_services_provided_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_services_provided_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_services_provided_tid']['vocabulary'] = 'service_nested_categories';
  $handler->display->display_options['filters']['field_services_provided_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_services_provided_tid']['error_message'] = FALSE;
  /* Filter criterion: Accessibility */
  $handler->display->display_options['filters']['field_service_accessibility_tid']['id'] = 'field_service_accessibility_tid';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['field'] = 'field_service_accessibility_tid';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['ui_name'] = 'Accessibility';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['operator_id'] = 'field_service_accessibility_tid_op';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['label'] = 'Accessibility';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['operator'] = 'field_service_accessibility_tid_op';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['identifier'] = 'accessibility';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_accessibility_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_service_accessibility_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_service_accessibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['vocabulary'] = 'service_accessibility';
  $handler->display->display_options['filters']['field_service_accessibility_tid']['hierarchy'] = 1;
  /* Filter criterion: Coverage */
  $handler->display->display_options['filters']['field_service_coverage_tid']['id'] = 'field_service_coverage_tid';
  $handler->display->display_options['filters']['field_service_coverage_tid']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['filters']['field_service_coverage_tid']['field'] = 'field_service_coverage_tid';
  $handler->display->display_options['filters']['field_service_coverage_tid']['ui_name'] = 'Coverage';
  $handler->display->display_options['filters']['field_service_coverage_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['operator_id'] = 'field_service_coverage_tid_op';
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['label'] = 'Coverage';
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['operator'] = 'field_service_coverage_tid_op';
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['identifier'] = 'coverage';
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_coverage_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_service_coverage_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_service_coverage_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_coverage_tid']['vocabulary'] = 'service_coverage';
  $handler->display->display_options['filters']['field_service_coverage_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_service_coverage_tid']['error_message'] = FALSE;
  /* Filter criterion: Nationality */
  $handler->display->display_options['filters']['field_service_nationality_tid']['id'] = 'field_service_nationality_tid';
  $handler->display->display_options['filters']['field_service_nationality_tid']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['filters']['field_service_nationality_tid']['field'] = 'field_service_nationality_tid';
  $handler->display->display_options['filters']['field_service_nationality_tid']['ui_name'] = 'Nationality';
  $handler->display->display_options['filters']['field_service_nationality_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['operator_id'] = 'field_service_nationality_tid_op';
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['label'] = 'Nationality';
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['operator'] = 'field_service_nationality_tid_op';
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['identifier'] = 'nationality';
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_nationality_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_service_nationality_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_service_nationality_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_nationality_tid']['vocabulary'] = 'service_available_nationality';
  $handler->display->display_options['filters']['field_service_nationality_tid']['hierarchy'] = 1;
  /* Filter criterion: In-Take Criteria */
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['id'] = 'field_service_intake_criteria_tid';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['field'] = 'field_service_intake_criteria_tid';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['ui_name'] = 'In-Take Criteria';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['operator_id'] = 'field_service_intake_criteria_tid_op';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['label'] = 'In-Take Criteria';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['operator'] = 'field_service_intake_criteria_tid_op';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['identifier'] = 'intake_criteria';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['vocabulary'] = 'service_intake_criteria';
  $handler->display->display_options['filters']['field_service_intake_criteria_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: End Date (field_service_end_date) */
  $handler->display->display_options['filters']['field_service_end_date_value']['id'] = 'field_service_end_date_value';
  $handler->display->display_options['filters']['field_service_end_date_value']['table'] = 'field_data_field_service_end_date';
  $handler->display->display_options['filters']['field_service_end_date_value']['field'] = 'field_service_end_date_value';
  $handler->display->display_options['filters']['field_service_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_service_end_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['operator_id'] = 'field_service_end_date_value_op';
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['operator'] = 'field_service_end_date_value_op';
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['identifier'] = 'field_service_end_date_value';
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_end_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_service_end_date_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_service_end_date_value']['group_info']['identifier'] = 'expired';
  $handler->display->display_options['filters']['field_service_end_date_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_end_date_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_service_end_date_value']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_service_end_date_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Exclude Expired Service Locations',
      'operator' => '>=',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => 'today',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => 'today',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
    2 => array(
      'title' => 'Show Only Expired Service Locations',
      'operator' => '<',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => 'today',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => 'today',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['field_service_end_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_service_end_date_value']['default_date'] = 'today';

  /* Display: All Services */
  $handler = $view->new_display('page', 'All Services', 'organization_list');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_accessibility_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_end_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_coverage_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_nationality_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_location_hour_clos_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_location_hour_open_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'og_group_ref_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_location_location_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_services_provided_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_service_start_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg_advanced';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'search-services';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['description'] = 'View all services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'services-export-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_service_office_hours']['id'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['table'] = 'field_data_field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['field'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_service_office_hours']['settings'] = array(
    'showclosed' => 'all',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 1,
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
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Location Point */
  $handler->display->display_options['fields']['field_location_point']['id'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['fields']['field_location_point']['field'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['relationship'] = 'field_service_location_location_tid';
  $handler->display->display_options['fields']['field_location_point']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_point']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_point']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: GPS coordinates */
  $handler->display->display_options['fields']['field_service_location']['id'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['fields']['field_service_location']['field'] = 'field_service_location';
  $handler->display->display_options['fields']['field_service_location']['empty'] = '[field_location_point]';
  $handler->display->display_options['fields']['field_service_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_service_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_service_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['type'] = 'text_plain';
  /* Field: Content: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  /* Field: Content: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['label'] = 'In-Take Criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  /* Field: Content: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  /* Field: Content: Referral Contact Name */
  $handler->display->display_options['fields']['field_service_contact_name']['id'] = 'field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['table'] = 'field_data_field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['field'] = 'field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['type'] = 'text_plain';
  /* Field: Content: Referral Contact Phone */
  $handler->display->display_options['fields']['field_service_contact_phone']['id'] = 'field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['table'] = 'field_data_field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['field'] = 'field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['type'] = 'text_plain';
  /* Field: Content: Referral Contact Email */
  $handler->display->display_options['fields']['field_service_contact_email']['id'] = 'field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['table'] = 'field_data_field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['field'] = 'field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['type'] = 'text_plain';
  /* Field: Content: Immediate Next Step after Referral */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_next_step']['delta_offset'] = '0';
  /* Field: Content: Response Delay after Referral */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  /* Field: Content: Feedback Delay */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'search-services/csv';
  $handler->display->display_options['displays'] = array(
    'organization_list' => 'organization_list',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['services_advisor_dashboard'] = array(
    t('Master'),
    t('All Services'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Displaying @start - @end of @total'),
    t('Service Location Term'),
    t('Title'),
    t('Organization'),
    t('Services Provided'),
    t('Accessibility'),
    t('Coverage'),
    t('Nationality'),
    t('In-Take Criteria'),
    t('End Date'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Data export'),
    t('Nid'),
    t('Start Date'),
    t('Office Hours'),
    t('Service Location'),
    t('Location Point'),
    t('GPS coordinates'),
    t('[field_location_point]'),
    t('Public Address / Location Details'),
    t('Legal Documents Required'),
    t('Referral Method'),
    t('Referral Contact Name'),
    t('Referral Contact Phone'),
    t('Referral Contact Email'),
    t('Immediate Next Step after Referral'),
    t('Response Delay after Referral'),
    t('Feedback Mechanism'),
    t('Feedback Delay'),
    t('Complaints Mechanism'),
  );
  $export['services_advisor_dashboard'] = $view;

  return $export;
}
