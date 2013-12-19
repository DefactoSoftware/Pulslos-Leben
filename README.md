Pulslos-Leben
=============

This repository only contains the specifics to this site, not the entire Drupal installation. To set up a local development environment take the following steps:

1.  `git clone -b develop git@github.com:DefactoSoftware/Pulslos-Leben.git pulslos.dev` (get website code)
2.  `git clone --depth=1 git://git.acquia.com/drupal/branches/7.x.git pulslos.dev/drupal.tmp` (get latest Acquia Drupal, without history, in temporary folder)
3.  `rm -f -r pulslos.dev/drupal.tmp/.git` (remove Drupal git files)
4.  `mv -n pulslos.dev/drupal.tmp/* pulslos.dev` (move Drupal git files)
5.  `rm -f -r pulslos.dev/drupal.tmp` (delete temporary folder)
6.  `cd pulslos.dev`
7.  `mkdir sites/default/files/` (create the files directory)
8.  `cp sites/default/default.settings.php sites/default/settings.php` (create the settings file)
9.  Add this list to you hosts file: `127.0.0.1 pulslos.dev`
10. Configure a website/virtual host in your webserver with hostname "pulslos.dev" pointing to the "pulslos.dev" folder
11. Create an empty database or restore a backup from server
12. Visit [http://pulslos.dev/](http://pulslos.dev/) and follow instructions to complete Drupal installation