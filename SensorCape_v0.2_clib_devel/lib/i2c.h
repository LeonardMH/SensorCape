/*
 * i2c.h
 *
 *  Created on: Jul 8, 2013
 *      Author: mike
 */

#ifndef I2C_H_
#define I2C_H_

#include <linux/i2c-dev.h>

class I2C {
private:
	int address;
	int bus;
	int file;
	char filename[20];
	bool openConnection();
	bool closeConnection();

public:
	I2C(int bus, __u16 address);
	~I2C();

	__s32 read8(__u8 reg);
	__s32 write8(__u8 reg, __u8 data);
	__s32 read16(__u8 reg);
	__s32 write16(__u8 reg, __u16 data);
};

#endif /* I2C_H_ */
