<?php

/*
 * Create all terms from a source file
 */
function services_advisor_base_load_vocabulary($vocabulary) {
  if (! $vocabulary){
    return false;
  }
  // Read all terms in from term file
  $terms_path = drupal_get_path('module', 'services_advisor_base') . '/terms/' . $vocabulary . '.terms';
  $source_terms = services_advisor_base_load_terms_file($terms_path);

  if ($source_terms) {
    if ($vocab = taxonomy_vocabulary_machine_name_load($vocabulary)) {
      $current_terms = services_advisor_base_get_terms($vocab);
      $new_terms = array_diff_key($source_terms, $current_terms);
      foreach ($new_terms as $term_name => $term_values) {
        if (empty($term_name)) {
          continue;
        }
        // Create new term
        $term = new stdClass();
        $term->vid = $vocab->vid;
        $term->name = $term_name;
        taxonomy_term_save($term);
      }
    }
  }
}

/*
 * Helper function to get all taxonomy tree by vocabulary name, indexed by term name
 */
function services_advisor_base_get_terms($vocab, $full_term = FALSE) {
  $terms = array();
  if ($db_terms = taxonomy_get_tree($vocab->vid, 0, NULL, $full_term)) {
    foreach ($db_terms as $term) {
      $terms[$term->name] = $term;
    }
  }
  return $terms;
}

/*
 * Helper function to load a term file
 */
function services_advisor_base_load_terms_file($terms_file) {
  $source_terms = file_get_contents($terms_file);
  $source_terms = explode("\n", $source_terms);
  $terms = array();
  foreach ($source_terms as $source_term) {
    $term_properties = explode(',', $source_term);
    $terms[$term_properties[0]] = $term_properties;
  }
  return $terms;
}

/*
 * Import the default categories and subcategories
 */
function services_advisor_base_load_categories() {
  $terms_path = drupal_get_path('module', 'services_advisor_base') . '/terms/service_categories.terms';
  $source_terms = services_advisor_base_load_terms_file($terms_path);
  if ($source_terms) {
    print "Importing service_categories\n";
    $created_terms = array();
    $vocab = taxonomy_vocabulary_machine_name_load('service_categories');
    $current_terms = services_advisor_base_get_terms($vocab);
    $new_terms = array_diff_key($source_terms, $current_terms);


    foreach ($new_terms as $term_name => $term_values) {
      if (! $term_name){
        continue;
      }
      $term_parent = $term_values[1];
      $term = new stdClass();
      $term->vid = $vocab->vid;
      $term->name = $term_name;
      if (! $term_parent){
        taxonomy_term_save($term);
        $created_terms[$term->name] = $term;
      } else {
        $term->parent = $created_terms[$term_parent]->tid;
        taxonomy_term_save($term);
        $created_terms[$term->name] = $term;
      }
      print "Created " . $term->name . ' (' . $term->tid . ")\n";
    }
  }
}


/*
 * Import the default categories and subcategories
 */
function services_advisor_base_load_lat_long() {
  $terms_path = drupal_get_path('module', 'services_advisor_base') . '/data/latlong.csv';
  $source_terms = services_advisor_base_load_terms_file($terms_path);
  if ($source_terms) {
    print "Importing lat/long for nested locations\n";
    $vocab = taxonomy_vocabulary_machine_name_load('service_nested_location');
    $current_terms = services_advisor_base_get_terms($vocab);

    foreach ($source_terms as $term_name => $term_values) {
      if ($current_terms[$term_name]){
        $term = $current_terms[$term_name];
        $term->field_location_point['und'][0] = array(
          'lat' => trim($term_values[2]),
          'lon' => trim($term_values[1]),
          'wkt' => 'POINT (' . trim($term_values[2]) . ',' . trim($term_values[2]) . ')',
          'geo_type' => 'point'
        );
        taxonomy_term_save($term);
      }
    }

  }
}

/*
 * Import the default categories and subcategories
 */
function services_advisor_base_load_lat_long_from_xml() {

  $terms_path = drupal_get_path('module', 'services_advisor_base') . '/data/jordan-locations.db.xml';
  $xmlstring = file_get_contents($terms_path);
  $xml = simplexml_load_string($xmlstring);
  $json = json_encode($xml);
  $json_array = json_decode($json,TRUE);
  $locations = array();
  array_map(function($value) use (&$locations) {
        $locations[$value['@attributes']['Name']] = array(
          'lat' => $value['@attributes']['Y'],
          'lon' => $value['@attributes']['X'],
          'wkt' => 'POINT (' . $value['@attributes']['X'] . ',' . $value['@attributes']['Y'] . ')',
          'geo_type' => 'point'
        );}, $json_array['dataset']['location']);

   print "Importing lat/long for locations without geodata.\n";
   $vocab = taxonomy_vocabulary_machine_name_load('service_nested_location');
   $current_terms = services_advisor_base_get_terms($vocab, TRUE);

   $already  = 0;
   $match    = 0;
   $no_match = 0;

   foreach ($current_terms as $term) {
    print $term->tid . ": ";

    if (! isset($term->field_location_point['und'][0]['lat'])){
      if ($locations[$term->name]){
        print "I have geodata for " . $term->name . "\n";
        $term->field_location_point['und'][0] = $locations[$term->name];
        taxonomy_term_save($term);
        $match++;
        print "+++ UPDATE TO " . $term->tid . " +++\n";
      } else {
        print "No match on " . $term->name . "\n";
        $no_match++;
      }
    } else {
      $already++;
      print "I already have geodata for " . $term->name . "\n";
    }
  }

  print "\n\nRESULT: " . $match . ' matching, ' . $no_match . ' not matching, ' . $already . ' unchanged.' . "\n\n";

}

/*
 * Import the default categories and subcategories
 */
function services_advisor_base_load_lat_long_march15() {
  $terms_path = drupal_get_path('module', 'services_advisor_base') . '/data/latlong_march15_update.csv';
  $source_terms = services_advisor_base_load_terms_file($terms_path);
  if ($source_terms) {
    print "Importing lat/long for nested locations from March 15th updated list\n";
    $vocab = taxonomy_vocabulary_machine_name_load('service_nested_location');
    $current_terms = services_advisor_base_get_terms($vocab);

    foreach ($source_terms as $term_name => $term_values) {
      if ($current_terms[$term_name]){
        $term = $current_terms[$term_name];
        $term->field_location_point['und'][0] = array(
          'lat' => trim($term_values[2]),
          'lon' => trim($term_values[1]),
          'wkt' => 'POINT (' . trim($term_values[2]) . ',' . trim($term_values[2]) . ')',
          'geo_type' => 'point'
        );
        taxonomy_term_save($term);
      }
    }

  }
}



