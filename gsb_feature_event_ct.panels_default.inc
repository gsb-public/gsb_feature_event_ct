<?php
/**
 * @file
 * gsb_feature_event_ct.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gsb_feature_event_ct_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'event_contacts';
  $mini->category = '';
  $mini->admin_title = 'Event Contacts';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'main' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Questions? Contact';
  $display->uuid = '207e5c65-9494-4f4b-af53-08b7eec6f6b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3bd49fc9-a9f7-4f4d-8f3e-16d3d1754de2';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
        'view_mode' => 'people_fpp',
        'links' => 0,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3bd49fc9-a9f7-4f4d-8f3e-16d3d1754de2';
    $display->content['new-3bd49fc9-a9f7-4f4d-8f3e-16d3d1754de2'] = $pane;
    $display->panels['middle'][0] = 'new-3bd49fc9-a9f7-4f4d-8f3e-16d3d1754de2';
    $pane = new stdClass();
    $pane->pid = 'new-bdc6e649-6c1c-4845-b508-2f280e7cdde5';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bdc6e649-6c1c-4845-b508-2f280e7cdde5';
    $display->content['new-bdc6e649-6c1c-4845-b508-2f280e7cdde5'] = $pane;
    $display->panels['middle'][1] = 'new-bdc6e649-6c1c-4845-b508-2f280e7cdde5';
    $pane = new stdClass();
    $pane->pid = 'new-5a1fddc2-0105-4b01-8628-226d9af8e518';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_contact_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'redirection_to' => 'referer',
        'custom_path' => '',
        'link_text' => 'Email',
        'default_message' => '[current-user:name] sent a message using the contact form at [current-page:url].',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5a1fddc2-0105-4b01-8628-226d9af8e518';
    $display->content['new-5a1fddc2-0105-4b01-8628-226d9af8e518'] = $pane;
    $display->panels['middle'][2] = 'new-5a1fddc2-0105-4b01-8628-226d9af8e518';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3bd49fc9-a9f7-4f4d-8f3e-16d3d1754de2';
  $mini->display = $display;
  $export['event_contacts'] = $mini;

  return $export;
}
