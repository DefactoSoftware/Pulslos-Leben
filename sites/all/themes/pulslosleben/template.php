<?php
function pulslosleben_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#default_value'] = t('Suche'); // Set a default value for the textfield
    // Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Suche';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Suche') {this.value = '';}";
    // Prevent user from searching the default text
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Suche'){ alert('Bitte geben Sie eine Suche'); return false; }";
  }
}
?>