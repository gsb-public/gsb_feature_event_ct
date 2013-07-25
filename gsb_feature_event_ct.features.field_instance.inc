<?php
/**
 * @file
 * gsb_feature_event_ct.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_event_ct_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_person_fac_other-field_first_name'
  $field_instances['field_collection_item-field_person_fac_other-field_first_name'] = array(
    'bundle' => 'field_person_fac_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_other-field_last_name'
  $field_instances['field_collection_item-field_person_fac_other-field_last_name'] = array(
    'bundle' => 'field_person_fac_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_other-field_person_fac_or_other'
  $field_instances['field_collection_item-field_person_fac_other-field_person_fac_or_other'] = array(
    'bundle' => 'field_person_fac_other',
    'default_value' => array(
      0 => array(
        'value' => 'Other',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_fac_or_other',
    'label' => 'Speaker Reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_other-field_person_fac_single_ref'
  $field_instances['field_collection_item-field_person_fac_other-field_person_fac_single_ref'] = array(
    'bundle' => 'field_person_fac_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_fac_single_ref',
    'label' => 'Speaker',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'maxlength_js_label' => '',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_other-field_first_name'
  $field_instances['field_collection_item-field_person_other-field_first_name'] = array(
    'bundle' => 'field_person_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_other-field_last_name'
  $field_instances['field_collection_item-field_person_other-field_last_name'] = array(
    'bundle' => 'field_person_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_other-field_person_or_other'
  $field_instances['field_collection_item-field_person_other-field_person_or_other'] = array(
    'bundle' => 'field_person_other',
    'default_value' => array(
      0 => array(
        'value' => 'Other',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_or_other',
    'label' => 'Speaker Reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_other-field_person_ref'
  $field_instances['field_collection_item-field_person_other-field_person_ref'] = array(
    'bundle' => 'field_person_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_ref',
    'label' => 'Speaker',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_address'
  $field_instances['node-event-field_address'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|event|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_address_no_country',
        'weight' => 4,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_address_city_state',
        'weight' => 3,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_address_city_state',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_address_city_state',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_address_city_state',
        'weight' => 3,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_addthis'
  $field_instances['node-event-field_addthis'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_addthis',
    'label' => 'AddThis',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'addthis_button_widget',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_body'
  $field_instances['node-event-field_body'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_business_insight_topic'
  $field_instances['node-event-field_business_insight_topic'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 15,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 12,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 10,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 13,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_business_insight_topic',
    'label' => 'Business Insight Topic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_company_organization'
  $field_instances['node-event-field_company_organization'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 17,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 10,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 8,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 11,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_company_organization',
    'label' => 'Company Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 30,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_department'
  $field_instances['node-event-field_department'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 20,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 14,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 12,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 16,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_discipline'
  $field_instances['node-event-field_discipline'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'event/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 12,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 13,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 9,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 14,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_discipline',
    'label' => 'Discipline',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 26,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_editorial_summary'
  $field_instances['node-event-field_editorial_summary'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editorial_summary',
    'label' => 'Editorial Summary',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 150,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_event_category'
  $field_instances['node-event-field_event_category'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 14,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 17,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 15,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 19,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_category',
    'label' => 'Event Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_event_date'
  $field_instances['node-event-field_event_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'time_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'medium_time',
          'fromto' => 'both',
          'multiple_from' => 'now',
          'multiple_number' => 1,
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_feature_event_ct',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_feature_event_ct_date_formatter',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'medium_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Event Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 1,
        'increment' => 15,
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_event_series'
  $field_instances['node-event-field_event_series'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 13,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 15,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 13,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 17,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_series',
    'label' => 'Event Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 24,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_image_single_public'
  $field_instances['node-event-field_image_single_public'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Recommended size for uploaded images is 600x440.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 6,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'image_link' => 'content',
          'image_style' => '270x158',
        ),
        'type' => 'gsb_field_formatter_image',
        'weight' => 0,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '270x158',
        ),
        'type' => 'gsb_field_formatter_image',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '270x158',
        ),
        'type' => 'gsb_field_formatter_image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'image_link' => 'content',
          'image_style' => '270x158',
        ),
        'type' => 'gsb_field_formatter_image',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image_single_public',
    'label' => 'Event Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'gsb_media_browser--files_and_docs' => 0,
          'gsb_media_browser--images' => 0,
          'gsb_media_browser--videos' => 0,
          'gsb_media_center_document' => 0,
          'gsb_media_center_image' => 'gsb_media_center_image',
          'gsb_media_center_video' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_industry'
  $field_instances['node-event-field_industry'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 16,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 8,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 5,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 9,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_industry',
    'label' => 'Industry',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 27,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_link_map'
  $field_instances['node-event-field_link_map'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_label',
        'weight' => 5,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_link_map',
    'label' => 'View Map',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_pathauto_title_alias'
  $field_instances['node-event-field_pathauto_title_alias'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'use_autogenerate' => 1,
        'alias' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'event_upcoming' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pathauto_title_alias',
    'label' => 'URL Alias',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'pathauto_title_alias',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'pathauto_title_alias_form',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_person_fac_other'
  $field_instances['node-event-field_person_fac_other'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => '; ',
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 3,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_person_fac_other',
    'label' => 'Speakers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'field_collection_embed',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_region'
  $field_instances['node-event-field_region'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 19,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 9,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 7,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 10,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_region',
    'label' => 'Region',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 29,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_register_url'
  $field_instances['node-event-field_register_url'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_register_url',
    'label' => 'Register URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Register',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_search_field'
  $field_instances['node-event-field_search_field'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'event_listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_search_field',
    'label' => 'Search field',
    'required' => 0,
    'settings' => array(
      'selected_fields' => array(
        'concat_field_entity_label' => 'concat_field_entity_label',
        'field_address' => 'field_address',
        'field_addthis' => 0,
        'field_body' => 'field_body',
        'field_business_insight_topic' => 'field_business_insight_topic',
        'field_company_organization' => 'field_company_organization',
        'field_department' => 'field_department',
        'field_discipline' => 'field_discipline',
        'field_editorial_summary' => 'field_editorial_summary',
        'field_event_category' => 'field_event_category',
        'field_event_date' => 0,
        'field_event_series' => 'field_event_series',
        'field_image_single_public' => 0,
        'field_industry' => 'field_industry',
        'field_link_map' => 0,
        'field_person_fac_other' => 'field_person_fac_other',
        'field_region' => 'field_region',
        'field_register_url' => 0,
        'field_tag' => 'field_tag',
        'field_target_audience' => 'field_target_audience',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'concat_field',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'concat_field_default',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_tag'
  $field_instances['node-event-field_tag'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 18,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 11,
      ),
      'event_upcoming' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 9,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 12,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tag',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-event-field_target_audience'
  $field_instances['node-event-field_target_audience'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'event_listing' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 16,
      ),
      'event_upcoming' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 14,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'megamenu' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'path_prefix' => 'events/list',
          'separator' => ', ',
          'tid_or_name' => 'name',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 18,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_target_audience',
    'label' => 'Target Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_hs',
      'weight' => 28,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AddThis');
  t('Address');
  t('Body');
  t('Business Insight Topic');
  t('Company Organization');
  t('Department');
  t('Discipline');
  t('Editorial Summary');
  t('Event Category');
  t('Event Date');
  t('Event Image');
  t('Event Series');
  t('First Name');
  t('Industry');
  t('Last Name');
  t('Recommended size for uploaded images is 600x440.');
  t('Region');
  t('Register URL');
  t('Search field');
  t('Speaker');
  t('Speaker Reference');
  t('Speakers');
  t('Tag');
  t('Target Audience');
  t('URL Alias');
  t('View Map');

  return $field_instances;
}
