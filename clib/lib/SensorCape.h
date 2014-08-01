/*
 * 	SensorCape.h
 *
 *  Created on: Jul 1, 2013
 *  Author: mike
 */

#ifndef SENSORCAPE_H_
#define SENSORCAPE_H_

#include <iostream>
#include "motion.h"
#include "light.h"
#include "am_temp.h"
#include "nc_temp.h"
#include "humidity.h"
#include "pressure.h"
#include "infrared.h"
#include "led.h"
#include "utility.h"

#define MOTION_SDA_PIN 0x0001
#define MOTION_SCL_PIN 0x0002
#define MOTION_INT_PIN 0x0003

class SensorCape {
private:
	// Define pin connections for the board, placeholder for now
	static const int motionSdaPin = 0;
	static const int motionSclPin = 1;
	static const int motionIntPin = 2;

	static const int lightSdaPin = 0;
	static const int lightSclPin = 1;
	static const int lightIntPin = 3;

	static const int ambientTemperatureSdaPin = 0;
	static const int ambientTemperatureSclPin = 1;

	static const int nonContactTemperatureSdaPin = 0;
	static const int nonContactTemperatureSclPin = 1;
	static const int nonContactTemperatureIntPin = 4;

	static const int humiditySdaPin = 0;
	static const int humiditySclPin = 1;
	static const int humidityIntALPin = 5;
	static const int humidityIntAHPin = 6;

	static const int pressureSdaPin = 0;
	static const int pressureSclPin = 1;

	static const int infraredInputPin = 7;

	static const int led1Pin = 8;
	static const int led2Pin = 9;
	static const int led3Pin = 10;
	static const int led4Pin = 11;

	static const int pushButton1Pin = 12;
	static const int pushButton2Pin = 13;
	static const int pushButton3Pin = 14;
	static const int pushButton4Pin = 15;
    
    // Define devices on the board
	MotionSensor *motion;
	LED *leds;
    
public:
	// Begin top level function definitions
	// Constructors and Destructors
	SensorCape();
	~SensorCape();

	// Access internal sensors
	MotionSensor *getMotionSensor();
	LED *getLED();

	// Sensor interface functions
	// Motion Sensor
	double getAccelerometerX();
	double getAccelerometerY();
	double getAccelerometerZ();
	double getGyrometerX();
	double getGyrometerY();
	double getGyrometerZ();
	double getMagnetometerX();
	double getMagnetometerY();
	double getMagnetometerZ();

	// Light sensor
	//TODO: Start working from here!!!!!!!
};

#endif /* SENSORCAPE_H_ */
