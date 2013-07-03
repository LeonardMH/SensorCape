/*
 * led.h
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */

#ifndef LED_H_
#define LED_H_

#define addr1 /sys/class/leds/beaglebone:green:usr0/brightness

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class LED {
private:
	FILE *ledHandle;
	string *led0Brightness;
	string *led1Brightness;
	string *led2Brightness;
	string *led3Brightness;
public:
	LED();
	~LED();

	bool getLedState(int ledNum);

	// Turn the specified led on
	bool ledOn(int ledNum);

	// Turn the specified led off
	bool ledOff(int ledNum);

	// Set the specified led to on or off state
	// true == on, false == off
	// Returns true if successful
	bool setLED(bool state, int ledNum);

	// Toggles the state of the specified led
	// Returns true if successful
	bool toggleLED(int ledNum);
};

#endif /* LED_H_ */
