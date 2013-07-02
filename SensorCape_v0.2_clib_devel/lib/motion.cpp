/*
 * motion.cpp
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */
 
#include "motion.h"
#include <iostream>
using namespace std;

MotionSensor::MotionSensor() {
	cout << "MotionSensor initialized" << endl;
} 

MotionSensor::~MotionSensor() {
	cout << "MotionSensor disconnected" << endl;
}
