<?php

/**
 * @file
 * Contains \Drupal\servicesadvisor_restful\Plugin\resource\DataProvider\I18nDataProviderEntity.
 */

namespace Drupal\servicesadvisor_restful\Plugin\resource\DataProvider;

use Drupal\restful\Exception\ServerConfigurationException;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderEntity;

/**
 * Class I18nDataProviderEntity.
 *
 * Custom DataProvider adds default filter on language property.
 *
 * @package Drupal\servicesadvisor_restful\Plugin\resource\DataProvider
 */
class I18nDataProviderEntity extends DataProviderEntity {

  protected function parseRequestForListFilter() {
    $filters = parent::parseRequestForListFilter();

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
