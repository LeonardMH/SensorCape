################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lib/SensorCape.cpp \
../lib/led.cpp \
../lib/motion.cpp 

OBJS += \
./lib/SensorCape.o \
./lib/led.o \
./lib/motion.o 

CPP_DEPS += \
./lib/SensorCape.d \
./lib/led.d \
./lib/motion.d 


# Each subdirectory must supply rules for building sources it contributes
lib/%.o: ../lib/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabi-g++ -std=gnu++11 -I/usr/arm-linux-gnueabi/include/c++/4.7.2 -I/usr/arm-linux-gnueabi/include/c++/4.7.2/arm-linux-gnueabi -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


