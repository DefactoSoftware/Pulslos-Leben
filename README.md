Pulslos-Leben
=============

This repository only contains  the specifics to this site, not the entire Drupal installation. To set up a local development environment take the following steps:

1.  `git clone git://git.acquia.com/drupal/branches/7.x.git pulslos.dev` (get latest Acquia Drupal)
2.  `cd pulslos.dev`
3.  `git remote rename origin drupal` (rename Acquia's git server to drupal)
4.  `git remote add origin git@github.com:DefactoSoftware/Pulslos-Leben.git` (add this repository as remote)
5.  `git pull -f origin develop`
6.  `git checkout develop`
7.  Add this list to you hosts file: `127.0.0.1 pulslos.dev`
8.  Configure the website in your webserver with hostname "pulslos.dev" and pointing to the "pulslos.dev" folder.
9.  Create an empty database or restore a backup from server
10. Start Drupal installation at [http://pulslos.dev/](http://pulslos.dev/)