<div class="image">
  <?php
  if (empty($fields['field_ding_tabroll_link']->raw)) {
    print $fields['field_ding_tabroll_image']->content;
  } else {
    print l($fields['field_ding_tabroll_image']->content, 'node/' . $fields['field_ding_tabroll_link']->raw, array('html' => TRUE));
  }
  ?>
</div>

<div class="info">
  <h3><?php
  if (empty($fields['field_ding_tabroll_link']->raw)) {
    print $fields['title'];
  } else {
    print l($fields['title']->content, 'node/' . $fields['field_ding_tabroll_link']->raw);
  }
  ?></h3>
  <p><?php print $fields['field_ding_tabroll_lead']->content; ?></p>
</div>
