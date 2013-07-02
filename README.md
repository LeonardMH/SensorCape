SensorCape
==========

Library for interfacing with the SensorCape for BeagleBone Black. To learn more about the SensorCape you can visit the Open Hardware page at http://solderpad.com/michael0310/beaglebone-black-sensorcape or visit my personal website for further information and documentation at http://michaelhleonard.com/projects/SensorCape

Directory Structure
===================
At the highest level, the repository is devided into different versions and then classified by release or development version. The basic naming convention is SensorCape\_(BOARDVERSION)\_(PROG LANGUAGE)\_(RELEASE or DEVEL)

Inside each of these folder there are two relevant top level folders.

/lib
	This folder is where the interesting files are contained. The lib files are what you will want to include on your project in order to be able to interface with the SensorCape. This includes top level functionality as well as lower level implementations of interface protocols.

/src
	This folder contains various project files that are created with the purpose of being built. This is convenient for testing purposes as well as for creating demonstration programs.

Contributors
============
Michael Leonard - [My Website](http://michaelhleonard.com/) - [My Email](mailto:maybeillrememberit@gmail.com)
