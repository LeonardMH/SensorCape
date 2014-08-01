/*
 * motion.cpp
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */
 
#include "motion.h"
#include "i2c.h"
#include <iostream>
using namespace std;

// #defines
#define DEVICE_ADDRESS1		0xD0
#define ACCEL_X_AXIS_REG	0x3B
#define ACCEL_Y_AXIS_REG	0x3D

MotionSensor::MotionSensor() {
	cout << "Initializing MotionSensor" << endl;
	i2c = new I2C(2, DEVICE_ADDRESS1);
	cout << "MotionSensor initialized" << endl;
}

MotionSensor::~MotionSensor() {
	cout << "Disconnecting MotionSensor" << endl;
	i2c = 0;
	delete i2c;
	cout << "MotionSensor Disconnected" << endl;
}

__u16 MotionSensor::getAccelerometerX() {
	return (i2c->read8(0x3B) << 8) | i2c->read8(0x3C);
}

__u16 MotionSensor::getAccelerometerY() {
	return (i2c->read8(0x3D) << 8) | i2c->read8(0x3E);
}

__u16 MotionSensor::getAccelerometerZ() {
	return (i2c->read8(0x3F) << 8) | i2c->read8(0x40);
}

__u32 MotionSensor::getGyroscopeX() {
	return (i2c->read8(0x43) << 8) | i2c->read8(0x44);
}

__u32 MotionSensor::getGyroscopeY() {
	return (i2c->read8(0x45) << 8) | i2c->read8(0x46);
}

__u32 MotionSensor::getGyroscopeZ() {
	return (i2c->read8(0x47) << 8) | i2c->read8(0x48);
}

__u32 MotionSensor::getMagnetometerX() {
	return (i2c->read8(0x04) << 8) | i2c->read8(0x03);
}

__u32 MotionSensor::getMagnetometerY() {
	return (i2c->read8(0x06) << 8) | i2c->read8(0x05);
}

__u32 MotionSensor::getMagnetometerZ() {
	return (i2c->read8(0x08) << 8) | i2c->read8(0x07);
}

__u32 MotionSensor::getTemp() {
	return (i2c->read8(0x41) << 8) | i2c->read8(0x42);
}
