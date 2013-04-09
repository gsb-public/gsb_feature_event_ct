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

  return $export;
}
