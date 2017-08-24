<?php

namespace Drupal\servicesadvisor_restful\Plugin\resource;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceNode;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

use Drupal\restful\Util\EntityFieldQuery;

/**
 * Class ServiceRegion__1_0
 * @package Drupal\servicesadvisor_restful\Plugin\resource
 *
 * @Resource(
 *   name = "service_region:1.0",
 *   resource = "service_region",
 *   label = "Service Region",
 *   description = "Services Advisor Service Region entity",
 *   authenticationTypes = {"basic_auth", "cookie"},
 *   authenticationOptional = FALSE,
 *   dataProvider = {
 *     "entityType": "taxonomy_term",
 *     "bundles": {
 *       "service_nested_location"
 *     },
 *     "range": 500,
 *     "sort": {
 *       "depth": "ASC",
 *       "weight": "ASC",
 *       "name": "ASC"
 *     }
 *   },
 *   formatter = "json_fixed",
 *   renderCache = {
 *     "render": FALSE
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class ServiceRegion__1_0 extends TaxonomyTerm__1_0 {

  use FieldFormatterTrait;

  /**
   * Overrides Resource::publicFields().
   */
  public function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['location'] = [
      'property' => 'field_location_point',
      'sub_property' => 'geom',
      'process_callbacks' => [array($this, '___format_geojson')],
    ];

    return $public_fields;
  }

}
