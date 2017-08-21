<?php

namespace Drupal\servicesadvisor_restful\Plugin\resource;

trait FieldFormatterTrait {

    public function ___format_geojson($data) {
      if ($data) {
        geophp_load();
        $geom = \geoPHP::load($data, 'wkt');
        return json_decode($geom->out('json'));
      }

      return $data;
    }

}