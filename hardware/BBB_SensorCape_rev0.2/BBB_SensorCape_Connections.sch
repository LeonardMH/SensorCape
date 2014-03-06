EESchema Schematic File Version 2
LIBS:custom
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:dips-s
LIBS:BBB_SensorCape-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date "8 jul 2013"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text GLabel 1200 1200 0    60   Input ~ 0
I2C_SDA_2
Text GLabel 1200 1400 0    60   Input ~ 0
I2C_SCL_2
$Comp
L R R21
U 1 1 51BE4789
P 1500 1200
F 0 "R21" V 1580 1200 40  0000 C CNN
F 1 "4.7k" V 1507 1201 40  0000 C CNN
F 2 "~" V 1430 1200 30  0000 C CNN
F 3 "~" H 1500 1200 30  0000 C CNN
	1    1500 1200
	0    -1   -1   0   
$EndComp
$Comp
L R R22
U 1 1 51BE478F
P 1500 1400
F 0 "R22" V 1580 1400 40  0000 C CNN
F 1 "4.7k" V 1507 1401 40  0000 C CNN
F 2 "~" V 1430 1400 30  0000 C CNN
F 3 "~" H 1500 1400 30  0000 C CNN
	1    1500 1400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1200 1200 1250 1200
Wire Wire Line
	1200 1400 1250 1400
Wire Wire Line
	1750 1200 1800 1200
Wire Wire Line
	1800 1200 1800 1400
Wire Wire Line
	1800 1400 1750 1400
Wire Wire Line
	1800 1300 1850 1300
Connection ~ 1800 1300
Text GLabel 1850 1300 2    60   Input ~ 0
3V3B
Wire Wire Line
	3100 2000 3050 2000
Text GLabel 3050 2000 0    60   Input ~ 0
3V3A
Wire Wire Line
	3900 2000 3950 2000
Text GLabel 3950 2000 2    60   Input ~ 0
3V3B
$Comp
L GND #PWR026
U 1 1 51BE4B59
P 2950 1900
F 0 "#PWR026" H 2950 1900 30  0001 C CNN
F 1 "GND" H 2950 1830 30  0001 C CNN
F 2 "" H 2950 1900 60  0000 C CNN
F 3 "" H 2950 1900 60  0000 C CNN
	1    2950 1900
	0    1    1    0   
$EndComp
Wire Wire Line
	3100 1900 2950 1900
$Comp
L GND #PWR027
U 1 1 51BE4B79
P 4100 1900
F 0 "#PWR027" H 4100 1900 30  0001 C CNN
F 1 "GND" H 4100 1830 30  0001 C CNN
F 2 "" H 4100 1900 60  0000 C CNN
F 3 "" H 4100 1900 60  0000 C CNN
	1    4100 1900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3900 1900 4100 1900
Wire Wire Line
	3100 4000 3050 4000
Wire Wire Line
	3050 4000 3050 4200
Wire Wire Line
	3100 4100 3050 4100
Connection ~ 3050 4100
Wire Wire Line
	3900 4000 3950 4000
Wire Wire Line
	3950 4000 3950 4200
Wire Wire Line
	3900 4100 3950 4100
Connection ~ 3950 4100
Wire Wire Line
	3950 4200 3050 4200
$Comp
L GND #PWR028
U 1 1 51BE4C2C
P 3500 4250
F 0 "#PWR028" H 3500 4250 30  0001 C CNN
F 1 "GND" H 3500 4180 30  0001 C CNN
F 2 "" H 3500 4250 60  0000 C CNN
F 3 "" H 3500 4250 60  0000 C CNN
	1    3500 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 4200 3500 4250
Connection ~ 3500 4200
Wire Wire Line
	3100 2700 3050 2700
Wire Wire Line
	3900 2700 3950 2700
Wire Wire Line
	3100 2800 3050 2800
Wire Wire Line
	3900 2800 3950 2800
