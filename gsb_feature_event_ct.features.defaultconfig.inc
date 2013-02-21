<?php
/**
 * @file
 * gsb_feature_event_ct.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_event_ct_defaultconfig_features() {
  return array(
    'gsb_feature_event_ct' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_event_ct_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_gsb_event_pattern';
  $strongarm->value = 'events/[node:title]';
  $export['pathauto_node_gsb_event_pattern'] = $strongarm;

  return $export;
}
