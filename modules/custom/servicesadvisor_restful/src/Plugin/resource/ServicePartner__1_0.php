<?php namespace Drupal\servicesadvisor_restful\Plugin\resource;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceNode;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

use Drupal\restful\Util\EntityFieldQuery;

/**
 * Class ServicePartner__1_0
 * @package Drupal\servicesadvisor_restful\Plugin\resource
 *
 * @Resource(
 *   name = "service_partner:1.0",
 *   resource = "service_partner",
 *   label = "Service Partner",
 *   description = "Services Advisor Service Partner entity",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "service_partner"
 *     }
 *   },
 *   renderCache = {
 *     "render": TRUE
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class ServicePartner__1_0 extends ResourceNode implements ResourceInterface {

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

    // Disabling unneeded default fields.
    $public_fields['self']['methods'] = [];
    $public_fields['label']['methods'] = [];

    $public_fields['title'] = [
      'property' => 'title'
    ];

    $public_fields['logoURL'] = [
      'callback' => [$this, 'getLogoURL']
    ];

    return $public_fields;
  }

  public function getLogoURL(DataInterpreterInterface $data) {
    $style = 'small_logo';
    $logo_field = $data->getWrapper()->field_logo->value();
    $url = image_style_url($style, $logo_field['uri']);
    return $url;
  }

}
