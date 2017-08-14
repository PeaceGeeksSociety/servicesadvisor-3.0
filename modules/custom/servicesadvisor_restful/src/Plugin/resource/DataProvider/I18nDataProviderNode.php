<?php

/**
 * @file
 * Contains \Drupal\servicesadvisor_restful\Plugin\resource\DataProvider\I18nDataProviderEntity.
 */

namespace Drupal\servicesadvisor_restful\Plugin\resource\DataProvider;

use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderNode;

/**
 * Class I18nDataProviderNode.
 *
 * Custom DataProvider adds default filter on language property.
 *
 * @package Drupal\servicesadvisor_restful\Plugin\resource\DataProvider
 */
class I18nDataProviderNode extends DataProviderNode {

  protected function parseRequestForListFilter() {
    $filters = parent::parseRequestForListFilter();

    // Adding a default language filter using the global $language value.
    global $language;
    $filters[] = [
      'value' => [$language->language],
      'public_field' => "language",
      'operator' => ["="],
      'conjunction' => "AND",
      'resource_id' => "service_location:1.0"
    ];

    return $filters;
  }

}
