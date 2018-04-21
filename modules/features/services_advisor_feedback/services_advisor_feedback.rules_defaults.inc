<?php
/**
 * @file
 * services_advisor_feedback.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function services_advisor_feedback_default_rules_configuration() {
  $items = array();
  $items['rules_feedback_notification'] = entity_import('rules_config', '{ "rules_feedback_notification" : {
      "LABEL" : "Feedback Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--feedback" : { "bundle" : "feedback" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "SA Feedback - [node:title]",
            "message" : "[node:url]\\r\\n\\r\\nCreated: [node:created]\\r\\n\\r\\nReport Type: [node:field-feedback-type]\\r\\nReported URL: [node:field-feedback-url]\\r\\nService Location: [node:field-feedback-service-location]\\r\\n\\r\\n[node:field-feedback-summary]"
          }
        }
      ]
    }
  }');
  return $items;
}
