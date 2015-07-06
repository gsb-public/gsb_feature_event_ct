<?php

/**
* @file.
*/

$plugin = array(
  'title' => t('Skip validation if location type is: Online'),
  'format callback' => 'gsb_feature_event_format_address_field',
  'type' => 'address',
  'weight' => -80,
);

function gsb_feature_event_format_address_field(&$format, $address, $context = array()) {
  $format['street_block']['thoroughfare']['#element_validate'] = array('gsb_feature_event_format_address_validation');
  $format['locality_block']['locality']['#element_validate'] = array('gsb_feature_event_format_address_validation');
  $format['country']['#element_validate'] = array('gsb_feature_event_format_address_validation');
}


function gsb_feature_event_format_address_validation($element, &$form_state, &$form) {
  foreach($form_state['values']['field_event_location']['und'] as $key => $location_item) {
    if (is_numeric($key) && $key >= 0) {
      $location_type = $location_item['field_event_location_type']['und'];
      if ($location_type == NULL || $location_type == "Online") {
        $index = 0;
        foreach ($form['field_event_location']['und'][$key]['#field_collection_required_elements'] as $required_element) {
          if ($required_element['#array_parents'][3] == 'field_address') {
            unset($form['field_event_location']['und'][$key]['#field_collection_required_elements'][$index]);
          }
          $index++;
        }
      }
    }
  }
}