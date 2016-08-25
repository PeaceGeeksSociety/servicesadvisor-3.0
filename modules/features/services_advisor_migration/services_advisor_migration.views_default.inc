<?php
/**
 * @file
 * services_advisor_migration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_advisor_migration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_location_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Location Master List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Location Master List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer site configuration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author Email *';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'long',
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
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  /* Field: Content: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  /* Field: Content: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  /* Field: Content: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  /* Field: Content: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  /* Field: Content: Referral Contact Name */
  $handler->display->display_options['fields']['field_service_contact_name']['id'] = 'field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['table'] = 'field_data_field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['field'] = 'field_service_contact_name';
  /* Field: Content: Referral Contact Phone */
  $handler->display->display_options['fields']['field_service_contact_phone']['id'] = 'field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['table'] = 'field_data_field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['field'] = 'field_service_contact_phone';
  /* Field: Content: Referral Contact Email */
  $handler->display->display_options['fields']['field_service_contact_email']['id'] = 'field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['table'] = 'field_data_field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['field'] = 'field_service_contact_email';
  /* Field: Content: Immediate Next Step after Referral */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['delta_offset'] = '0';
  /* Field: Content: Response Delay after Referral */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  /* Field: Content: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  /* Field: Content: Feedback Delay */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  /* Field: Content: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  /* Field: Content: More Info Link */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-location-master-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'service-location-master-list';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';
  $translatables['service_location_master_list'] = array(
    t('Master'),
    t('Service Location Master List'),
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
    t('author'),
    t('Author Email *'),
    t('Language'),
    t('Start Date'),
    t('End Date'),
    t('Organization'),
    t('Services Provided'),
    t('Availability'),
    t('Accessibility'),
    t('Additional Details'),
    t('Service Location'),
    t('Coverage'),
    t('Public Address / Location Details'),
    t('Legal Documents Required'),
    t('Nationality'),
    t('Intake Criteria'),
    t('Referral Method'),
    t('Referral Contact Name'),
    t('Referral Contact Phone'),
    t('Referral Contact Email'),
    t('Immediate Next Step after Referral'),
    t('Response Delay after Referral'),
    t('Feedback Mechanism'),
    t('Feedback Delay'),
    t('Complaints Mechanism'),
    t('Comments'),
    t('More Info Link'),
    t('Page'),
    t('Data export'),
  );
  $export['service_location_master_list'] = $view;

  return $export;
}
