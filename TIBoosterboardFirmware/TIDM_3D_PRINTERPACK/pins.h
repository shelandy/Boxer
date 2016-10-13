#ifndef PINS_h
#define PINS_h

#include <Energia.h>

#define ALARM_PIN          -1
/* Modified by Akeem W. for Texas Instruments
        Original project is Tonokip, repository: https://github.com/tonokip/Tonokip-Firmware
	Works with Energia for MSP430F5529 now, not Arduino
	October 2014
        This code is licensed as GPLv2
   For use with the 3D Printerpack
*/
/****************************************************************************************
* Energia MSP-EXP430F5529LP pin assignment
*         	 J1-J3                              J4-J1
*     VCC  | 1  21 |  5V             HEATER0  | 40 20 |  GND
*  THERM0  | 2  22 |  GND                FAN  | 39 19 |  X-STEP
*    P3.4  | 3  23 |  Z-STEP             LED  | 38 18 |  X-DIR
*    P3.3  | 4  24 |  Z-DIR            Z-MIN  | 37 17 |  SLEEP
* HEATER1  | 5  25 |  Z-EN PWM+        Y-MAX  | 36 16 |  RST
*  THERM1  | 6  26 |  E0-STEP          Y-MIN  | 35 15 |  SIMO
*    SCLK  | 7  27 |  E0-DIR            X-EN  | 34 14 |  SOMI
*   Z-MAX  | 8  28 |  E0-EN           Y-STEP  | 33 13 |  X-MAX
*     4.2  | 9  29 |  Y-DIR              3.7  | 32 12 |  X-MIN
*     4.1  | 10 30 |  Y-EN               8.2  | 31 11 |  SD_CS
*           +---+                              +----+
****************************************************************************************/
#if MOTHERBOARD == 10
#define RAMPS_V_1_4		//was _3
#endif
#if MOTHERBOARD == 10	//was 3
#define KNOWN_BOARD 1

//////////////////FIX THIS//////////////
/*#ifndef __LaunchPad_w/_msp430f5529_(16MHz)__ 		//was __AVR_ATmega1280__
 #ifndef __LaunchPad_w/_msp430f5529_(16MHz)__		//was __AVR_ATmega2560__
 #error Oops!  Make sure you have 'LaunchPad w/ msp430f5529' selected from the 'Tools -> Boards' menu.
 #endif
#endif*/

// uncomment one of the following lines for RAMPS v1.3 or v1.0, comment both for v1.2 or 1.1
// #define RAMPS_V_1_3
// #define RAMPS_V_1_0

#ifdef RAMPS_V_1_4

#define X_STEP_PIN         19//29//54
#define X_DIR_PIN          18//31//55
#define X_ENABLE_PIN       34//48//38
#define X_MIN_PIN          12//32// 3
#define X_MAX_PIN          -1//35//-1   //2 //Max endstops default to disabled "-1", set to commented value to enable.

#define Y_STEP_PIN         33//45//60
#define Y_DIR_PIN          29//43//61
#define Y_ENABLE_PIN       30//42//56
#define Y_MIN_PIN          35////14
#define Y_MAX_PIN          -1//24//-1   //15

#define Z_STEP_PIN         23//77//46
#define Z_DIR_PIN          24//78//48
#define Z_ENABLE_PIN       25//79//62
#define Z_MIN_PIN          37//25//18
#define Z_MAX_PIN          -1//36//-1   //19

#define E_STEP_PIN         26//80//26
#define E_DIR_PIN          27//1//28
#define E_ENABLE_PIN       28//5//24

#define E_1_STEP_PIN       -1//36
#define E_1_DIR_PIN        -1//34
#define E_1_ENABLE_PIN     -1//30

#define SDPOWER            -1//-1 Pending
#define SDSS               11//42//53 Pending
#define SS_PIN             11//Same definition as SDSS
#define LED_PIN            38//26//13
#define FAN_PIN            39//33// 9
#define PS_ON_PIN          -1//12	
#define KILL_PIN           -1//-1 Pending
#define ALARM_PIN          -1//-1

#define HEATER_0_PIN       40//34//10
#define HEATER_1_PIN       5//27// 8
#define TEMP_0_PIN          A5//13   // ANALOG 
#define TEMP_1_PIN          A6//14   // ANALOG 
#define TEMP_2_PIN         -1//15   // ANALOG NUMBERING
#endif

// SPI for Max6675 Thermocouple 

#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support  
  #define SCK_PIN          7//39//52
  #define MISO_PIN         14//38//50
  #define MOSI_PIN         15//37//51
  #define MAX6675_SS       -1//53
#else
  #define MAX6675_SS       -1//49
#endif

#ifndef KNOWN_BOARD
#error Unknown MOTHERBOARD value in configuration.h
#endif


//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
const int sensitive_pins[] = {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, E_STEP_PIN, E_DIR_PIN, E_ENABLE_PIN, LED_PIN, PS_ON_PIN, HEATER_0_PIN, HEATER_1_PIN, FAN_PIN, TEMP_0_PIN, TEMP_1_PIN};

#endif


#endif
