<?php

$flag = flag_get_flag('subscribe_to_partner_nofications');

// Get all users that aren't blocked
$query = db_select('users', 'u')
    ->fields('u')
    ->condition('status', 1)
    ->condition('uid', 0, '>');

$results = $query->execute();

while ($record = $results->fetchAssoc()) {
    // Find groups they have access to.
    $account = user_load($record['uid']);
    $ogQuery = db_select('og_membership', 'ogm')
        ->fields('ogm')
        ->condition('etid', $record['uid'])
        ->condition('entity_type', 'user')
        ->condition('group_type', 'node');

    $ogResults = $ogQuery->execute();

    while($membership = $ogResults->fetchAssoc()) {
        $flag->flag('flag', $membership['gid'], $account);
    }
}
