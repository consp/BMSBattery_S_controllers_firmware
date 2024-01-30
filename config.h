/*
 * config.h
 *
 *  Automatically created by OSEC Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_PAS_MAGS 10
#define limit 28
#define timeout 3125
#define wheel_circumference 2230L
#define limit_without_pas 25
#define ADC_THROTTLE_MIN_VALUE 43
#define ADC_THROTTLE_MAX_VALUE 183
#define BATTERY_VOLTAGE_MIN_VALUE 80L
#define BATTERY_CURRENT_MAX_VALUE 45L
#define PHASE_CURRENT_MAX_VALUE 135L
#define REGEN_CURRENT_MAX_VALUE 23L
#define current_cal_a 30
#define LEVEL_1 12
#define LEVEL_2 21
#define LEVEL_3 30
#define LEVEL_4 59
#define LEVEL_5 100
#define MORSE_TIME_1 50
#define MORSE_TIME_2 50
#define MORSE_TIME_3 50
#define RAMP_END 1500
#define P_FACTOR 0.5
#define I_FACTOR 0.2
#define GEAR_RATIO 12L
#define PAS_THRESHOLD 1.9
#define RAMP_START 64000
#define limit_with_throttle_override 35
#define CORRECTION_AT_ANGLE 127

#define TQS_CALIB 0.0
#define ACA 4764 
#define EEPROM_INIT_MAGIC_BYTE 173 // makes sure (chance of fail 1/255) eeprom is invalidated after flashing new config
#define ADC_BATTERY_VOLTAGE_K 69
#define ACA_EXPERIMENTAL 128
#define BATTERY_VOLTAGE_MAX_VALUE 110
#define WALK_ASSIST_SPEED_LIMIT 6
#define WALK_ASSIST_CURRENT_TARGET 5

#define ANGLE_4_0 1
#define ANGLE_6_60 44
#define ANGLE_2_120 91
#define ANGLE_3_180 126
#define ANGLE_1_240 176
#define ANGLE_5_300 216

#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 173


//#define USE_FIELD_WEAKENING
#define SWAP_PHASES 3

#define HALL_SENSOR_MODE_REVERSED
/*
 * pick one
 */

#define DISPLAY_TYPE_KT_LCD8
//#define DISPLAY_TYPE_KT_LCD3
//#define DIAGNOSTICS
//#define BLUOSEC
//#define TT
//
#endif /* CONFIG_H_ */
