<?php

/**
 * @file
 * Administration and settings for Sudo Mode.
 */

/**
 * Administration UI for Mission Control.
 */
function sudo_mode_administration_settings() {
  $form = array();

  $form['type'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['configuration'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configuration'),
    '#group' => 'type',
  );

  $form['configuration']['sudo_mode_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable sudo mode for users?'),
    '#default_value' => variable_get('sudo_mode_enabled', 0),
  );

  return system_settings_form($form);
}
