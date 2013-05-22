<?php
/**
 * @file
 * open_bed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_bed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'open_beds_admin_view';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'open_beds_admin_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Open Beds';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, this criteria did not return any results. Please try broadening your search. ';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Screened */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_contact_screened';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_contact_screened';
  $handler->display->display_options['fields']['entity_id_8']['label'] = 'SCRN';
  /* Field: Content: Validated */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_validation';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_validation';
  /* Field: Content: Assisted Status */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_assisted';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_assisted';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Assisted';
  /* Field: Content: Situation Status */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_availability';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Availability';
  /* Field: Content: Max Number of People / Spaces */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_no_beds';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_no_beds';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Max Spaces';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Length of stay */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_length_of_stay';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_length_of_stay';
  /* Field: Content: Number of Double Beds */
  $handler->display->display_options['fields']['entity_id_12']['id'] = 'entity_id_12';
  $handler->display->display_options['fields']['entity_id_12']['table'] = 'field_data_field_no_doubles';
  $handler->display->display_options['fields']['entity_id_12']['field'] = 'field_no_doubles';
  $handler->display->display_options['fields']['entity_id_12']['label'] = 'Dbls';
  $handler->display->display_options['fields']['entity_id_12']['empty'] = '-';
  $handler->display->display_options['fields']['entity_id_12']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['entity_id_12']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of Single Beds */
  $handler->display->display_options['fields']['entity_id_14']['id'] = 'entity_id_14';
  $handler->display->display_options['fields']['entity_id_14']['table'] = 'field_data_field_no_singles';
  $handler->display->display_options['fields']['entity_id_14']['field'] = 'field_no_singles';
  $handler->display->display_options['fields']['entity_id_14']['label'] = 'Sngl';
  $handler->display->display_options['fields']['entity_id_14']['empty'] = '-';
  $handler->display->display_options['fields']['entity_id_14']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['entity_id_14']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of Couches / Futons / Sleeping Bags / Etc */
  $handler->display->display_options['fields']['entity_id_13']['id'] = 'entity_id_13';
  $handler->display->display_options['fields']['entity_id_13']['table'] = 'field_data_field_no_futons';
  $handler->display->display_options['fields']['entity_id_13']['field'] = 'field_no_futons';
  $handler->display->display_options['fields']['entity_id_13']['label'] = 'Futn';
  $handler->display->display_options['fields']['entity_id_13']['empty'] = '-';
  $handler->display->display_options['fields']['entity_id_13']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['entity_id_13']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Animals Allowed */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_pets';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_pets';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Pets';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Suburb';
  /* Field: Content: Children */
  $handler->display->display_options['fields']['entity_id_10']['id'] = 'entity_id_10';
  $handler->display->display_options['fields']['entity_id_10']['table'] = 'field_data_field_children';
  $handler->display->display_options['fields']['entity_id_10']['field'] = 'field_children';
  /* Field: Content: Elderly */
  $handler->display->display_options['fields']['entity_id_11']['id'] = 'entity_id_11';
  $handler->display->display_options['fields']['entity_id_11']['table'] = 'field_data_field_elderly';
  $handler->display->display_options['fields']['entity_id_11']['field'] = 'field_elderly';
  /* Field: Content: State */
  $handler->display->display_options['fields']['entity_id_15']['id'] = 'entity_id_15';
  $handler->display->display_options['fields']['entity_id_15']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['entity_id_15']['field'] = 'field_state';
  /* Field: Content: Post Code */
  $handler->display->display_options['fields']['entity_id_16']['id'] = 'entity_id_16';
  $handler->display->display_options['fields']['entity_id_16']['table'] = 'field_data_field_zip';
  $handler->display->display_options['fields']['entity_id_16']['field'] = 'field_zip';
  $handler->display->display_options['fields']['entity_id_16']['label'] = 'Zip';
  $handler->display->display_options['fields']['entity_id_16']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Max Number of People / Spaces (field_no_beds) */
  $handler->display->display_options['sorts']['field_no_beds_value']['id'] = 'field_no_beds_value';
  $handler->display->display_options['sorts']['field_no_beds_value']['table'] = 'field_data_field_no_beds';
  $handler->display->display_options['sorts']['field_no_beds_value']['field'] = 'field_no_beds_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_bed' => 'open_bed',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Situation Status (field_availability) */
  $handler->display->display_options['filters']['field_availability_value']['id'] = 'field_availability_value';
  $handler->display->display_options['filters']['field_availability_value']['table'] = 'field_data_field_availability';
  $handler->display->display_options['filters']['field_availability_value']['field'] = 'field_availability_value';
  $handler->display->display_options['filters']['field_availability_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_availability_value']['group'] = 1;
  $handler->display->display_options['filters']['field_availability_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_availability_value']['expose']['operator_id'] = 'field_availability_value_op';
  $handler->display->display_options['filters']['field_availability_value']['expose']['label'] = 'Availability';
  $handler->display->display_options['filters']['field_availability_value']['expose']['operator'] = 'field_availability_value_op';
  $handler->display->display_options['filters']['field_availability_value']['expose']['identifier'] = 'av';
  /* Filter criterion: Content: Max Number of People / Spaces (field_no_beds) */
  $handler->display->display_options['filters']['field_no_beds_value']['id'] = 'field_no_beds_value';
  $handler->display->display_options['filters']['field_no_beds_value']['table'] = 'field_data_field_no_beds';
  $handler->display->display_options['filters']['field_no_beds_value']['field'] = 'field_no_beds_value';
  $handler->display->display_options['filters']['field_no_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_no_beds_value']['group'] = 1;
  $handler->display->display_options['filters']['field_no_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['operator_id'] = 'field_no_beds_value_op';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['label'] = 'Spaces';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['operator'] = 'field_no_beds_value_op';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['identifier'] = 'b';
  /* Filter criterion: Content: State (field_state) */
  $handler->display->display_options['filters']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value']['expose']['operator_id'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_state_value']['expose']['operator'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['identifier'] = 'field_state_value';
  /* Filter criterion: Content: Post Code (field_zip) */
  $handler->display->display_options['filters']['field_zip_value']['id'] = 'field_zip_value';
  $handler->display->display_options['filters']['field_zip_value']['table'] = 'field_data_field_zip';
  $handler->display->display_options['filters']['field_zip_value']['field'] = 'field_zip_value';
  $handler->display->display_options['filters']['field_zip_value']['group'] = 1;
  $handler->display->display_options['filters']['field_zip_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_zip_value']['expose']['operator_id'] = 'field_zip_value_op';
  $handler->display->display_options['filters']['field_zip_value']['expose']['label'] = 'Zip/Post Code';
  $handler->display->display_options['filters']['field_zip_value']['expose']['operator'] = 'field_zip_value_op';
  $handler->display->display_options['filters']['field_zip_value']['expose']['identifier'] = 'field_zip_value';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 's';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'suburb';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Length of stay (field_length_of_stay) */
  $handler->display->display_options['filters']['field_length_of_stay_value']['id'] = 'field_length_of_stay_value';
  $handler->display->display_options['filters']['field_length_of_stay_value']['table'] = 'field_data_field_length_of_stay';
  $handler->display->display_options['filters']['field_length_of_stay_value']['field'] = 'field_length_of_stay_value';
  $handler->display->display_options['filters']['field_length_of_stay_value']['group'] = 1;
  $handler->display->display_options['filters']['field_length_of_stay_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_length_of_stay_value']['expose']['operator_id'] = 'field_length_of_stay_value_op';
  $handler->display->display_options['filters']['field_length_of_stay_value']['expose']['label'] = 'Length of stay';
  $handler->display->display_options['filters']['field_length_of_stay_value']['expose']['operator'] = 'field_length_of_stay_value_op';
  $handler->display->display_options['filters']['field_length_of_stay_value']['expose']['identifier'] = 'stay';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  /* Filter criterion: Content: Screened (field_contact_screened) */
  $handler->display->display_options['filters']['field_contact_screened_value']['id'] = 'field_contact_screened_value';
  $handler->display->display_options['filters']['field_contact_screened_value']['table'] = 'field_data_field_contact_screened';
  $handler->display->display_options['filters']['field_contact_screened_value']['field'] = 'field_contact_screened_value';
  $handler->display->display_options['filters']['field_contact_screened_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_screened_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_screened_value']['expose']['operator_id'] = 'field_contact_screened_value_op';
  $handler->display->display_options['filters']['field_contact_screened_value']['expose']['label'] = 'Screened';
  $handler->display->display_options['filters']['field_contact_screened_value']['expose']['operator'] = 'field_contact_screened_value_op';
  $handler->display->display_options['filters']['field_contact_screened_value']['expose']['identifier'] = 'field_contact_screened_value';
  /* Filter criterion: Content: Validated (field_validation) */
  $handler->display->display_options['filters']['field_validation_value']['id'] = 'field_validation_value';
  $handler->display->display_options['filters']['field_validation_value']['table'] = 'field_data_field_validation';
  $handler->display->display_options['filters']['field_validation_value']['field'] = 'field_validation_value';
  $handler->display->display_options['filters']['field_validation_value']['group'] = 1;
  $handler->display->display_options['filters']['field_validation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_validation_value']['expose']['operator_id'] = 'field_validation_value_op';
  $handler->display->display_options['filters']['field_validation_value']['expose']['label'] = 'Validation';
  $handler->display->display_options['filters']['field_validation_value']['expose']['operator'] = 'field_validation_value_op';
  $handler->display->display_options['filters']['field_validation_value']['expose']['identifier'] = 'field_validation_value';
  /* Filter criterion: Content: Assisted Status (field_assisted) */
  $handler->display->display_options['filters']['field_assisted_value']['id'] = 'field_assisted_value';
  $handler->display->display_options['filters']['field_assisted_value']['table'] = 'field_data_field_assisted';
  $handler->display->display_options['filters']['field_assisted_value']['field'] = 'field_assisted_value';
  $handler->display->display_options['filters']['field_assisted_value']['group'] = 1;
  $handler->display->display_options['filters']['field_assisted_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_assisted_value']['expose']['operator_id'] = 'field_assisted_value_op';
  $handler->display->display_options['filters']['field_assisted_value']['expose']['label'] = 'Assisted';
  $handler->display->display_options['filters']['field_assisted_value']['expose']['operator'] = 'field_assisted_value_op';
  $handler->display->display_options['filters']['field_assisted_value']['expose']['identifier'] = 'field_assisted_value';
  /* Filter criterion: Content: Children (field_children) */
  $handler->display->display_options['filters']['field_children_value']['id'] = 'field_children_value';
  $handler->display->display_options['filters']['field_children_value']['table'] = 'field_data_field_children';
  $handler->display->display_options['filters']['field_children_value']['field'] = 'field_children_value';
  $handler->display->display_options['filters']['field_children_value']['group'] = 1;
  $handler->display->display_options['filters']['field_children_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_children_value']['expose']['operator_id'] = 'field_children_value_op';
  $handler->display->display_options['filters']['field_children_value']['expose']['label'] = 'Children';
  $handler->display->display_options['filters']['field_children_value']['expose']['operator'] = 'field_children_value_op';
  $handler->display->display_options['filters']['field_children_value']['expose']['identifier'] = 'field_children_value';
  /* Filter criterion: Content: Elderly (field_elderly) */
  $handler->display->display_options['filters']['field_elderly_value']['id'] = 'field_elderly_value';
  $handler->display->display_options['filters']['field_elderly_value']['table'] = 'field_data_field_elderly';
  $handler->display->display_options['filters']['field_elderly_value']['field'] = 'field_elderly_value';
  $handler->display->display_options['filters']['field_elderly_value']['group'] = 1;
  $handler->display->display_options['filters']['field_elderly_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_elderly_value']['expose']['operator_id'] = 'field_elderly_value_op';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['label'] = 'Elderly';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['operator'] = 'field_elderly_value_op';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['identifier'] = 'field_elderly_value';
  /* Filter criterion: Content: Animals Allowed (field_pets) */
  $handler->display->display_options['filters']['field_pets_value']['id'] = 'field_pets_value';
  $handler->display->display_options['filters']['field_pets_value']['table'] = 'field_data_field_pets';
  $handler->display->display_options['filters']['field_pets_value']['field'] = 'field_pets_value';
  $handler->display->display_options['filters']['field_pets_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pets_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pets_value']['expose']['operator_id'] = 'field_pets_value_op';
  $handler->display->display_options['filters']['field_pets_value']['expose']['label'] = 'Animal Needs';
  $handler->display->display_options['filters']['field_pets_value']['expose']['operator'] = 'field_pets_value_op';
  $handler->display->display_options['filters']['field_pets_value']['expose']['identifier'] = 'field_pets_value';
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-60 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/open-beds';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Open Beds';
  $handler->display->display_options['menu']['weight'] = '10';
  $translatables['open_beds_admin_view'] = array(
    t('Defaults'),
    t('Open Beds'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results'),
    t('Sorry, this criteria did not return any results. Please try broadening your search. '),
    t('ID'),
    t('SCRN'),
    t('Validated'),
    t('Assisted'),
    t('Availability'),
    t('Max Spaces'),
    t('Length of stay'),
    t('Dbls'),
    t('-'),
    t('Sngl'),
    t('Futn'),
    t('Pets'),
    t('Suburb'),
    t('Children'),
    t('Elderly'),
    t('State'),
    t('Zip'),
    t('Edit'),
    t('Spaces'),
    t('Zip/Post Code'),
    t('Screened'),
    t('Validation'),
    t('Animal Needs'),
    t('Page'),
  );
  $export['open_beds_admin_view'] = $view;

  $view = new view();
  $view->name = 'open_beds_view';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'open_beds_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Open Beds';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  /* Field: Content: Max Number of People / Spaces */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_no_beds';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_no_beds';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Beds';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Situation Status */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_availability';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Availability';
  /* Field: Content: State */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_state';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_state';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Suburb';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '[tid-name], [entity_id_5]';
  /* Field: Content: Animals Allowed */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_pets';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_pets';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Animals';
  /* Field: Content: Children */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_children';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_children';
  /* Field: Content: Elderly */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_elderly';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_elderly';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_bed' => 'open_bed',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Situation Status (field_availability) */
  $handler->display->display_options['filters']['field_availability_value']['id'] = 'field_availability_value';
  $handler->display->display_options['filters']['field_availability_value']['table'] = 'field_data_field_availability';
  $handler->display->display_options['filters']['field_availability_value']['field'] = 'field_availability_value';
  $handler->display->display_options['filters']['field_availability_value']['group'] = 1;
  $handler->display->display_options['filters']['field_availability_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_availability_value']['expose']['operator_id'] = 'field_availability_value_op';
  $handler->display->display_options['filters']['field_availability_value']['expose']['label'] = 'Availability';
  $handler->display->display_options['filters']['field_availability_value']['expose']['operator'] = 'field_availability_value_op';
  $handler->display->display_options['filters']['field_availability_value']['expose']['identifier'] = 'av';
  /* Filter criterion: Content: Max Number of People / Spaces (field_no_beds) */
  $handler->display->display_options['filters']['field_no_beds_value']['id'] = 'field_no_beds_value';
  $handler->display->display_options['filters']['field_no_beds_value']['table'] = 'field_data_field_no_beds';
  $handler->display->display_options['filters']['field_no_beds_value']['field'] = 'field_no_beds_value';
  $handler->display->display_options['filters']['field_no_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_no_beds_value']['group'] = 1;
  $handler->display->display_options['filters']['field_no_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['operator_id'] = 'field_no_beds_value_op';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['label'] = 'Number of Spaces';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['operator'] = 'field_no_beds_value_op';
  $handler->display->display_options['filters']['field_no_beds_value']['expose']['identifier'] = 'b';
  /* Filter criterion: Content: State (field_state) */
  $handler->display->display_options['filters']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value']['expose']['operator_id'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_state_value']['expose']['operator'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['identifier'] = 'field_state_value';
  /* Filter criterion: Content: Address (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'a';
  /* Filter criterion: Content: Post Code (field_zip) */
  $handler->display->display_options['filters']['field_zip_value']['id'] = 'field_zip_value';
  $handler->display->display_options['filters']['field_zip_value']['table'] = 'field_data_field_zip';
  $handler->display->display_options['filters']['field_zip_value']['field'] = 'field_zip_value';
  $handler->display->display_options['filters']['field_zip_value']['group'] = 1;
  $handler->display->display_options['filters']['field_zip_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_zip_value']['expose']['operator_id'] = 'field_zip_value_op';
  $handler->display->display_options['filters']['field_zip_value']['expose']['label'] = 'Zip/Post Code';
  $handler->display->display_options['filters']['field_zip_value']['expose']['operator'] = 'field_zip_value_op';
  $handler->display->display_options['filters']['field_zip_value']['expose']['identifier'] = 'field_zip_value';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Suburb';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 's';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'suburb';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Children (field_children) */
  $handler->display->display_options['filters']['field_children_value']['id'] = 'field_children_value';
  $handler->display->display_options['filters']['field_children_value']['table'] = 'field_data_field_children';
  $handler->display->display_options['filters']['field_children_value']['field'] = 'field_children_value';
  $handler->display->display_options['filters']['field_children_value']['group'] = 1;
  $handler->display->display_options['filters']['field_children_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_children_value']['expose']['operator_id'] = 'field_children_value_op';
  $handler->display->display_options['filters']['field_children_value']['expose']['label'] = 'Children';
  $handler->display->display_options['filters']['field_children_value']['expose']['operator'] = 'field_children_value_op';
  $handler->display->display_options['filters']['field_children_value']['expose']['identifier'] = 'field_children_value';
  /* Filter criterion: Content: Elderly (field_elderly) */
  $handler->display->display_options['filters']['field_elderly_value']['id'] = 'field_elderly_value';
  $handler->display->display_options['filters']['field_elderly_value']['table'] = 'field_data_field_elderly';
  $handler->display->display_options['filters']['field_elderly_value']['field'] = 'field_elderly_value';
  $handler->display->display_options['filters']['field_elderly_value']['group'] = 1;
  $handler->display->display_options['filters']['field_elderly_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_elderly_value']['expose']['operator_id'] = 'field_elderly_value_op';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['label'] = 'Elderly';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['operator'] = 'field_elderly_value_op';
  $handler->display->display_options['filters']['field_elderly_value']['expose']['identifier'] = 'field_elderly_value';
  /* Filter criterion: Content: Animals Allowed (field_pets) */
  $handler->display->display_options['filters']['field_pets_value']['id'] = 'field_pets_value';
  $handler->display->display_options['filters']['field_pets_value']['table'] = 'field_data_field_pets';
  $handler->display->display_options['filters']['field_pets_value']['field'] = 'field_pets_value';
  $handler->display->display_options['filters']['field_pets_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pets_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pets_value']['expose']['operator_id'] = 'field_pets_value_op';
  $handler->display->display_options['filters']['field_pets_value']['expose']['label'] = 'Animals';
  $handler->display->display_options['filters']['field_pets_value']['expose']['operator'] = 'field_pets_value_op';
  $handler->display->display_options['filters']['field_pets_value']['expose']['identifier'] = 'field_pets_value';
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-30 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'open-beds';
  $translatables['open_beds_view'] = array(
    t('Defaults'),
    t('Open Beds'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Summary'),
    t('Beds'),
    t('Availability'),
    t('field_state'),
    t('Suburb'),
    t('[tid-name], [entity_id_5]'),
    t('Animals'),
    t('Children'),
    t('Elderly'),
    t('Number of Spaces'),
    t('State'),
    t('Address'),
    t('Zip/Post Code'),
    t('Page'),
  );
  $export['open_beds_view'] = $view;

  return $export;
}
