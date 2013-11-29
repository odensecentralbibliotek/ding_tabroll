<?php
if (!empty($fields['field_ding_tabroll_link']->raw)) {
  $link = 'node/' . $fields['field_ding_tabroll_link']->raw;
  if (!empty($fields['field_ding_tabroll_anchor']->content)) {
    $link .= '#' . $fields['field_ding_tabroll_anchor']->content;
  }
}
if (empty($link) && isset($fields['field_ding_tabroll_external'])) {
  $link = $fields['field_ding_tabroll_external']->content;
}
?>
<div class="image">
  <?php
  if (empty($link)) {
    print $fields['field_ding_tabroll_image']->content;
  } else {
    print l($fields['field_ding_tabroll_image']->content, $link, array('html' => TRUE));
  }
  ?>
</div>

<div class="info">
  <h3><?php
  if (empty($link)) {
    print $fields['title']->content;
  } else {
    print l($fields['title']->content, $link, array('html' => TRUE));
  }
  ?></h3>
  <p><?php print $fields['field_ding_tabroll_lead']->content; ?></p>
</div>
