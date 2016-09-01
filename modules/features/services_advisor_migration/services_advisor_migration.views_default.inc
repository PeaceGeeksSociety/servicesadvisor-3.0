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
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  /* Field: Published Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'Published Date';
  $handler->display->display_options['fields']['created']['label'] = 'Published Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'importer_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'importer_format';
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['ui_name'] = 'Language';
  /* Field: Start Date */
  $handler->display->display_options['fields']['field_service_start_date']['id'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['table'] = 'field_data_field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['field'] = 'field_service_start_date';
  $handler->display->display_options['fields']['field_service_start_date']['ui_name'] = 'Start Date';
  $handler->display->display_options['fields']['field_service_start_date']['settings'] = array(
    'format_type' => 'importer_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: End Date */
  $handler->display->display_options['fields']['field_service_end_date']['id'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['table'] = 'field_data_field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['field'] = 'field_service_end_date';
  $handler->display->display_options['fields']['field_service_end_date']['ui_name'] = 'End Date';
  $handler->display->display_options['fields']['field_service_end_date']['settings'] = array(
    'format_type' => 'importer_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Organization */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['ui_name'] = 'Organization';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Field: Services Provided */
  $handler->display->display_options['fields']['field_services_provided']['id'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['table'] = 'field_data_field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['field'] = 'field_services_provided';
  $handler->display->display_options['fields']['field_services_provided']['ui_name'] = 'Services Provided';
  $handler->display->display_options['fields']['field_services_provided']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['field_service_availability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['ui_name'] = 'Accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_accessibility']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_accessibility']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_accessibility']['separator'] = ',';
  /* Field: Additional Details */
  $handler->display->display_options['fields']['field_service_location_details']['id'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['table'] = 'field_data_field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['field'] = 'field_service_location_details';
  $handler->display->display_options['fields']['field_service_location_details']['ui_name'] = 'Additional Details';
  $handler->display->display_options['fields']['field_service_location_details']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_location_details']['type'] = 'text_plain';
  /* Field: Service Location */
  $handler->display->display_options['fields']['field_service_location_location']['id'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['table'] = 'field_data_field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['field'] = 'field_service_location_location';
  $handler->display->display_options['fields']['field_service_location_location']['ui_name'] = 'Service Location';
  $handler->display->display_options['fields']['field_service_location_location']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_location_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Public Address/Location Details */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['ui_name'] = 'Public Address/Location Details';
  $handler->display->display_options['fields']['field_location_address']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_location_address']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_location_address']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Coverage */
  $handler->display->display_options['fields']['field_service_coverage']['id'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['table'] = 'field_data_field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['field'] = 'field_service_coverage';
  $handler->display->display_options['fields']['field_service_coverage']['ui_name'] = 'Coverage';
  $handler->display->display_options['fields']['field_service_coverage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_coverage']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  /* Field: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['ui_name'] = 'Legal Documents Required';
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_registration_type']['separator'] = ',';
  /* Field: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['ui_name'] = 'Nationality';
  $handler->display->display_options['fields']['field_service_nationality']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_nationality']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['ui_name'] = 'Intake Criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_intake_criteria']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['ui_name'] = 'Referral Method';
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_method']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_method']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_method']['separator'] = ',';
  /* Field: Referral Contact Email */
  $handler->display->display_options['fields']['field_service_contact_email']['id'] = 'field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['table'] = 'field_data_field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['field'] = 'field_service_contact_email';
  $handler->display->display_options['fields']['field_service_contact_email']['ui_name'] = 'Referral Contact Email';
  $handler->display->display_options['fields']['field_service_contact_email']['type'] = 'text_plain';
  /* Field: Referral Contact Name */
  $handler->display->display_options['fields']['field_service_contact_name']['id'] = 'field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['table'] = 'field_data_field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['field'] = 'field_service_contact_name';
  $handler->display->display_options['fields']['field_service_contact_name']['ui_name'] = 'Referral Contact Name';
  $handler->display->display_options['fields']['field_service_contact_name']['type'] = 'text_plain';
  /* Field: Referral Contact Phone */
  $handler->display->display_options['fields']['field_service_contact_phone']['id'] = 'field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['table'] = 'field_data_field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['field'] = 'field_service_contact_phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['ui_name'] = 'Referral Contact Phone';
  $handler->display->display_options['fields']['field_service_contact_phone']['type'] = 'text_plain';
  /* Field: Immediate Next Step */
  $handler->display->display_options['fields']['field_service_referral_next_step']['id'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['table'] = 'field_data_field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['field'] = 'field_service_referral_next_step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['ui_name'] = 'Immediate Next Step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['label'] = 'Immediate Next Step';
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_next_step']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_referral_next_step']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_referral_next_step']['separator'] = ',';
  /* Field: Response Delay */
  $handler->display->display_options['fields']['field_response_delay_after_refer']['id'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['table'] = 'field_data_field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['field'] = 'field_response_delay_after_refer';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['ui_name'] = 'Response Delay';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['label'] = 'Response Delay';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_response_delay_after_refer']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['ui_name'] = 'Feedback Mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['ui_name'] = 'Complaints Mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_complaints_mechanism']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_complaints_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_complaints_mechanism']['separator'] = ',';
  /* Field: Comments */
  $handler->display->display_options['fields']['field_service_comments']['id'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['table'] = 'field_data_field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['field'] = 'field_service_comments';
  $handler->display->display_options['fields']['field_service_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_service_comments']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_comments']['type'] = 'text_plain';
  /* Field: More Info Link Title */
  $handler->display->display_options['fields']['field_service_more_info_link']['id'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link']['ui_name'] = 'More Info Link Title';
  $handler->display->display_options['fields']['field_service_more_info_link']['label'] = 'More Info Link Title';
  $handler->display->display_options['fields']['field_service_more_info_link']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_more_info_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_more_info_link']['type'] = 'link_title_plain';
  /* Field: More Info Link URL */
  $handler->display->display_options['fields']['field_service_more_info_link_1']['id'] = 'field_service_more_info_link_1';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['table'] = 'field_data_field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['field'] = 'field_service_more_info_link';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['ui_name'] = 'More Info Link URL';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['label'] = 'More Info Link URL';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_more_info_link_1']['type'] = 'link_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_location' => 'service_location',
  );

  /* Display: Service Location Master ID List */
  $handler = $view->new_display('page', 'Service Location Master ID List', 'page');
  $handler->display->display_options['display_description'] = 'A page of all the Service Location nodes with various IDs associated with it.';
  $handler->display->display_options['path'] = 'service-location-master-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'service-location-master-list/export';
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
    t('Username'),
    t('Published Date'),
    t('Status'),
    t('Language'),
    t('Start Date'),
    t('End Date'),
    t('Organization'),
    t('Services Provided'),
    t('Availability'),
    t('Accessibility'),
    t('Additional Details'),
    t('Service Location'),
    t('Public Address / Location Details'),
    t('Coverage'),
    t('Legal Documents Required'),
    t('Nationality'),
    t('Intake Criteria'),
    t('Referral Method'),
    t('Referral Contact Email'),
    t('Referral Contact Name'),
    t('Referral Contact Phone'),
    t('Immediate Next Step'),
    t('Response Delay'),
    t('Feedback Mechanism'),
    t('Complaints Mechanism'),
    t('Comments'),
    t('More Info Link Title'),
    t('More Info Link URL'),
    t('Service Location Master ID List'),
    t('A page of all the Service Location nodes with various IDs associated with it.'),
    t('Data export'),
  );
  $export['service_location_master_list'] = $view;

  $view = new view();
  $view->name = 'service_partner_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Partner Master List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Partner Master List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
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
  /* Field: Title (Hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title (Hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  /* Field: Published Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'Published Date';
  $handler->display->display_options['fields']['created']['label'] = 'Published Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'importer_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'importer_format';
  /* Field: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['ui_name'] = 'Language';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = TRUE;
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Abbreviated Partner Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Abbreviated Partner Name';
  $handler->display->display_options['fields']['nothing']['label'] = 'Abbreviated Partner Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]';
  /* Field: Full Partner Name */
  $handler->display->display_options['fields']['field_service_partner_full_name']['id'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['table'] = 'field_data_field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['field'] = 'field_service_partner_full_name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['ui_name'] = 'Full Partner Name';
  $handler->display->display_options['fields']['field_service_partner_full_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_partner_full_name']['type'] = 'text_plain';
  /* Field: Organization Overview */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Organization Overview';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  /* Field: Partner URL */
  $handler->display->display_options['fields']['field_service_partner_url']['id'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['table'] = 'field_data_field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['field'] = 'field_service_partner_url';
  $handler->display->display_options['fields']['field_service_partner_url']['ui_name'] = 'Partner URL';
  $handler->display->display_options['fields']['field_service_partner_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_service_partner_url']['type'] = 'link_url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_partner' => 'service_partner',
  );

  /* Display: Service Partner Master List */
  $handler = $view->new_display('page', 'Service Partner Master List', 'page');
  $handler->display->display_options['display_description'] = 'Lists all the details of every Service Partner';
  $handler->display->display_options['path'] = 'service-partner-master-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'service-partner-master-list/export';
  $translatables['service_partner_master_list'] = array(
    t('Master'),
    t('Service Partner Master List'),
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
    t('Username'),
    t('Published Date'),
    t('Language'),
    t('Status'),
    t('Abbreviated Partner Name'),
    t('[title]'),
    t('Full Partner Name'),
    t('Organization Overview'),
    t('Partner URL'),
    t('Lists all the details of every Service Partner'),
    t('Data export'),
  );
  $export['service_partner_master_list'] = $view;

  $view = new view();
  $view->name = 'user_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Master List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Master List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Username (Hidden) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username (Hidden)';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['nothing']['label'] = 'Username';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  /* Field: Created Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'Created Date';
  $handler->display->display_options['fields']['created']['label'] = 'Created Date';
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'importer_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'importer_format';
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Email Address */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email Address';
  $handler->display->display_options['fields']['mail']['label'] = 'Email Address';
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['ui_name'] = 'User Roles';
  $handler->display->display_options['fields']['rid']['label'] = 'User Roles';
  $handler->display->display_options['fields']['rid']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['rid']['separator'] = ',';
  /* Field: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['ui_name'] = 'Language';
  /* Field: Service Organisation */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['ui_name'] = 'Service Organisation';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Service Organisation';
  $handler->display->display_options['fields']['og_group_ref']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['og_group_ref']['separator'] = ',';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: User Master List */
  $handler = $view->new_display('page', 'User Master List', 'page');
  $handler->display->display_options['display_description'] = 'Shows all the values of all the users.';
  $handler->display->display_options['path'] = 'user-master-list';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'user-master-list/export';
  $translatables['user_master_list'] = array(
    t('Master'),
    t('User Master List'),
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
    t('Username'),
    t('[name]'),
    t('Created Date'),
    t('Status'),
    t('Email Address'),
    t('User Roles'),
    t('Language'),
    t('Service Organisation'),
    t('Shows all the values of all the users.'),
    t('Data export'),
  );
  $export['user_master_list'] = $view;

  return $export;
}
