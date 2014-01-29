<?php
/**
 * @file
 * ding_tabroll.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_tabroll_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_tabroll';
  $view->description = 'Display a list of all nodes in queue \'frontpage tabroll\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'frontpage tabroll';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se flere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'frontpage tabroll';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'ding_tabroll' => 'ding_tabroll',
    'ding_tabroll_for_libraries' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['id'] = 'field_ding_tabroll_link_target_id';
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['table'] = 'field_data_field_ding_tabroll_link';
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['field'] = 'field_ding_tabroll_link_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ding_tabroll_image']['id'] = 'field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['table'] = 'field_data_field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['field'] = 'field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['settings'] = array(
    'image_style' => 'ding_tabroll',
    'image_link' => '',
  );
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['id'] = 'field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['table'] = 'field_data_field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['field'] = 'field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ding_tabroll_link']['id'] = 'field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['table'] = 'field_data_field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['field'] = 'field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['relationship'] = 'field_ding_tabroll_link_target_id';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_link']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Anchor */
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['id'] = 'field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['table'] = 'field_data_field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['field'] = 'field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['element_label_colon'] = FALSE;
  /* Field: Content: External */
  $handler->display->display_options['fields']['field_ding_tabroll_external']['id'] = 'field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['table'] = 'field_data_field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['field'] = 'field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['type'] = 'link_plain';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['ding_tabroll'] = array(
    t('Master'),
    t('Se flere'),
    t('Apply'),
    t('Gendan'),
    t('Sortér efter'),
    t('Asc'),
    t('Desc'),
    t('frontpage tabroll'),
    t('Content entity referenced from field_ding_tabroll_link'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['ding_tabroll'] = $view;

  $view = new view();
  $view->name = 'libraries_tabroll';
  $view->description = 'Display a list of all nodes in queue \'libraries\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'libraries tabroll';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se flere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'ding_tabroll_for_libraries' => 'ding_tabroll_for_libraries',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['id'] = 'field_ding_tabroll_link_target_id';
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['table'] = 'field_data_field_ding_tabroll_link';
  $handler->display->display_options['relationships']['field_ding_tabroll_link_target_id']['field'] = 'field_ding_tabroll_link_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ding_tabroll_image']['id'] = 'field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['table'] = 'field_data_field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['field'] = 'field_ding_tabroll_image';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_tabroll_image']['settings'] = array(
    'image_style' => 'ding_tabroll',
    'image_link' => '',
  );
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['id'] = 'field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['table'] = 'field_data_field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['field'] = 'field_ding_tabroll_lead';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_lead']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ding_tabroll_link']['id'] = 'field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['table'] = 'field_data_field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['field'] = 'field_ding_tabroll_link';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['relationship'] = 'field_ding_tabroll_link_target_id';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_link']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ding_tabroll_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Anchor */
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['id'] = 'field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['table'] = 'field_data_field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['field'] = 'field_ding_tabroll_anchor';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_anchor']['element_label_colon'] = FALSE;
  /* Field: Content: External */
  $handler->display->display_options['fields']['field_ding_tabroll_external']['id'] = 'field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['table'] = 'field_data_field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['field'] = 'field_ding_tabroll_external';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['label'] = '';
  $handler->display->display_options['fields']['field_ding_tabroll_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_tabroll_external']['click_sort_column'] = 'url';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Nodequeue: Subqueue reference */
  $handler->display->display_options['arguments']['reference']['id'] = 'reference';
  $handler->display->display_options['arguments']['reference']['table'] = 'nodequeue_subqueue';
  $handler->display->display_options['arguments']['reference']['field'] = 'reference';
  $handler->display->display_options['arguments']['reference']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['arguments']['reference']['default_action'] = 'default';
  $handler->display->display_options['arguments']['reference']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['reference']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['reference']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['reference']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['reference']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_tabroll' => 'ding_tabroll',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['libraries_tabroll'] = array(
    t('Defaults'),
    t('Se flere'),
    t('Apply'),
    t('Gendan'),
    t('Sortér efter'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Content entity referenced from field_ding_tabroll_link'),
    t('All'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['libraries_tabroll'] = $view;

  return $export;
}
