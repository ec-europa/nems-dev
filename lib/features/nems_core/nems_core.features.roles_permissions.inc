<?php
/**
 * @file
 * nems_core.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function nems_core_default_roles_permissions() {
  $roles = array();

  // Exported role: webmaster
  $roles['webmaster'] = (object) array(
    'name' => 'webmaster',
    'weight' => 5,
    'permissions' => array(
      'accept translation jobs' => TRUE,
      'access content overview' => TRUE,
      'add media from remote sources' => TRUE,
      'add terms in classification' => TRUE,
      'add terms in tags' => TRUE,
      'administer beans' => TRUE,
      'administer content translations' => TRUE,
      'administer files' => TRUE,
      'administer languages' => TRUE,
      'administer main-menu menu items' => TRUE,
      'administer menu attributes' => TRUE,
      'administer menu-service-tools menu items' => TRUE,
      'administer menu_token' => TRUE,
      'administer nodes' => TRUE,
      'administer site configuration' => TRUE,
      'administer translation tasks' => TRUE,
      'administer users' => TRUE,
      'administer workbench moderation' => TRUE,
      'assign contributor role' => TRUE,
      'assign editor role' => TRUE,
      'assign webmaster role' => TRUE,
      'bypass node access' => TRUE,
      'bypass workbench moderation' => TRUE,
      'change own username' => TRUE,
      'create page content' => TRUE,
      'create translation jobs' => TRUE,
      'delete any page content' => TRUE,
      'delete own page content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 2' => TRUE,
      'edit any page content' => TRUE,
      'edit own page content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'moderate content from draft to expired' => TRUE,
      'moderate content from draft to needs_review' => TRUE,
      'moderate content from draft to published' => TRUE,
      'moderate content from draft to validated' => TRUE,
      'moderate content from expired to draft' => TRUE,
      'moderate content from expired to needs_review' => TRUE,
      'moderate content from expired to published' => TRUE,
      'moderate content from expired to validated' => TRUE,
      'moderate content from needs_review to draft' => TRUE,
      'moderate content from needs_review to expired' => TRUE,
      'moderate content from needs_review to published' => TRUE,
      'moderate content from needs_review to validated' => TRUE,
      'moderate content from published to archived' => TRUE,
      'moderate content from published to draft' => TRUE,
      'moderate content from published to expired' => TRUE,
      'moderate content from published to needs_review' => TRUE,
      'moderate content from published to validated' => TRUE,
      'moderate content from validated to draft' => TRUE,
      'moderate content from validated to expired' => TRUE,
      'moderate content from validated to needs_review' => TRUE,
      'moderate content from validated to published' => TRUE,
      'multisite_workbench_moderation_view_bulk_update' => TRUE,
      'schedule (un)publishing of nodes' => TRUE,
      'submit translation jobs' => TRUE,
      'translate content' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'version management edits' => TRUE,
      'view all unpublished content' => TRUE,
      'view scheduled content' => TRUE,
    ),
  );

  return $roles;
}