<?php
/**
 * @file
 * gsb_feature_event_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_event_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cdf7a90e-e306-4024-89ef-917cd60da279';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-580fa70c-8fb6-4129-a0fa-e5e50d69ed1d';
    $pane->panel = 'maintop';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '580fa70c-8fb6-4129-a0fa-e5e50d69ed1d';
    $display->content['new-580fa70c-8fb6-4129-a0fa-e5e50d69ed1d'] = $pane;
    $display->panels['maintop'][0] = 'new-580fa70c-8fb6-4129-a0fa-e5e50d69ed1d';
    $pane = new stdClass();
    $pane->pid = 'new-f35a4c89-8163-434a-ad06-c79b943e7e2c';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:8146d349-5a57-4d25-801d-90beac176072';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'city',
          'settings' => array(
            'city' => 'Palo Alto',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'city',
          'settings' => array(
            'city' => 'Stanford',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f35a4c89-8163-434a-ad06-c79b943e7e2c';
    $display->content['new-f35a4c89-8163-434a-ad06-c79b943e7e2c'] = $pane;
    $display->panels['sidebar'][0] = 'new-f35a4c89-8163-434a-ad06-c79b943e7e2c';
    $pane = new stdClass();
    $pane->pid = 'new-4828f636-07f3-4291-9555-adf0209891f4';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'event_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
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
    $pane->uuid = '4828f636-07f3-4291-9555-adf0209891f4';
    $display->content['new-4828f636-07f3-4291-9555-adf0209891f4'] = $pane;
    $display->panels['sidebar'][1] = 'new-4828f636-07f3-4291-9555-adf0209891f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  return $export;
}
