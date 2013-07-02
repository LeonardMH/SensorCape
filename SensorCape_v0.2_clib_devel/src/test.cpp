/*
 * test.cpp
 *
 *  Created on: Jul 1, 2013
 *      Author: mike
 */
#include <iostream>
#include "../lib/SensorCape.h"

using namespace std;

int main() {
	cout << "----- Beginning of SensorCape test suite -----" << endl << endl;
    SensorCape *sensors = new SensorCape();
    MotionSensor *motion = NULL;
    motion = sensors->getMotionSensor();
	cout << "\n----- End of SensorCape test suite -----" << endl;
	return 0;
}
