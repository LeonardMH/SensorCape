/*
 * i2c.cpp
 *
 *  Created on: Jul 8, 2013
 *      Author: mike
 */

#include "i2c.h"
#include <linux/i2c-dev.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h> // open();
#include <unistd.h> // close();
#include <sys/ioctl.h> // ioctl();

I2C::I2C(int bus, int address) {
	this->address = address;
	this->bus = bus;
}

I2C::~I2C() {
	// Deallocate memory and free pointers
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
	if(close(file) < 0) return false;
	return true;
}

__s32 I2C::read8(__u8 reg) {
	// Read a byte
	this->openConnection();

	char buffer[10];

	if(read(file, buffer, 1) != 1) {
		// ERROR
	}

	this->closeConnection();
	return (__s32)atoi(buffer);
}

int I2C::write8(__u8 reg) {
	// Write a byte
	this->openConnection();

	// TODO: Implement write8();

	this->closeConnection();
}

int I2C::read16(__u8 reg) {
	// Read a word
	this->openConnection();

	// TODO: Implement read16();

	this->closeConnection();
}

int I2C::write16(__u8 reg) {
	// Write a word
	this->openConnection();

	// TODO: Implement write16();

	this->closeConnection();
}




