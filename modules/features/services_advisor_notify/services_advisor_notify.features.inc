<?php
/**
 * @file
 * services_advisor_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_advisor_notify_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function services_advisor_notify_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscribe to partner nofications".
  $flags['subscribe_to_partner_nofications'] = array(
    'entity_type' => 'node',
    'title' => 'Subscribe to partner nofications',
    'global' => 0,
    'types' => array(
      0 => 'service_partner',
    ),
    'flag_short' => 'Subscribe to notifications',
    'flag_long' => 'You have been subscribed.',
    'flag_message' => '',
    'unflag_short' => 'Unsubscribe from notifications',
    'unflag_long' => '',
    'unflag_message' => 'You have been unsubscribed.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'print' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'services_advisor_notify',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function services_advisor_notify_default_message_type() {
  $items = array();
  $items['service_expiring'] = entity_import('message_type', '{
    "name" : "service_expiring",
    "description" : "Service Expiring",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\\u003Cp\\u003EThe service \\u003Cstrong\\u003E\\u003Ca href=\\u0022[message:field-service-message-service:url:absolute]\\u0022 title=\\u0022[message:field-service-message-service:title]\\u0022\\u003E[message:field-service-message-service:title]\\u003C\\/a\\u003E\\u003C\\/strong\\u003E is about to expire.\\u003C\\/p\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EThe service \\u003Cstrong\\u003E\\u003Ca href=\\u0022absolute]\\u0022 title=\\u0022title]\\u0022\\u003E[message:field-service-message-service:title]\\u003C\\/a\\u003E\\u003C\\/strong\\u003E is about to expire.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
