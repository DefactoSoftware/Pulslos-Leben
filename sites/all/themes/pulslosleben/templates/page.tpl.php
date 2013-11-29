<!-- page.tpl.php-->

<div id="header">
  <?php if ($logo): ?>
      <a class="site-logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
  <?php endif; ?> 
  
  <?php if($page['header']): ?>
      <?php print render($page['header']); ?>
  <?php endif; ?>
  
</div>

<div class="breadcrumb-container">
  <?php print $breadcrumb; ?>
</div>

<div class="page-content">
  <?php print render($page['content']); ?>
</div>

<div class="bottom">
  <h2>Sponsoren & Partner</h2>
  
  <img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-mhh.png" width="155" height="37" />
  <img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-defacto.png" width="133" height="25" />
</div>