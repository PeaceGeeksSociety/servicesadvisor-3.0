<?php namespace Drupal\servicesadvisor_restful\Plugin\resource;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceNode;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

use Drupal\restful\Util\EntityFieldQuery;

define('SA_API_DATEFORMAT', 'Y-m-d');

/**
 * Class ServiceLocation__1_0
 * @package Drupal\servicesadvisor_restful\Plugin\resource
 *
 * @Resource(
 *   name = "service_location:1.0",
 *   resource = "service_location",
 *   label = "Service Location",
 *   description = "Services Advisor Service Location entity",
 *   authenticationTypes = {"basic_auth", "cookie"},
 *   authenticationOptional = FALSE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "service_location"
 *     },
 *     "range": 250
 *   },
 *   formatter = "json_fixed",
 *   renderCache = {
 *     "render": TRUE
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class ServiceLocation__1_0 extends ResourceNode implements ResourceInterface {

  use FieldFormatterTrait;

  public function discover($path = NULL) {
    return NULL;
  }

  /**
   * Overrides Resource::initAuthenticationManager().
   */
  protected function initAuthenticationManager() {
    $result = parent::initAuthenticationManager();

    if ($this->request->getMethod() == RequestInterface::METHOD_OPTIONS) {
      $this->authenticationManager->setIsOptional(TRUE);
    }

    return $result;
  }

  /**
   * Overrides Resource::dataProviderClassName().
   */
  protected function dataProviderClassName() {
    return '\Drupal\servicesadvisor_restful\Plugin\resource\DataProvider\I18nDataProviderNode';
  }

  /**
   * Overrides Resource::publicFields().
   */
  public function publicFields() {
    $public_fields = parent::publicFields();

    // Disabling unneeded default fields.
    $public_fields['self']['methods'] = [];
    $public_fields['label']['methods'] = [];

    $public_fields['tnid'] = [
      'callback' => ___getNodeProperty('tnid')
    ];

    $public_fields['originalId'] = [
      'property' => 'nid'
    ];

    $public_fields['region'] = [
      'property' => 'field_service_location_location'
    ];

    $public_fields['startDate'] = [
      'property' => 'field_service_start_date',
      'process_callbacks' => [___formatTimestamp(SA_API_DATEFORMAT)]
    ];

    $public_fields['endDate'] = [
      'property' => 'field_service_end_date',
      'process_callbacks' => [___formatTimestamp(SA_API_DATEFORMAT)]
    ];

    $public_fields['serviceName'] = [
      'property' => 'title'
    ];

    $public_fields['nationality'] = [
      'callback' => ___flattenMultiField('field_service_nationality', 'label', '')
    ];

    $public_fields['intakeCriteria'] = [
      'callback' => ___flattenMultiField('field_service_intake_criteria', 'label', '')
    ];

    $public_fields['language'] = [
      'property' => 'language'
    ];

    $public_fields['organization'] = array(
      'property' => 'og_group_ref',
    );

    $public_fields['accessibility'] = [
      'callback' => ___flattenMultiField('field_service_accessibility', 'label', '')
    ];

    $public_fields['coverage'] = [
      'callback' => ___flattenMultiField('field_service_coverage', 'label', '')
    ];

    $public_fields['availability'] = [
      'callback' => ___flattenMultiField('field_service_availability', 'label', '')
    ];

    $public_fields['referralMethod'] = [
      'callback' => ___flattenMultiField('field_service_referral_method', 'label', '')
    ];

    $public_fields['referralNextSteps'] = [
      'callback' => ___flattenMultiField('field_service_referral_next_step', 'label', '')
    ];

    $public_fields['feedbackMechanism'] = [
      'callback' => ___flattenMultiField('field_service_feedback_mechanism', 'label', '')
    ];

    $public_fields['feedbackDelay'] = [
      'callback' => function (DataInterpreterInterface $data) {
        $label = $data->getWrapper()->field_service_feedback_delay->label();
        return $label ?: '';
      }
    ];

    $public_fields['complaintsMechanism'] = [
      'callback' => ___flattenMultiField('field_complaints_mechanism', 'label', '')
    ];

    $public_fields['Legal Documents Required'] = [
      'callback' => ___flattenMultiField('field_service_registration_type', 'label', '')
    ];

    $public_fields['location'] = [
      'callback' => ___getGeofieldAsGeoJSON(function (DataInterpreterInterface $data) {
        $wrapper = $data->getWrapper();
        if ($wrapper->field_service_location_location->value()) {
          return $wrapper->field_service_location_location->field_location_point;
        }
      })
    ];

    $public_fields['locationAlternate'] = [
      'property' => 'field_service_location',
      'sub_property' => 'geom',
      'process_callbacks' => [array($this, '___format_geojson')]
    ];

    $public_fields['servicesProvided'] = [
      'property' => 'field_services_provided'
    ];

    $public_fields['officeHours'] = [
      'property' => 'field_service_office_hours',
      'process_callbacks' => [function ($value) {
        return array_map(
          function ($value) {
            $daynames = date_week_days(TRUE);
            return [
              'day' => $daynames[intval($value['day'])],
              'start' => _office_hours_time_to_24hr($value['starthours']),
              'end' => _office_hours_time_to_24hr($value['endhours'])
            ];
          },
          $value
        );
      }]
    ];

    $public_fields['hotlinePhone'] = [
      'property' => 'field_service_public_phone'
    ];

    $public_fields['infoLink'] = [
      'property' => 'field_service_more_info_link'
    ];

    $public_fields['publicAddress'] = [
      'property' => 'field_location_address'
    ];

    $public_fields['additionalDetails'] = [
      'property' => 'field_service_location_details'
    ];

    $public_fields['comments'] = [
      'property' => 'field_service_comments'
    ];

    return $public_fields;
  }

}

function ___formatTimestamp($format) {
  return function($timestamp) use ($format) {
    return date($format, $timestamp);
  };
}

function ___getNodeProperty($property) {
  return function (DataInterpreterInterface $data) use ($property) {
    return $data->getWrapper()->value()->{$property};
  };
}

function ___flattenMultiField($multiField, $wrapperMethod, $default) {
  return function (DataInterpreterInterface $data) use ($multiField, $wrapperMethod, $default) {
    $collection = $data->getWrapper()->{$multiField};
    return implode(', ', ___map($collection, ___callMethod($wrapperMethod, $default)));
  };
}

function ___getGeofieldAsGeoJSON($getGeofield, $default = '') {
  return function (DataInterpreterInterface $data) use ($getGeofield, $default) {
    $geofield = $getGeofield($data);
    if (!$geofield) { return ""; }

    $value = $geofield->value();

    if (!$value || !$wkt = $geofield->geom->value()) {
      return $default;
    }

    geophp_load();
    $geom = \geoPHP::load($wkt, 'wkt');
    return json_decode($geom->out('json'));
  };
}

function ___callMethod($method, $default = NULL) {
  return function ($obj) use ($method, $default) {
    return $obj->{$method}() ?: $default;
  };
}

function ___map(\Traversable $iterator, callable $fn) {
    $result = [];
    foreach ($iterator as $item) {
        $result[] = $fn($item);
    }
    return $result;
}
