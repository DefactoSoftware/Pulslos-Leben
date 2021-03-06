<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
  <head>
    <meta charset="utf-8" />
    <title><?php print $head_title; ?></title>
    
    <?php print $head; ?>
    <?php print $styles; ?>
  </head>

  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <div id="container">
      <?php print $page_top; //stuff from modules always render first ?>
      <?php print $page; // uses the page.tpl ?>
      <?php print $page_bottom; //stuff from modules always render last ?>
      <?php print $scripts; ?>
    </div>
    <div id="footer">
      <div class="left">
        <span>&copy; <?php echo date("Y"); ?> Pulslos  Leben.</span>
      </div>
      <div class="right">
        <ul>
          <li><a href="/impressum">Impressum</a></li>
          <li><a href="/kontakt">Kontakt</a></li>
          <li class="last"><a href="/datenschutz">Datenschutz</a></li>
        </ul>
      </div>
    </div>
  </body>
</html>