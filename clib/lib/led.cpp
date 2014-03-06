/*
 * led.cpp
 *
 *  Created on: Jul 2, 2013
 *      Author: mike
 */
#include "led.h"

using namespace std;

LED::LED() {
	cout << "Connecting LED module" << endl;

	this->led0Brightness = new string("/sys/class/leds/beaglebone:green:usr0/brightness");
	this->led1Brightness = new string("/sys/class/leds/beaglebone:green:usr1/brightness");
	this->led2Brightness = new string("/sys/class/leds/beaglebone:green:usr2/brightness");
	this->led3Brightness = new string("/sys/class/leds/beaglebone:green:usr3/brightness");

	cout << "LED module connected" << endl;
}

LED::~LED() {
	cout << "Disconnecting LED module" << endl;
}

bool LED::ledOn(int ledNum) {
	const char *ledToUse;

	if (ledNum == 0) ledToUse = this->led0Brightness->c_str();
	else if (ledNum == 1) ledToUse = this->led1Brightness->c_str();
	else if (ledNum == 2) ledToUse = this->led2Brightness->c_str();
	else if (ledNum == 3) ledToUse = this->led3Brightness->c_str();
	else return false;

	if((this->ledHandle = fopen(ledToUse, "r+")) != 0){
		fwrite("1", sizeof(char), 1, this->ledHandle);
		fclose(this->ledHandle);
	}
	else return false;
	return true;
}

bool LED::ledOff(int ledNum) {
	const char *ledToUse;

	if (ledNum == 0) ledToUse = this->led0Brightness->c_str();
	else if (ledNum == 1) ledToUse = this->led1Brightness->c_str();
	else if (ledNum == 2) ledToUse = this->led2Brightness->c_str();
	else if (ledNum == 3) ledToUse = this->led3Brightness->c_str();
	else return false;

	if((this->ledHandle = fopen(ledToUse, "r+")) != 0){
		fwrite("0", sizeof(char), 1, this->ledHandle);
		fclose(this->ledHandle);
	}
	else return false;
	return true;
}

bool LED::setLED(bool state, int ledNum) {
	if (state) return this->ledOn(ledNum);
	else return this->ledOff(ledNum);
}

bool LED::getLedState(int ledNum) {
	const char *ledToUse;

	if (ledNum == 0) ledToUse = this->led0Brightness->c_str();
	else if (ledNum == 1) ledToUse = this->led1Brightness->c_str();
	else if (ledNum == 2) ledToUse = this->led2Brightness->c_str();
	else if (ledNum == 3) ledToUse = this->led3Brightness->c_str();
	else return false;

	// TODO: Pick back up right here...
	if((this->ledHandle = fopen(ledToUse, "r+")) != 0){

		fclose(this->ledHandle);
	}

	return true;
}

bool LED::toggleLED(int ledNum) {
	return true;
}
