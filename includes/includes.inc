<?php
/**
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
function pcdora_raw_image(AbstractObject $islandora_object, $dsid) {
  dsm($islandora_object, "islandora object");
  dsm($dsid, "dsid");
  $full_size_url = url("islandora/object/{$islandora_object->id}/datastream/OBJ/view", array('absolute' => TRUE));
  $params = array(
    'title' => $islandora_object->label,
    'path' => $full_size_url,
  );
  $raw = theme('image', $params);
  theme('pcdora_raw', array('raw' => $raw));
}
