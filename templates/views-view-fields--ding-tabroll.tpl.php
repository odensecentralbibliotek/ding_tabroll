<?php
if (isset($row->_field_data['nid']['entity']->field_ding_tabroll_external['und'][0]['attributes']['target']) && ($row->_field_data['nid']['entity']->field_ding_tabroll_external['und'][0]['attributes']['target'] === '_blank')){
       $target = array();
       $target['attributes']['target'] = '_blank';
}
//if (!empty($fields['field_ding_tabroll_link']->raw)) {
if(isset($row->_field_data['nid']['entity']->field_ding_tabroll_link['und'][0]["target_id"])){
  $link = 'node/' . $row->_field_data['nid']['entity']->field_ding_tabroll_link['und'][0]["target_id"];
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
  } elseif(isset($target)) {
    print l($fields['field_ding_tabroll_image']->content, $link, $target, array('html' => TRUE));
  }else{
      print l($fields['field_ding_tabroll_image']->content, $link, array('html' => TRUE));
  }
  ?>
</div>

<div class="info">
  <h3><?php
  if (empty($link)) {
    print $fields['title']->content;
  } elseif(isset($target)) {
      print l($fields['title']->content, $link, $target, array('html' => TRUE));    
  }else {
      print l($fields['title']->content, $link, array('html' => TRUE)); 
  }
  ?></h3>
  <p><?php print isset($fields['field_ding_tabroll_lead']->content) ? $fields['field_ding_tabroll_lead']->content : ""; ?></p>
  <?php 
  if(isset($row->field_field_ding_tabroll_image[0]['raw']['field_kilde']['und'][0]['value']))
  {
      echo "<span class='tabroll-photo-copyright'> " . t('Photo: ') . "{$row->field_field_ding_tabroll_image[0]['raw']['field_kilde']['und'][0]['value']} </span>";
  }
  ?>
</div>
