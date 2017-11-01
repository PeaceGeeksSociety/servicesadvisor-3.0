<?php namespace Drupal\servicesadvisor_restful\Plugin\resource;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceNode;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\DataInterpreter\DataInterpreterInterface;

use Drupal\restful\Util\EntityFieldQuery;

/**
 * Class ServicePartner__1_1
 * @package Drupal\servicesadvisor_restful\Plugin\resource
 *
 * @Resource(
 *   name = "service_partner:1.1",
 *   resource = "service_partner",
 *   label = "Service Partner",
 *   description = "Services Advisor Service Partner entity",
 *   authenticationTypes = {"basic_auth", "cookie"},
 *   authenticationOptional = FALSE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "service_partner"
 *     },
 *     "range": 250
 *   },
 *   formatter = "json_fixed",
 *   renderCache = {
 *     "render": TRUE
 *   },
 *   majorVersion = 1,
 *   minorVersion = 1
 * )
 */
class ServicePartner__1_1 extends ResourceNode implements ResourceInterface {

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
    $url = '';
    $logo_field = $data->getWrapper()->field_logo->value();
    if ($logo_field) {
      $url = image_style_url($style, $logo_field['uri']);
    }

    return $url;
  }

}
