/*
 * motion.h
 *
 *  Created on: Jul 1, 2013
 *      Author: mike
 */

#ifndef MOTION_H_
#define MOTION_H_

#include "i2c.h"

class MotionSensor {
private:
	I2C *i2c;
public:
    MotionSensor();
    ~MotionSensor();

    __u16 getAccelerometerX();
    __u16 getAccelerometerY();
    __u16 getAccelerometerZ();

    __u32 getGyroscopeX();
    __u32 getGyroscopeY();
    __u32 getGyroscopeZ();

    __u32 getMagnetometerX();
    __u32 getMagnetometerY();
    __u32 getMagnetometerZ();

    __u32 getTemp();
};

#endif /* MOTION_H_ */
