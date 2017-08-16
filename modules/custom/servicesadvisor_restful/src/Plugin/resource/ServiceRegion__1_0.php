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
 *   label = "Service Location",
 *   description = "Services Advisor Service Region entity",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "taxonomy_term",
 *     "bundles": {
 *       "service_nested_location"
 *     },
 *     "range": 500
 *   },
 *   renderCache = {
 *     "render": FALSE
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class ServiceRegion__1_0 extends ResourceNode implements ResourceInterface {

    /**
   * Overrides Resource::publicFields().
   */
  public function publicFields() {
    $public_fields = parent::publicFields();

    unset($public_fields['self']);

    $public_fields['parentId'] = array(
        'property' => 'parent',
        'sub_property' => 'tid'
    );
    $public_fields['depth'] = array(
        'callback' => ___getProperty('depth')
    );
    $public_fields['weight'] = array(
        'property' => 'weight'
    );

    return $public_fields;
  }

}

function ___getProperty($property) {
  return function (DataInterpreterInterface $data) use ($property) {
    return $data->getWrapper()->value()->{$property};
  };
}