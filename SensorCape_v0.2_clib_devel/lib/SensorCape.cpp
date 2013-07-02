/*
 * SensorCape.cpp
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */
#include "SensorCape.h"
using namespace std;

SensorCape::SensorCape() {
	cout << "Initializing SensorCape" << endl;
	motion = new MotionSensor();
}

SensorCape::~SensorCape() {
	cout << "Disconnecting SensorCape" << endl;
}