Text GLabel 3950 2700 2    51   Input ~ 0
I2C_SDA_1
Text GLabel 3950 2800 2    51   Input ~ 0
I2C_SDA_2
Text GLabel 3050 2700 0    51   Input ~ 0
I2C_SCL_1
Text GLabel 3050 2800 0    51   Input ~ 0
I2C_SCL_2
$Comp
L GND #PWR029
U 1 1 51BE4CD7
P 800 1900
F 0 "#PWR029" H 800 1900 30  0001 C CNN
F 1 "GND" H 800 1830 30  0001 C CNN
F 2 "" H 800 1900 60  0000 C CNN
F 3 "" H 800 1900 60  0000 C CNN
	1    800  1900
	0    1    1    0   
$EndComp
$Comp
L GND #PWR030
U 1 1 51BE4CE6
P 1800 1900
F 0 "#PWR030" H 1800 1900 30  0001 C CNN
F 1 "GND" H 1800 1830 30  0001 C CNN
F 2 "" H 1800 1900 60  0000 C CNN
F 3 "" H 1800 1900 60  0000 C CNN
	1    1800 1900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	900  1900 800  1900
Wire Wire Line
	1700 1900 1800 1900
NoConn ~ 1700 2800
NoConn ~ 1700 2900
NoConn ~ 900  2900
NoConn ~ 900  3000
NoConn ~ 1700 3000
NoConn ~ 900  3100
NoConn ~ 900  3200
NoConn ~ 1700 3200
NoConn ~ 900  3300
NoConn ~ 1700 3300
NoConn ~ 1700 3400
NoConn ~ 1700 3500
NoConn ~ 1700 3600
NoConn ~ 1700 3700
NoConn ~ 1700 3800
NoConn ~ 1700 3900
NoConn ~ 1700 4000
NoConn ~ 1700 4100
NoConn ~ 900  4100
NoConn ~ 900  4000
NoConn ~ 900  3900
NoConn ~ 900  3800
NoConn ~ 900  3700
NoConn ~ 900  3600
NoConn ~ 900  3500
NoConn ~ 900  3400
NoConn ~ 1700 2000
NoConn ~ 1700 2100
NoConn ~ 900  2000
NoConn ~ 900  2100
NoConn ~ 3100 2100
NoConn ~ 3900 2100
NoConn ~ 3100 2200
NoConn ~ 3900 2200
NoConn ~ 3100 2300
NoConn ~ 3900 2300
Text GLabel 1700 2300 2    51   Input ~ 0
LED1
Text GLabel 900  2200 0    51   Input ~ 0
LED3
Text GLabel 900  2300 0    51   Input ~ 0
LED2
Text GLabel 1700 2200 2    51   Input ~ 0
LED4
Wire Wire Line
	3100 2900 3050 2900
Wire Wire Line
	3900 2900 3950 2900
Wire Wire Line
	3100 3000 3050 3000
Wire Wire Line
	3900 3000 3950 3000
Text GLabel 3100 3100 0    51   Input ~ 0
SW1
Text GLabel 3950 3000 2    51   Input ~ 0
SW3
Text GLabel 3050 3000 0    51   Input ~ 0
SW2
Text GLabel 3900 3100 2    51   Input ~ 0
SW4
Text GLabel 3950 2900 2    51   Input ~ 0
INT_M
Text GLabel 3900 2400 2    51   Input ~ 0
INT_T
Text GLabel 900  2400 0    51   Input ~ 0
INT_LT
Text GLabel 3100 2400 0    51   Input ~ 0
IR
$Comp
L CONN_23X2 P8
U 1 1 51C524F2
P 1300 3100
F 0 "P8" H 1300 4400 60  0000 C CNN
F 1 "CONN_23X2" V 1300 3100 50  0000 C CNN
F 2 "~" H 1300 3100 60  0000 C CNN
F 3 "~" H 1300 3100 60  0000 C CNN
	1    1300 3100
	1    0    0    -1  
$EndComp
$Comp
L CONN_23X2 P9
U 1 1 51C52501
P 3500 3100
F 0 "P9" H 3500 4400 60  0000 C CNN
F 1 "CONN_23X2" V 3500 3100 50  0000 C CNN
F 2 "~" H 3500 3100 60  0000 C CNN
F 3 "~" H 3500 3100 60  0000 C CNN
	1    3500 3100
	1    0    0    -1  
$EndComp
Text GLabel 900  2700 0    51   Input ~ 0
AL
Text GLabel 900  2800 0    51   Input ~ 0
AH
$EndSCHEMATC
