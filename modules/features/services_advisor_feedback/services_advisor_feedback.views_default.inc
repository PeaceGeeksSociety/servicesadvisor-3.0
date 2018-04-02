<?php
/**
 * @file
 * services_advisor_feedback.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_advisor_feedback_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'feedback';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feedback';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feedback';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'export feedback lists';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Service Location */
  $handler->display->display_options['fields']['field_feedback_service_location']['id'] = 'field_feedback_service_location';
  $handler->display->display_options['fields']['field_feedback_service_location']['table'] = 'field_data_field_feedback_service_location';
  $handler->display->display_options['fields']['field_feedback_service_location']['field'] = 'field_feedback_service_location';
  $handler->display->display_options['fields']['field_feedback_service_location']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_feedback_type']['id'] = 'field_feedback_type';
  $handler->display->display_options['fields']['field_feedback_type']['table'] = 'field_data_field_feedback_type';
  $handler->display->display_options['fields']['field_feedback_type']['field'] = 'field_feedback_type';
  /* Field: Content: Reported URL */
  $handler->display->display_options['fields']['field_feedback_url']['id'] = 'field_feedback_url';
  $handler->display->display_options['fields']['field_feedback_url']['table'] = 'field_data_field_feedback_url';
  $handler->display->display_options['fields']['field_feedback_url']['field'] = 'field_feedback_url';
  $handler->display->display_options['fields']['field_feedback_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_feedback_url']['type'] = 'link_url';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_feedback_summary']['id'] = 'field_feedback_summary';
  $handler->display->display_options['fields']['field_feedback_summary']['table'] = 'field_data_field_feedback_summary';
  $handler->display->display_options['fields']['field_feedback_summary']['field'] = 'field_feedback_summary';
  $handler->display->display_options['fields']['field_feedback_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_feedback_summary']['settings'] = array(
    'trim_length' => '140',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'feedback' => 'feedback',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-feedback';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to CSV';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'service-feedback-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'service-feedback/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['feedback'] = $view;

  return $export;
}
