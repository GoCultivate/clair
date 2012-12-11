<?php
/**
 * @file
 * Template for 3 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid_4">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>

  <div class="panel-panel grid_8">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>

  <div class="panel-panel grid_4">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
</div>
