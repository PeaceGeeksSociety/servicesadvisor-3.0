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
  $view->tag = 'Services Advisor';
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
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
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
  $handler->display->display_options['fields']['field_service_start_date']['label'] = 'Start Date *';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['field_service_end_date']['label'] = 'End Date *';
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Organisation Name *';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['label'] = 'Services Provided *';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Content: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['label'] = 'Availability *';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_accessibility']['separator'] = ',';
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['label'] = 'Service Location *';
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_coverage']['separator'] = ',';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  /* Field: Content: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_registration_type']['separator'] = ',';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['label'] = 'Nationality *';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Content: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Content: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_method']['separator'] = ',';
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
  $handler->display->display_options['fields']['field_service_referral_next_step']['separator'] = ',';
  /* Field: Content: Response Delay after Referral */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  /* Field: Content: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Content: Feedback Delay */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  /* Field: Content: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_complaints_mechanism']['separator'] = ',';
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

  /* Display: Service Location Master List (Names) */
  $handler = $view->new_display('page', 'Service Location Master List (Names)', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['path'] = 'service-location-master-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'service-location-master-list/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Service Location Master List (IDs) */
  $handler = $view->new_display('page', 'Service Location Master List (IDs)', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Location Master List IDs';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User ID';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'importer_format',
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
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Organization ETID';
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '[og_group_ref-target_id]';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['label'] = 'Services Provided TID';
  $handler->display->display_options['fields']['field_services_provided']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_provided']['alter']['text'] = '[field_services_provided-tid]';
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['field_service_availability']['label'] = 'Availability TID';
  $handler->display->display_options['fields']['field_service_availability']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_availability']['alter']['text'] = '[field_service_availability-tid]';
  $handler->display->display_options['fields']['field_service_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Hours (Hidden) */
  $handler->display->display_options['fields']['field_service_office_hours']['id'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['table'] = 'field_data_field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['field'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['ui_name'] = 'Hours (Hidden)';
  $handler->display->display_options['fields']['field_service_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_service_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_office_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_service_office_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 0,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
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
  /* Field: Hours: Hours Start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Hours: Hours Start';
  $handler->display->display_options['fields']['nothing']['label'] = 'Hours: Hours Start';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_service_office_hours]';
  /* Field: Hours: Hours End */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Hours: Hours End';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Hours: Hours End';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_service_office_hours] ';
  /* Field: Hours: Day */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Hours: Day';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Hours: Day';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_service_office_hours]';
  /* Field: Accessibility TID */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['ui_name'] = 'Accessibility TID';
  $handler->display->display_options['fields']['field_service_accessibility']['label'] = 'Accessibility TID';
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['text'] = '[field_service_accessibility-tid]';
  $handler->display->display_options['fields']['field_service_accessibility']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_accessibility']['separator'] = ',';
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  /* Field: Service Location TID */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['ui_name'] = 'Service Location TID';
  $handler->display->display_options['fields']['field_service_location_location']['label'] = 'Service Location TID';
  $handler->display->display_options['fields']['field_service_location_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_location_location']['alter']['text'] = '[field_service_location_location-tid]';
  $handler->display->display_options['fields']['field_service_location_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = 'Public Address/Location Details';
  /* Field: Coverage TID */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['ui_name'] = 'Coverage TID';
  $handler->display->display_options['fields']['field_service_coverage']['label'] = 'Coverage TID';
  $handler->display->display_options['fields']['field_service_coverage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_coverage']['alter']['text'] = '[field_service_coverage-tid]';
  $handler->display->display_options['fields']['field_service_coverage']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_coverage']['separator'] = ',';
  /* Field: Legal Documents Required tid */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['ui_name'] = 'Legal Documents Required tid';
  $handler->display->display_options['fields']['field_service_registration_type']['label'] = 'Legal Documents Required tid';
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['text'] = '[field_service_registration_type-tid]';
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Nationality TID */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['ui_name'] = 'Nationality TID';
  $handler->display->display_options['fields']['field_service_nationality']['label'] = 'Nationality TID';
  $handler->display->display_options['fields']['field_service_nationality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_nationality']['alter']['text'] = '[field_service_nationality-tid]';
  $handler->display->display_options['fields']['field_service_nationality']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Intake Criteria TID */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['ui_name'] = 'Intake Criteria TID';
  $handler->display->display_options['fields']['field_service_intake_criteria']['label'] = 'Intake Criteria TID';
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['text'] = '[field_service_intake_criteria-tid]';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Referral Method TID */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['ui_name'] = 'Referral Method TID';
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['text'] = '[field_service_referral_method-tid]';
  $handler->display->display_options['fields']['field_service_referral_method']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_method']['separator'] = ',';
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
  /* Field: Immediate Next Step TID */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['ui_name'] = 'Immediate Next Step TID';
  $handler->display->display_options['fields']['field_service_referral_next_step']['label'] = 'Immediate Next Step TID';
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['text'] = '[field_service_referral_next_step-tid]';
  $handler->display->display_options['fields']['field_service_referral_next_step']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_next_step']['separator'] = ',';
  /* Field: Response Delay TID */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['ui_name'] = 'Response Delay TID';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['label'] = 'Response Delay TID';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['text'] = '[field_response_delay_after_refer-tid]';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Feedback Mechanism TID */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['ui_name'] = 'Feedback Mechanism TID';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['label'] = 'Feedback Mechanism TID';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['text'] = '[field_service_feedback_mechanism-tid]';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Feedback Delay TID */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['ui_name'] = 'Feedback Delay TID';
  $handler->display->display_options['fields']['field_service_feedback_delay']['label'] = 'Feedback Delay TID';
  $handler->display->display_options['fields']['field_service_feedback_delay']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_delay']['alter']['text'] = '[field_service_feedback_delay-tid]';
  $handler->display->display_options['fields']['field_service_feedback_delay']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Complaints Mechanism TID */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['ui_name'] = 'Complaints Mechanism TID';
  $handler->display->display_options['fields']['field_complaints_mechanism']['label'] = 'Complaints Mechanism TID';
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['text'] = '[field_complaints_mechanism-tid]';
  $handler->display->display_options['fields']['field_complaints_mechanism']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_complaints_mechanism']['separator'] = ',';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  /* Field: More Info Link */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['ui_name'] = 'More Info Link';
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'service-location-master-list-id';
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
    t('Start Date *'),
    t('End Date *'),
    t('Organisation Name *'),
    t('Services Provided *'),
    t('Availability *'),
    t('Accessibility'),
    t('Additional Details'),
    t('Service Location *'),
    t('Coverage'),
    t('Public Address / Location Details'),
    t('Legal Documents Required'),
    t('Nationality *'),
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
    t('Service Location Master List (Names)'),
    t('Data export'),
    t('Service Location Master List (IDs)'),
    t('Service Location Master List IDs'),
    t('User ID'),
    t('Start Date'),
    t('End Date'),
    t('Organization ETID'),
    t('[og_group_ref-target_id]'),
    t('Services Provided TID'),
    t('[field_services_provided-tid]'),
    t('Availability TID'),
    t('[field_service_availability-tid]'),
    t('Hours: Hours Start'),
    t('[field_service_office_hours]'),
    t('Hours: Hours End'),
    t('[field_service_office_hours] '),
    t('Hours: Day'),
    t('Accessibility TID'),
    t('[field_service_accessibility-tid]'),
    t('Service Location TID'),
    t('[field_service_location_location-tid]'),
    t('Public Address/Location Details'),
    t('Coverage TID'),
    t('[field_service_coverage-tid]'),
    t('Legal Documents Required tid'),
    t('[field_service_registration_type-tid]'),
    t('Nationality TID'),
    t('[field_service_nationality-tid]'),
    t('Intake Criteria TID'),
    t('[field_service_intake_criteria-tid]'),
    t('[field_service_referral_method-tid]'),
    t('Immediate Next Step TID'),
    t('[field_service_referral_next_step-tid]'),
    t('Response Delay TID'),
    t('[field_response_delay_after_refer-tid]'),
    t('Feedback Mechanism TID'),
    t('[field_service_feedback_mechanism-tid]'),
    t('Feedback Delay TID'),
    t('[field_service_feedback_delay-tid]'),
    t('Complaints Mechanism TID'),
    t('[field_complaints_mechanism-tid]'),
  );
  $export['service_location_master_list'] = $view;

  $view = new view();
  $view->name = 'service_location_master_list_id';
  $view->description = '';
  $view->tag = 'Services Advisor';
  $view->base_table = 'node';
  $view->human_name = 'Service Location Master List ID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Location Master List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
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
  $handler->display->display_options['fields']['field_service_start_date']['label'] = 'Start Date *';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['field_service_end_date']['label'] = 'End Date *';
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Organisation Name *';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['label'] = 'Services Provided *';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Content: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['label'] = 'Availability *';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_accessibility']['separator'] = ',';
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['label'] = 'Service Location *';
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_coverage']['separator'] = ',';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  /* Field: Content: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_registration_type']['separator'] = ',';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['label'] = 'Nationality *';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Content: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Content: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_method']['separator'] = ',';
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
  $handler->display->display_options['fields']['field_service_referral_next_step']['separator'] = ',';
  /* Field: Content: Response Delay after Referral */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  /* Field: Content: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Content: Feedback Delay */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  /* Field: Content: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_complaints_mechanism']['separator'] = ',';
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

  /* Display: Service Location Master List (IDs) */
  $handler = $view->new_display('page', 'Service Location Master List (IDs)', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Location Master List IDs';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'User ID';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'importer_format',
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
    'format_type' => 'importer_format',
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
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Organization ETID';
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '[og_group_ref-target_id]';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Field: Content: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['label'] = 'Services Provided TID';
  $handler->display->display_options['fields']['field_services_provided']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_provided']['alter']['text'] = '[field_services_provided-tid]';
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['field_service_availability']['label'] = 'Availability TID';
  $handler->display->display_options['fields']['field_service_availability']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_availability']['alter']['text'] = '[field_service_availability-tid]';
  $handler->display->display_options['fields']['field_service_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Hours (Hidden) */
  $handler->display->display_options['fields']['field_service_office_hours']['id'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['table'] = 'field_data_field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['field'] = 'field_service_office_hours';
  $handler->display->display_options['fields']['field_service_office_hours']['ui_name'] = 'Hours (Hidden)';
  $handler->display->display_options['fields']['field_service_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_service_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_office_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_service_office_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '0',
    'compress' => 0,
    'grouped' => 0,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
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
  /* Field: Hours: Hours Start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Hours: Hours Start';
  $handler->display->display_options['fields']['nothing']['label'] = 'Hours: Hours Start';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_service_office_hours]';
  /* Field: Hours: Hours End */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Hours: Hours End';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Hours: Hours End';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_service_office_hours] ';
  /* Field: Hours: Day */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Hours: Day';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Hours: Day';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_service_office_hours]';
  /* Field: Accessibility TID */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['ui_name'] = 'Accessibility TID';
  $handler->display->display_options['fields']['field_service_accessibility']['label'] = 'Accessibility TID';
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['text'] = '[field_service_accessibility-tid]';
  $handler->display->display_options['fields']['field_service_accessibility']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_accessibility']['separator'] = ',';
  /* Field: Content: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  /* Field: Service Location TID */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['ui_name'] = 'Service Location TID';
  $handler->display->display_options['fields']['field_service_location_location']['label'] = 'Service Location TID';
  $handler->display->display_options['fields']['field_service_location_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_location_location']['alter']['text'] = '[field_service_location_location-tid]';
  $handler->display->display_options['fields']['field_service_location_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Public Address / Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = 'Public Address/Location Details';
  /* Field: Coverage TID */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['ui_name'] = 'Coverage TID';
  $handler->display->display_options['fields']['field_service_coverage']['label'] = 'Coverage TID';
  $handler->display->display_options['fields']['field_service_coverage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_coverage']['alter']['text'] = '[field_service_coverage-tid]';
  $handler->display->display_options['fields']['field_service_coverage']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_coverage']['separator'] = ',';
  /* Field: Legal Documents Required tid */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['ui_name'] = 'Legal Documents Required tid';
  $handler->display->display_options['fields']['field_service_registration_type']['label'] = 'Legal Documents Required tid';
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['text'] = '[field_service_registration_type-tid]';
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  /* Field: Nationality TID */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['ui_name'] = 'Nationality TID';
  $handler->display->display_options['fields']['field_service_nationality']['label'] = 'Nationality TID';
  $handler->display->display_options['fields']['field_service_nationality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_nationality']['alter']['text'] = '[field_service_nationality-tid]';
  $handler->display->display_options['fields']['field_service_nationality']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Intake Criteria TID */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['ui_name'] = 'Intake Criteria TID';
  $handler->display->display_options['fields']['field_service_intake_criteria']['label'] = 'Intake Criteria TID';
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['text'] = '[field_service_intake_criteria-tid]';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Referral Method TID */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['ui_name'] = 'Referral Method TID';
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['text'] = '[field_service_referral_method-tid]';
  $handler->display->display_options['fields']['field_service_referral_method']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_method']['separator'] = ',';
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
  /* Field: Immediate Next Step TID */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['ui_name'] = 'Immediate Next Step TID';
  $handler->display->display_options['fields']['field_service_referral_next_step']['label'] = 'Immediate Next Step TID';
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['text'] = '[field_service_referral_next_step-tid]';
  $handler->display->display_options['fields']['field_service_referral_next_step']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_next_step']['separator'] = ',';
  /* Field: Response Delay TID */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['ui_name'] = 'Response Delay TID';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['label'] = 'Response Delay TID';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['text'] = '[field_response_delay_after_refer-tid]';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Feedback Mechanism TID */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['ui_name'] = 'Feedback Mechanism TID';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['label'] = 'Feedback Mechanism TID';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['text'] = '[field_service_feedback_mechanism-tid]';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Feedback Delay TID */
  $handler->display->display_options['fields']['field_service_feedback_delay']['id'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['table'] = 'field_data_field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['field'] = 'field_service_feedback_delay';
  $handler->display->display_options['fields']['field_service_feedback_delay']['ui_name'] = 'Feedback Delay TID';
  $handler->display->display_options['fields']['field_service_feedback_delay']['label'] = 'Feedback Delay TID';
  $handler->display->display_options['fields']['field_service_feedback_delay']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_delay']['alter']['text'] = '[field_service_feedback_delay-tid]';
  $handler->display->display_options['fields']['field_service_feedback_delay']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Complaints Mechanism TID */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['ui_name'] = 'Complaints Mechanism TID';
  $handler->display->display_options['fields']['field_complaints_mechanism']['label'] = 'Complaints Mechanism TID';
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['text'] = '[field_complaints_mechanism-tid]';
  $handler->display->display_options['fields']['field_complaints_mechanism']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_complaints_mechanism']['separator'] = ',';
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  /* Field: More Info Link */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['ui_name'] = 'More Info Link';
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'service-location-master-list-id';
  $translatables['service_location_master_list_id'] = array(
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
    t('Start Date *'),
    t('End Date *'),
    t('Organisation Name *'),
    t('Services Provided *'),
    t('Availability *'),
    t('Accessibility'),
    t('Additional Details'),
    t('Service Location *'),
    t('Coverage'),
    t('Public Address / Location Details'),
    t('Legal Documents Required'),
    t('Nationality *'),
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
    t('Service Location Master List (IDs)'),
    t('Service Location Master List IDs'),
    t('User ID'),
    t('Start Date'),
    t('End Date'),
    t('Organization ETID'),
    t('[og_group_ref-target_id]'),
    t('Services Provided TID'),
    t('[field_services_provided-tid]'),
    t('Availability TID'),
    t('[field_service_availability-tid]'),
    t('Hours: Hours Start'),
    t('[field_service_office_hours]'),
    t('Hours: Hours End'),
    t('[field_service_office_hours] '),
    t('Hours: Day'),
    t('Accessibility TID'),
    t('[field_service_accessibility-tid]'),
    t('Service Location TID'),
    t('[field_service_location_location-tid]'),
    t('Public Address/Location Details'),
    t('Coverage TID'),
    t('[field_service_coverage-tid]'),
    t('Legal Documents Required tid'),
    t('[field_service_registration_type-tid]'),
    t('Nationality TID'),
    t('[field_service_nationality-tid]'),
    t('Intake Criteria TID'),
    t('[field_service_intake_criteria-tid]'),
    t('[field_service_referral_method-tid]'),
    t('Immediate Next Step TID'),
    t('[field_service_referral_next_step-tid]'),
    t('Response Delay TID'),
    t('[field_response_delay_after_refer-tid]'),
    t('Feedback Mechanism TID'),
    t('[field_service_feedback_mechanism-tid]'),
    t('Feedback Delay TID'),
    t('[field_service_feedback_delay-tid]'),
    t('Complaints Mechanism TID'),
    t('[field_complaints_mechanism-tid]'),
  );
  $export['service_location_master_list_id'] = $view;

  return $export;
}
