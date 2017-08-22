<?php

namespace Drupal\servicesadvisor_restful\Plugin\formatter;

use Drupal\restful\Plugin\formatter\Formatter;
use Drupal\restful\Plugin\formatter\FormatterJson;
use Drupal\restful\Plugin\formatter\FormatterInterface;
use Drupal\restful\RenderCache\Entity\CacheFragment;

use Drupal\restful\Exception\BadRequestException;
use Drupal\restful\Exception\InternalServerErrorException;
use Drupal\restful\Plugin\resource\Field\ResourceFieldCollectionInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldInterface;
use Drupal\restful\Plugin\resource\Field\ResourceFieldResourceInterface;

/**
 * Class FormatterJSONFixed.
 *
 * @package Drupal\servicesadvisor_restful\Plugin\formatter
 *
 * @Formatter(
 *   id = "json_fixed",
 *   label = "Fixed JSON Formatter",
 *   description = "Fixing JSON Formatter's cache strategy."
 * )
 */
class FormatterJSONFixed extends FormatterJson implements FormatterInterface {

  /**
   * Gets the cached computed value for the fields to be rendered.
   *
   * @param mixed $data
   *   The data to be rendered.
   * @param mixed $output
   *   The rendered data to output.
   * @param string[] $parent_hashes
   *   An array that holds the name of the parent cache hashes that lead to the
   *   current data structure.
   */
  protected function setCachedData($data, $output, array $parent_hashes = array()) {
    if (!$render_cache = $this->createCacheController($data)) {
      return;
    }
    $render_cache->set($output);
  }

}
