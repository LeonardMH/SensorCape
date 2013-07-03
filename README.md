[SensorCape](http://michaelhleonard.com/projects/SensorCape)
==========
This is a C++ and Python library for interfacing with the SensorCape for BeagleBone Black. The SensorCape is a higly capable add-on for the BeagleBone that adds the following functionality:
+ 3-axis gyroscope
+ 3-axis accelerometer
+ 3-axis magnetometer (compass)
+ Ambient light sensor
+ Ambient temperature sensor
+ Non-contact temperature sensor
+ Humidity sensor
+ Pressure sensor (Detects altitude changes)
+ 38 kHz IR sensor (Interfaces with common consumer electronics)
+ 4 push-buttons
+ 4 user-configurable LED's

Visit the [project page](http://michaelhleonard.com/projects/SensorCape) for further information and documentation. If you would like to view the PCB files they are hosted at [Solderpad](http://solderpad.com/michael0310/beaglebone-black-sensorcape).

Directory Structure
===================
At the highest level, the repository is divided into different versions and then classified by release or development version. The basic naming convention is:
SensorCape\_(BOARDVERSION)\_(PROG LANGUAGE)\_(RELEASE or DEVEL)

Inside each of these folders there are two relevant top level folders.

/lib
-----

This folder is where the interesting files are contained. The lib files are what you will want to include on your project in order to be able to interface with the SensorCape. This includes top level functionality as well as lower level implementations of interface protocols.

/src
-----

This folder contains various project files that are created with the purpose of being built. This is convenient for testing purposes as well as for creating demonstration programs.

Contributors
============

Michael Leonard - [My Website](http://michaelhleonard.com/) - [My Email](mailto:maybeillrememberit@gmail.com)
