<?php

$query = db_query('SELECT entity_id from field_data_field_service_location_location where entity_id > 1978');

function getAllParentTids($tid, &$rents) {
  $parents = taxonomy_get_parents($tid);
  if (!empty($parents)) {
    $ptid = reset($parents)->tid;
    $rents[] = $ptid;
    return getAllParentTids($ptid, $rents);
  }

  return $rents;
}

foreach ($query as $record) {
  $node = node_load($record->entity_id);
  $parent_tids = [];
  $tids = [];
  $tid = $node->field_service_location_location[LANGUAGE_NONE][0]['tid'];
  getAllParentTids($tid, $parent_tids);
  $tids = array_merge(array_reverse($parent_tids), [$tid]);
  $prepared = array_map(function($tid) { return ['tid' => $tid]; }, $tids);
  $node->field_service_location_location[LANGUAGE_NONE] = $prepared;
  node_save($node);
}
