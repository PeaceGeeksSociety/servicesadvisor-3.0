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
  $view->name = 'service_location_master_id_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Location Master ID List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Location Master ID List';
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
  /* Field: Author UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Author UID';
  $handler->display->display_options['fields']['uid']['label'] = 'Author UID';
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
  /* Field: Organization ETID */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['ui_name'] = 'Organization ETID';
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
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
  $handler->display->display_options['fields']['field_services_provided']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_services_provided']['alter']['text'] = '[field_services_provided-tid]';
  $handler->display->display_options['fields']['field_services_provided']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_services_provided']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services_provided']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services_provided']['separator'] = ',';
  /* Field: Availability */
  $handler->display->display_options['fields']['field_service_availability']['id'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['table'] = 'field_data_field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['field'] = 'field_service_availability';
  $handler->display->display_options['fields']['field_service_availability']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['field_service_availability']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_availability']['alter']['text'] = '[field_service_availability-tid]';
  $handler->display->display_options['fields']['field_service_availability']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_availability']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_availability']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_availability']['separator'] = ',';
  /* Field: Accessibility */
  $handler->display->display_options['fields']['field_service_accessibility']['id'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['table'] = 'field_data_field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['field'] = 'field_service_accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['ui_name'] = 'Accessibility';
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_accessibility']['alter']['text'] = '[field_service_accessibility-tid]';
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
  $handler->display->display_options['fields']['field_service_location_location']['alter']['alter_text'] = TRUE;
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
  $handler->display->display_options['fields']['field_service_coverage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_coverage']['alter']['text'] = '[field_service_coverage-tid]';
  $handler->display->display_options['fields']['field_service_coverage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_coverage']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_coverage']['delta_offset'] = '0';
  /* Field: Legal Documents Required */
  $handler->display->display_options['fields']['field_service_registration_type']['id'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['table'] = 'field_data_field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['field'] = 'field_service_registration_type';
  $handler->display->display_options['fields']['field_service_registration_type']['ui_name'] = 'Legal Documents Required';
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['text'] = '[field_service_registration_type-tid]';
  $handler->display->display_options['fields']['field_service_registration_type']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_registration_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_registration_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_registration_type']['separator'] = ',';
  /* Field: Nationality */
  $handler->display->display_options['fields']['field_service_nationality']['id'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['table'] = 'field_data_field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['field'] = 'field_service_nationality';
  $handler->display->display_options['fields']['field_service_nationality']['ui_name'] = 'Nationality';
  $handler->display->display_options['fields']['field_service_nationality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_nationality']['alter']['text'] = '[field_service_nationality-tid]';
  $handler->display->display_options['fields']['field_service_nationality']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_nationality']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_nationality']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_nationality']['separator'] = ',';
  /* Field: Intake Criteria */
  $handler->display->display_options['fields']['field_service_intake_criteria']['id'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['table'] = 'field_data_field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['field'] = 'field_service_intake_criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['ui_name'] = 'Intake Criteria';
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['text'] = '[field_service_intake_criteria-tid]';
  $handler->display->display_options['fields']['field_service_intake_criteria']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_intake_criteria']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_intake_criteria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_intake_criteria']['separator'] = ',';
  /* Field: Referral Method */
  $handler->display->display_options['fields']['field_service_referral_method']['id'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['table'] = 'field_data_field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['field'] = 'field_service_referral_method';
  $handler->display->display_options['fields']['field_service_referral_method']['ui_name'] = 'Referral Method';
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_method']['alter']['text'] = '[field_service_referral_method-tid]';
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
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_referral_next_step']['alter']['text'] = '[field_service_referral_next_step-tid]';
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
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['text'] = '[field_response_delay_after_refer-tid]';
  $handler->display->display_options['fields']['field_response_delay_after_refer']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_response_delay_after_refer']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Feedback Mechanism */
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['id'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['table'] = 'field_data_field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['field'] = 'field_service_feedback_mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['ui_name'] = 'Feedback Mechanism';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['text'] = '[field_service_feedback_mechanism-tid]';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_service_feedback_mechanism']['separator'] = ',';
  /* Field: Complaints Mechanism */
  $handler->display->display_options['fields']['field_complaints_mechanism']['id'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['table'] = 'field_data_field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['field'] = 'field_complaints_mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['ui_name'] = 'Complaints Mechanism';
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_complaints_mechanism']['alter']['text'] = '[field_complaints_mechanism-tid]';
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
  $handler->display->display_options['path'] = 'service-location-master-id-list';
  $translatables['service_location_master_id_list'] = array(
    t('Master'),
    t('Service Location Master ID List'),
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
    t('Author UID'),
    t('Published Date'),
    t('Status'),
    t('Language'),
    t('Start Date'),
    t('End Date'),
    t('Organization'),
    t('Services Provided'),
    t('[field_services_provided-tid]'),
    t('Availability'),
    t('[field_service_availability-tid]'),
    t('Accessibility'),
    t('[field_service_accessibility-tid]'),
    t('Additional Details'),
    t('Service Location'),
    t('Public Address / Location Details'),
    t('Coverage'),
    t('[field_service_coverage-tid]'),
    t('Legal Documents Required'),
    t('[field_service_registration_type-tid]'),
    t('Nationality'),
    t('[field_service_nationality-tid]'),
    t('Intake Criteria'),
    t('[field_service_intake_criteria-tid]'),
    t('Referral Method'),
    t('[field_service_referral_method-tid]'),
    t('Referral Contact Email'),
    t('Referral Contact Name'),
    t('Referral Contact Phone'),
    t('Immediate Next Step'),
    t('[field_service_referral_next_step-tid]'),
    t('Response Delay'),
    t('[field_response_delay_after_refer-tid]'),
    t('Feedback Mechanism'),
    t('[field_service_feedback_mechanism-tid]'),
    t('Complaints Mechanism'),
    t('[field_complaints_mechanism-tid]'),
    t('Comments'),
    t('More Info Link Title'),
    t('More Info Link URL'),
    t('A page of all the Service Location nodes with various IDs associated with it.'),
  );
  $export['service_location_master_id_list'] = $view;

  return $export;
}
