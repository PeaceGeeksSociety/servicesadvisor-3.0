<?php

namespace Drupal\servicesadvisor_restful\Plugin\formatter;

use Drupal\restful\Plugin\formatter\Formatter;
use Drupal\restful\Plugin\formatter\FormatterJson;
use Drupal\restful\Plugin\formatter\FormatterInterface;
use Drupal\restful\RenderCache\Entity\CacheFragment;

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
   * Overrides Formatter::setCachedData().
   *
   * Gets the cached computed value for the fields to be rendered. Override
   * of default setCachedData to prevent the parent object from being
   * invalidated which creates a chain reaction to all other nodes in OG
   * groups.
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
    // After setting the cache for the current object, mark all parent hashes
    // with the current cache fragments. That will have the effect of allowing
    // to clear the parent caches based on the children fragments.
    // $fragments = $this->cacheFragments($data);
    // foreach ($parent_hashes as $parent_hash) {
    //   foreach ($fragments as $tag_type => $tag_value) {
    //     // Check if the fragment already exists.
    //     $query = new \EntityFieldQuery();
    //     $duplicate = (bool) $query
    //       ->entityCondition('entity_type', 'cache_fragment')
    //       ->propertyCondition('value', $tag_value)
    //       ->propertyCondition('type', $tag_type)
    //       ->propertyCondition('hash', $parent_hash)
    //       ->count()
    //       ->execute();
    //     if ($duplicate) {
    //       continue;
    //     }
    //     $cache_fragment = new CacheFragment(array(
    //       'value' => $tag_value,
    //       'type' => $tag_type,
    //       'hash' => $parent_hash,
    //     ), 'cache_fragment');
    //     try {
    //       $cache_fragment->save();
    //     }
    //     catch (\Exception $e) {
    //       watchdog_exception('restful', $e);
    //     }
    //   }
    // }

  }

}
