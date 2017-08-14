<?php namespace Drupal\servicesadvisor_restful\Plugin\resource;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceEntity;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

use Drupal\restful\Util\EntityFieldQuery;

/**
 * Class TaxonomyTerm__1_0
 * @package Drupal\servicesadvisor_restful\Plugin\resource
 *
 * @Resource(
 *   name = "taxonomy_term:1.0",
 *   resource = "taxonomy_term",
 *   label = "Taxonomy Term",
 *   description = "Generic taxonomy term resource endpoint",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "taxonomy_term"
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class TaxonomyTerm__1_0 extends ResourceEntity implements ResourceInterface {

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
   * Overrides Resource::publicFields().
   */
  public function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['name'] = [
      'property' => 'name'
    ];

    return $public_fields;
  }

}
