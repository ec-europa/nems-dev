<?php
/**
 * @file
 * nems_see_also.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_see_also_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_see_also|node|see_also|form';
  $field_group->group_name = 'group_see_also';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'see_also';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'See also',
    'weight' => '4',
    'children' => array(
      0 => 'field_see_also_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-see-also field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_see_also|node|see_also|form'] = $field_group;

  return $export;
}