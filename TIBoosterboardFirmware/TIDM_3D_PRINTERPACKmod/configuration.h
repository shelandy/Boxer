#ifndef PARAMETERS_H
#define PARAMETERS_H

/* Modified by Ryan Brown for Texas Instruments
        Original project is Tonokip, repository: https://github.com/tonokip/Tonokip-Firmware
	Works with Energia for MSP430F5529 now, not Arduino
	December 2014
        This code is licensed as GPLv2
   For use with the 3D Printerpack
*/

// NO RS485/EXTRUDER CONTROLLER SUPPORT
// PLEASE VERIFY PIN ASSIGNMENTS FOR YOUR CONFIGURATION!!!!!!!
#define MOTHERBOARD 10 // MSP-EXP430F5529LP

// THERMOCOUPLE SUPPORT UNTESTED... USE WITH CAUTION!!!!
const bool USE_THERMISTOR = true; //Set to false if using thermocouple
const int max_adc_val = 4095;

// Calibration formulas
// e_extruded_steps_per_mm = e_feedstock_steps_per_mm * (desired_extrusion_diameter^2 / feedstock_diameter^2)
// new_axis_steps_per_mm = previous_axis_steps_per_mm * (test_distance_instructed/test_distance_traveled)
// units are in millimeters or whatever length unit you prefer: inches,football-fields,parsecs etc

//Calibration variables
//For Mix G1
//float x_steps_per_unit = 80;
//float y_steps_per_unit = 80;
//float z_steps_per_unit = 2560;
//float e_steps_per_unit = 140;

//For Prusa i3v
//Filament Extruder Values
float x_steps_per_unit = 81.5829;
float y_steps_per_unit = 80;
float z_steps_per_unit = 4015;
float e_steps_per_unit = 922.476;
//[(Amount Of Extrusion We Asked For)/(Actual Measured Distance Traveled)]*(Current E-step Value)

//Paste Extruder Values
//float x_steps_per_unit = 80;
//float y_steps_per_unit = 80;
//float z_steps_per_unit = 6088.25;
//float e_steps_per_unit = 13150;//[(Amount Of Extrusion We Asked For)/(Actual Measured Distance Traveled)]*(Current E-step Value)

float z_max_feedrate = 200;
float max_feedrate = 3000;
float homing_feedrate[] = {2000,2000,200};

//For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
const bool X_ENABLE_ON = 0;
const bool Y_ENABLE_ON = 0;
const bool Z_ENABLE_ON = 0;
const bool E_ENABLE_ON = 0;

//Disables axis when it's not being used.
const bool DISABLE_X = false;
const bool DISABLE_Y = false;
const bool DISABLE_Z = true;
const bool DISABLE_E = false;

const bool INVERT_X_DIR = false;
const bool INVERT_Y_DIR = false;
const bool INVERT_Z_DIR = true;
const bool INVERT_E_DIR = false;

//Endstop Settings
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

const bool ENDSTOPS_INVERTING = true; // Inverting to true for Acrylic Prusa i3
const bool ENDSTOPPULLUPS = true;
const bool min_software_endstops = false; //If true, axis won't move to coordinates less than zero.
const bool max_software_endstops = true;  //If true, axis won't move to coordinates greater than the defined lengths below.
const int X_MAX_LENGTH = 200;
const int Y_MAX_LENGTH = 200;
const int Z_MAX_LENGTH = 120;

//Axis Definitions
#define X_AXIS 0
#define Y_AXIS 1
#define Z_AXIS 2
#define E_AXIS 3

#define BAUDRATE 9600

#endif
