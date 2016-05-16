<?php

/**
 * @file
 * Includes file, contains page callback functions.
 */

/**
 * Raw image view page callback.
 *
 * @param AbstractObject $islandora_object
 *   The islandora object to access
 *
 * @param string $dsid
 *   The DSID to view as raw.
 */
function pcdora_raw_image($islandora_object, $dsid) {
  $full_size_url = url("islandora/object/{$islandora_object->id}/datastream/$dsid/view", array('absolute' => TRUE));
  $raw = theme(
    'image',
    array(
      'title' => $islandora_object->label,
      'path' => $full_size_url,
    )
  );
  return theme('pcdora_raw', array('raw' => $raw));
}
