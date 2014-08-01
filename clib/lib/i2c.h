/*
 * i2c.h
 *
 *  Created on: Jul 8, 2013
 *      Author: mike
 */

#ifndef I2C_H_
#define I2C_H_

#include <linux/i2c-dev.h>

// These functions return -1 on error, otherwise return the number of bytes read/written.
// To perform a 'repeated start' use the i2c_write_read function which can write some
// data and then immediately read data without a stop bit in between.
// I2C::writeRead, I2C::write8, I2C::read8


// These functions return -1 on error, otherwise return 0 on success
// I2C::close, I2C::open

// Provides an inaccurate delay (may be useful for waiting for ADC etc).
// The maximum delay is 999msec
// I2C::delay

class I2C {
private:
	int address;		// Address of the I2C device this object is tied to
	int bus;			// The I2C bus identifier as understood by Linux
	int file;			// The actual file handle used to read and write,
						// this must be given a value by openConnection()
						// and should be closed immediately after use.
	char filename[20];	// Holds the name of the file to open
	void delay(unsigned int);	// A simple delay function, inaccurate
	bool openConnection();		// Opens connection and assigns value to file
	bool closeConnection();		// Cleanly closes the I2C connection

	// bus=1 for interface I2C2 on BBB
	// returns handle to be used in remainder functions
	// addr is a 7-bit value (so, for example the BMP085 datasheet specifies
	// 0xEE, so we need to right-shift by 1 and use 0x77 for this function)

public:
	I2C(int bus, __u16 address);
	~I2C();

	int writeArbritrary(unsigned char*, unsigned int);
	int readArbritrary(unsigned char*, unsigned int);
	int read8(const unsigned char*);
	int write8(unsigned char);
	int writeRead(int, unsigned char, unsigned char *, unsigned int,
	                   unsigned char, unsigned char *, unsigned int);

	//__s32 read16(__u8 reg);
	//__s32 write16(__u8 reg, __u16 data);
};

#endif /* I2C_H_ */
