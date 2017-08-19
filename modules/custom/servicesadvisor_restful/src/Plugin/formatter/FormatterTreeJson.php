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
 * Class FormatterTreeJson.
 *
 * @package Drupal\servicesadvisor_restful\Plugin\formatter
 *
 * @Formatter(
 *   id = "json_tree",
 *   label = "Simple Tree JSON",
 *   description = "Identical to Simple JSON with a different cache strategy."
 * )
 */
class FormatterTreeJson extends FormatterJson implements FormatterInterface {

  /**
   * Extracts the actual values from the resource fields.
   *
   * @param array[]|ResourceFieldCollectionInterface $data
   *   The array of rows or a ResourceFieldCollection.
   * @param string[] $parents
   *   An array that holds the name of the parent fields that lead to the
   *   current data structure.
   * @param string[] $parent_hashes
   *   An array that holds the name of the parent cache hashes that lead to the
   *   current data structure.
   *
   * @return array[]
   *   The array of prepared data.
   *
   * @throws InternalServerErrorException
   */
  protected function extractFieldValues($data, array $parents = array(), array &$parent_hashes = array()) {
    $output = array();
    $child_hashes = [];
    if ($this->isCacheEnabled($data)) {
      $this_hash = $this->getCacheHash($data);
      if ($cache = $this->getCachedData($data)) {
        return $cache->data;
      }
    }
    foreach ($data as $public_field_name => $resource_field) {
      if (!$resource_field instanceof ResourceFieldInterface) {
        // If $resource_field is not a ResourceFieldInterface it means that we
        // are dealing with a nested structure of some sort. If it is an array
        // we process it as a set of rows, if not then use the value directly.
        $parents[] = $public_field_name;
        $output[$public_field_name] = static::isIterable($resource_field) ? $this->extractFieldValues($resource_field, $parents, $child_hashes) : $resource_field;
        continue;
      }
      if (!$data instanceof ResourceFieldCollectionInterface) {
        throw new InternalServerErrorException('Inconsistent output.');
      }

      // This feels a bit awkward, but if the result is going to be cached, it
      // pays off the extra effort of generating the whole resource entity. That
      // way we can get a different field set with the previously cached entity.
      // If the entity is not going to be cached, then avoid generating the
      // field data altogether.
      $limit_fields = $data->getLimitFields();
      if (
        !$this->isCacheEnabled($data) &&
        $limit_fields &&
        !in_array($resource_field->getPublicName(), $limit_fields)
      ) {
        // We are not going to cache this and this field is not in the output.
        continue;
      }
      $value = $resource_field->render($data->getInterpreter());
      // If the field points to a resource that can be included, include it
      // right away.
      if (
        static::isIterable($value) &&
        $resource_field instanceof ResourceFieldResourceInterface
      ) {
        $value = $this->extractFieldValues($value, $parents, $child_hashes);
      }
      $output[$public_field_name] = $value;
    }

    if ($this_hash) {
      $child_hashes = array_merge($child_hashes, [$this_hash]);
    }

    $parent_hashes = $child_hashes;
    if ($this->isCacheEnabled($data)) {
      $this->setCachedData($data, $output, $parent_hashes);
    }
    return $output;
  }

}
