/*
 * i2c.cpp
 *
 *  Created on: Jul 8, 2013
 *      Author: mike
 */

#include "i2c.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h> // open();
#include <unistd.h> // close();
#include <sys/ioctl.h> // ioctl();

#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <errno.h>
#include <time.h>
#include <string.h>

I2C::I2C(int bus, __u16 address) {
	file = 0;
	this->address = address;
	this->bus = bus;
}

I2C::~I2C() {
	// Deallocate memory and free pointers
}

void I2C::delay(unsigned int msec) {
  int ret;
  struct timespec a;
  if (msec>999)
  {
    fprintf(stderr, "delay error: delay value needs to be less than 999\n");
    msec=999;
  }
  a.tv_nsec=((long)(msec)) * 1000000;
  a.tv_sec=0;
  if ((ret = nanosleep(&a, NULL)) != 0) {
    fprintf(stderr, "delay error: %s\n", strerror(errno));
  }
  return;
}

bool I2C::openConnection() {
	snprintf(filename, 19, "/dev/i2c-%d", bus);
	file = open(filename, O_RDWR);
	if (file < 0) {
		return false;
	}

	if (ioctl(file, I2C_SLAVE, address) < 0) {
		return false;
	}

	return true;
}

bool I2C::closeConnection() {
	address = 0;
	if (close(file) != 0) {
		return false;
	}

	return true;
}

int I2C::writeArbritrary(unsigned char* buf, unsigned int length) {
	this->openConnection();
	if (write(file, buf, length) != length) {
		fprintf(stderr, "i2c_write error: %s\n", strerror(errno));
		return(-1);
	}
	this->closeConnection();
	return(length);
}

int I2C::readArbritrary(unsigned char* buf, unsigned int length) {
	this->openConnection();
	if (read(file, buf, length) != length) {
		fprintf(stderr, "i2c_read error: %s\n", strerror(errno));
		return(-1);
	}
	this->closeConnection();
	return(length);
}

//__s32 I2C::read8(__u8 reg) {
//	// Read a byte
//	this->openConnection();
//
//	__s32 result;
//	result = i2c_smbus_read_byte_data(file, reg);
//	if (result < 0) {
//		// Error handling here
//	}
//
//	this->closeConnection();
//	return result;
//}
//
//int I2C::write8(__u8 reg, __u8 data) {
//	// Write a byte
//	this->openConnection();
//
//	__s32 result;
//	result = i2c_smbus_write_byte_data(file, reg, data);
//	if (result < 0) {
//		// Error handling here
//	}
//
//	this->closeConnection();
//	return result;
//}
//

int I2C::write8(unsigned char val) {
	this->openConnection();
	if (write(file, &val, 1) != 1) {
		fprintf(stderr, "i2c_write_byte error: %s\n", strerror(errno));
		this->closeConnection();
		return(-1);
	}
	this->closeConnection();
	return(1);
}

int I2C::read8(unsigned char* val) {
	this->openConnection();
	if (read(file, val, 1) != 1) {
		fprintf(stderr, "i2c_read_byte error: %s\n", strerror(errno));
		this->closeConnection();
		return(-1);
	}
	this->closeConnection();
	return(1);
}

//int I2C::read16(__u8 reg) {
//	// Read a word
//	this->openConnection();
//
//	__s32 result;
//	result = i2c_smbus_read_word_data(file, reg);
//	if (result < 0) {
//		// Error handling here
//	}
//
//	this->closeConnection();
//	return result;
//}
//
//int I2C::write16(__u8 reg, __u16 data) {
//	// Write a word
//	this->openConnection();
//
//	__s32 result;
//	result = i2c_smbus_write_byte_data(file, reg, data);
//	if (result < 0) {
//		// Error handling here
//	}
//
//	this->closeConnection();
//	return result;
//}

int I2C::writeRead(int handle,
                   unsigned char addr_w, unsigned char *buf_w, unsigned int len_w,
                   unsigned char addr_r, unsigned char *buf_r, unsigned int len_r) {
	struct i2c_rdwr_ioctl_data msgset;
	struct i2c_msg msgs[2];

	msgs[0].addr=addr_w;
	msgs[0].len=len_w;
	msgs[0].flags=0;
	msgs[0].buf=buf_w;

	msgs[1].addr=addr_r;
	msgs[1].len=len_r;
	msgs[1].flags=1;
	msgs[1].buf=buf_r;

	msgset.nmsgs=2;
	msgset.msgs=msgs;

	if (ioctl(handle,I2C_RDWR,(unsigned long)&msgset)<0) {
		fprintf(stderr, "i2c_write_read error: %s\n",strerror(errno));
		return -1;
	}

	return(len_r);
}
