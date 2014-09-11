# SensorCape

This is the project repository for the SensorCape for BeagleBone Black. The SensorCape is a highly capable add-on for the BeagleBone that adds the following functionality:

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

The repository hosts both the hardware files and the software library that is used to interact with the onboard sensors. Visit the [project page](http://michaelhleonard.com/projects/SensorCape) for further information and documentation.

![Schematic snapshot of most recent SensorCape](images/schematic.png)

![Board layout snapshot of most recent SensorCape](images/board-layout.png)

## Checking out a specific folder

Since 2012 it has been possible to check out a specific folder in a git repository. This means that if you would like to develop or use the software but don't need the hardware files you don't have to clone them to your local computer. See [this stack overflow question](http://stackoverflow.com/questions/600079/is-there-any-way-to-clone-a-git-repositorys-sub-directory-only) for more info or [read this tutorial](http://jasonkarns.com/blog/subdirectory-checkouts-with-git-sparse-checkout/). You may also want to check out [the official documentation](http://schacon.github.io/git/git-read-tree.html#_sparse_checkout).

I would recommend just cloning the entire repository.

# Licenses

Hardware and software are released under the following licenses.

## Hardware

The SensorCape hardware is released under the open source ["SolderPad Hardware License"](http://solderpad.org/licenses/SHL-0.51/). The license disclaimer is below. This is an open source and fairly non-restrictive license.

Copyright SensorCape, Michael Leonard, Copyright and related rights are licensed under the Solderpad Hardware License, Version 0.51 (the “License”); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law or agreed to in writing, software, hardware and materials distributed under this License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

## Software

The software library for the SensorCape (if it is ever finished) is released under the open source ["GNU Lesser General Public License v2.1"](http://www.gnu.org/licenses/lgpl-2.1.html). The license disclaimer is below. This is an open source and fairly non-restrictive license.

SensorCape for BeagleBone Black hardware interface library.
Copyright (C) 2014  Michael Leonard

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

You can contact me on GitHub as user [LeonardMH](http://github.com/LeonardMH).

# Contributors

Michael Leonard - [My Website](http://michaelhleonard.com/)
