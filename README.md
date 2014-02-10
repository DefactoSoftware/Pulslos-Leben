[![Stories in Ready](https://badge.waffle.io/defactosoftware/pulslos-leben.png?label=ready)](https://waffle.io/defactosoftware/pulslos-leben)
Pulslos-Leben
=============

This repository only contains the specifics to this site, not the entire Drupal installation.

## Requirements

- Regular Drupal requirements (Apache, PHP, MySQL)
- [Drush](http://drush.ws/)
- Setup scrupt is only tested in OSX (but no magic really so should be easy to reproduce on other platforms)

To set up a local development environment take the following steps:

1. Clone this repo: `git clone git@github.com:DefactoSoftware/Pulslos-Leben.git pulslos-leben && cd pulslos-leben`
1. Run the setup script: `bin/setup`
1. Add this line to you hosts file: `127.0.0.1 pulslos.local`
1. Configure a website/virtual host in your webserver with hostname "pulslos.local" pointing to this folder
1. Set the Pulslos Leben theme as default
1. Enable and revert all features in the \"Defacto\"" and \"Pulslos Leben\" packages."
