/*
 * test.cpp
 *
 *  Created on: Jul 1, 2013
 *      Author: mike
 */
#include <iostream>
#include "../lib/SensorCape.h"
#include <unistd.h> // Used for sleep()
#include <thread>

using namespace std;

void task1(string msg, LED *leds) {
	cout << "Beginning first LED test";
	for (int i = 0; i < 4; ++i) {
		leds->ledOn(i);
	}
	sleep(2);
	for (int i = 0; i < 4; ++i) {
		leds->ledOff(i);
	}
}


int main() {
	cout << "----- Beginning of SensorCape test suite -----" << endl << endl;
    SensorCape *sensors = new SensorCape();
    MotionSensor *motion = 0;
    LED *leds = 0;

    motion = sensors->getMotionSensor();
    leds = sensors->getLED();

    // Begin LED tests
	cout << "Beginning first LED test";
	for (int i = 0; i < 4; ++i) {
		leds->ledOn(i);
	}
	sleep(2);
	for (int i = 0; i < 4; ++i) {
		leds->ledOff(i);
	}

	cout << "Beginning next LED test";
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			for (int i = 0; i < 4; ++i) {
				leds->ledOn(i);
				usleep(50*1000);
			}
		}
		else {
			for (int i = 0; i < 4; ++i) {
				leds->ledOff(i);
				usleep(50*1000);
			}
		}
	}
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			for (int i = 4; i > 0; --i) {
				leds->ledOn(i);
				usleep(50*1000);
			}
		}
		else {
			for (int i = 4; i > 0; --i) {
				leds->ledOff(i);
				usleep(50*1000);
			}
		}
	}

	// Begin motion sensor tests
	cout << "Beginning motion sensor tests" << endl;

    // Clean up
    delete sensors;
    delete motion;
    sensors = 0;
    motion = 0;

	cout << "\n----- End of SensorCape test suite -----" << endl;
	return 0;
}
