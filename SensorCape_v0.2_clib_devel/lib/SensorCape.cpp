/*
 * SensorCape.cpp
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */
#include "SensorCape.h"
#include <iostream>
using namespace std;

SensorCape::SensorCape() {
	cout << "Initializing SensorCape" << endl;
	this->motion = new MotionSensor();
	this->leds = new LED();
	cout << "SensorCape initialized" << endl;
}

SensorCape::~SensorCape() {
	cout << "Disconnecting SensorCape" << endl;
}

// Access internal sensors
MotionSensor *SensorCape::getMotionSensor() {
	return this->motion;
}

// Motion sensor related functions
double SensorCape::getAccelerometerX() {
	return 0.001;
}

double SensorCape::getAccelerometerY() {
	return 0.001;
}

double SensorCape::getAccelerometerZ() {
	return 0.001;
}

double SensorCape::getGyrometerX() {
	return 0.001;
}

double SensorCape::getGyrometerY() {
	return 0.001;
}

double SensorCape::getGyrometerZ() {
	return 0.001;
}

double SensorCape::getMagnetometerX() {
	return 0.001;
}

double SensorCape::getMagnetometerY() {
	return 0.001;
}

LED* SensorCape::getLED() {
	return this->leds;
}

double SensorCape::getMagnetometerZ() {
	return 0.001;
}
