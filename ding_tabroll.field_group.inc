<?php
/**
 * @file
 * ding_tabroll.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_tabroll_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_link|node|ding_tabroll|form';
  $field_group->group_name = 'group_internal_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_tabroll';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internal',
    'weight' => '5',
    'children' => array(
      0 => 'field_ding_tabroll_link',
      1 => 'field_anchor',
      2 => 'field_ding_tabroll_anchor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Internal',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Linking to an unpublished node will hide this until the node is published.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_internal_link|node|ding_tabroll|form'] = $field_group;

  return $export;
}
