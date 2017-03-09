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
          "value" : "\\u003Cp\\u003EThe service \\u003Cstrong\\u003E[message:field-service-message-service:title]\\u003C\\/strong\\u003E is about to expire.\\u003C\\/p\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EThe service \\u003Cstrong\\u003E[message:field-service-message-service:title]\\u003C\\/strong\\u003E is about to expire.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
