/*
 * light.h
 *
 *  Created on: Jul 1, 2013
 *      Author: mike
 */

#ifndef LIGHT_H_
#define LIGHT_H_

class LightSensor {
private:
public:
    LightSensor();
    ~LightSensor();

    __u16 readLightData();
};


#endif /* LIGHT_H_ */
