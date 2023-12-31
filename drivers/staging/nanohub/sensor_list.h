/*
 *  Copyright (C) 2015, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef __SSP_SENSORS_H__
#define __SSP_SENSORS_H__

#define SENSOR_NAME_MAX_LEN		35

/* SENSOR_TYPE */
enum {
	ACCELEROMETER_SENSOR = 0,
	GYROSCOPE_SENSOR,
	GEOMAGNETIC_UNCALIB_SENSOR,
	GEOMAGNETIC_RAW,
	GEOMAGNETIC_SENSOR,
	PRESSURE_SENSOR,
	GESTURE_SENSOR,
	PROXIMITY_SENSOR,
	TEMPERATURE_HUMIDITY_SENSOR,
	LIGHT_SENSOR,
	PROXIMITY_RAW,
	ORIENTATION_SENSOR = 12,
	STEP_DETECTOR = 13,
	SIG_MOTION_SENSOR,
	GYRO_UNCALIB_SENSOR,
	GAME_ROTATION_VECTOR = 16,
	ROTATION_VECTOR,
	STEP_COUNTER,
	BIO_HRM_RAW,
	BIO_HRM_RAW_FAC,
	BIO_HRM_LIB,
	SHAKE_CAM = 23,
	LIGHT_IR_SENSOR = 24,
	INTERRUPT_GYRO_SENSOR = 25,
	TILT_DETECTOR,
	PICKUP_GESTURE,
	BULK_SENSOR,
	GPS_SENSOR,
	PROXIMITY_ALERT_SENSOR,
	LIGHT_FLICKER_SENSOR,
	LIGHT_CCT_SENSOR,
	ACCEL_UNCALIB_SENSOR = 33,
	THERMISTOR_SENSOR,
	PROXIMITY_POCKET,
	WAKE_UP_MOTION,
	MOVE_DETECTOR,
	CALL_GESTURE,
	PROXIMITY_ADC_CALIB = 39,
	UNCAL_LIGHT_SENSOR = 40,
	POCKET_MODE_SENSOR = 41,
	LED_COVER_EVENT_SENSOR = 42,
	TAP_TRACKER_SENSOR = 44,
	SHAKE_TRACKER_SENSOR = 45,
	//touch pocket reserved = 46
	LIGHT_SEAMLESS_SENSOR = 47,
	AUTOROTATION_SENSOR = 48,
	FLIP_COVER_DETECTOR = 49,
	SAR_BACKOFF_MOTION = 50,
	SENSOR_MAX,
	META_SENSOR = 200,
};

/* Sensors's reporting mode */
#define REPORT_MODE_CONTINUOUS	0
#define REPORT_MODE_ON_CHANGE	1
#define REPORT_MODE_SPECIAL	2
#define REPORT_MODE_UNKNOWN	3

#define SCONTEXT_DATA_SIZE		72


struct sensor {
	char *name;
	int type;
	bool wakeup;
	int report_mode;
	int get_data_len;
	int report_data_len;
};

#define SENSOR_INFO_UNKNOWN					{"", -1, false,	REPORT_MODE_UNKNOWN, 0, 0}
#define SENSOR_INFO_ACCELEROMETER			{"accelerometer_sensor", ACCELEROMETER_SENSOR, false, REPORT_MODE_CONTINUOUS, 6, 6}
#define SENSOR_INFO_GEOMAGNETIC				{"geomagnetic_sensor", GEOMAGNETIC_SENSOR, false, REPORT_MODE_CONTINUOUS, 14, 14}
#define SENSOR_INFO_GEOMAGNETIC_POWER		{"geomagnetic_power", GEOMAGNETIC_RAW, false, REPORT_MODE_CONTINUOUS, 6, 0}
#define SENSOR_INFO_GEOMAGNETIC_UNCAL		{"uncal_geomagnetic_sensor", GEOMAGNETIC_UNCALIB_SENSOR, false, REPORT_MODE_CONTINUOUS, 25, 25}
#define SENSOR_INFO_GYRO					{"gyro_sensor", GYROSCOPE_SENSOR, false, REPORT_MODE_CONTINUOUS, 12, 12}
#define SENSOR_INFO_GYRO_UNCALIBRATED		{"uncal_gyro_sensor", GYRO_UNCALIB_SENSOR, false, REPORT_MODE_CONTINUOUS, 24, 24}
#define SENSOR_INFO_INTERRUPT_GYRO			{"interrupt_gyro_sensor", INTERRUPT_GYRO_SENSOR, false, REPORT_MODE_ON_CHANGE, 12, 12}
#define SENSOR_INFO_PRESSURE			{"pressure_sensor", PRESSURE_SENSOR, false, REPORT_MODE_CONTINUOUS, 6, 12}
#define SENSOR_INFO_LIGHT				{"light_sensor", LIGHT_SENSOR, false, REPORT_MODE_ON_CHANGE, 30, 30}
#define SENSOR_INFO_UNCAL_LIGHT			{"uncal_light_sensor", UNCAL_LIGHT_SENSOR, false, REPORT_MODE_CONTINUOUS, 29, 29}
#define SENSOR_INFO_LIGHT_IR			{"light_ir_sensor", LIGHT_IR_SENSOR, false, REPORT_MODE_ON_CHANGE, 23, 23}
#define SENSOR_INFO_LIGHT_CCT			{"light_cct_sensor", LIGHT_CCT_SENSOR, false, REPORT_MODE_ON_CHANGE, 35, 35}
#define SENSOR_INFO_LIGHT_FLICKER			{"light_flicker_sensor", LIGHT_FLICKER_SENSOR, false, REPORT_MODE_ON_CHANGE, 2, 2}

#define SENSOR_INFO_PROXIMITY			{"proximity_sensor", PROXIMITY_SENSOR, true, REPORT_MODE_ON_CHANGE, 11, 11} 
#define SENSOR_INFO_PROXIMITY_ALERT			{"proximity_alert_sensor", PROXIMITY_ALERT_SENSOR, true, REPORT_MODE_ON_CHANGE, 3, 1}
#define SENSOR_INFO_PROXIMITY_RAW			{"proximity_raw", PROXIMITY_RAW, false, REPORT_MODE_ON_CHANGE, 2, 2}
#define SENSOR_INFO_PROXIMITY_ADC_CALIB		{"proximity_adc_calib", PROXIMITY_ADC_CALIB, false, REPORT_MODE_ON_CHANGE, 6, 0}
#define SENSOR_INFO_ROTATION_VECTOR			{"rotation_vector_sensor", ROTATION_VECTOR, false, REPORT_MODE_CONTINUOUS, 17, 17}
#define SENSOR_INFO_GAME_ROTATION_VECTOR		{"game_rotation_vector", GAME_ROTATION_VECTOR, false, REPORT_MODE_CONTINUOUS, 17, 17}
#define SENSOR_INFO_SIGNIFICANT_MOTION		{"sig_motion_sensor", SIG_MOTION_SENSOR, true, REPORT_MODE_SPECIAL, 1, 1}
#define SENSOR_INFO_STEP_DETECTOR			{"step_det_sensor", STEP_DETECTOR, false, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_STEP_COUNTER			{"step_cnt_sensor", STEP_COUNTER, false, REPORT_MODE_ON_CHANGE, 4, 8}
#define SENSOR_INFO_TILT_DETECTOR			{"tilt_detector", TILT_DETECTOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_PICK_UP_GESTURE			{"pickup_gesture", PICKUP_GESTURE, true, REPORT_MODE_CONTINUOUS, 1, 1}
#define SENSOR_INFO_SCONTEXT			{"scontext_iio", META_SENSOR+1, true, REPORT_MODE_CONTINUOUS, 0, 64}
#define SENSOR_INFO_THERMISTOR			{"thermistor_sensor", THERMISTOR_SENSOR, true, REPORT_MODE_SPECIAL, 3, 3}
#define SENSOR_INFO_PROXIMITY_POCKET		{"proximity_pocket", PROXIMITY_POCKET, true, REPORT_MODE_CONTINUOUS, 3, 1}
#define SENSOR_INFO_ACCEL_UNCALIBRATED		{"uncal_accel_sensor", ACCEL_UNCALIB_SENSOR, false, REPORT_MODE_CONTINUOUS, 12, 12}
#define SENSOR_INFO_META				{"meta_event", META_SENSOR, true, REPORT_MODE_CONTINUOUS, 8, 8}
#define SENSOR_INFO_WAKE_UP_MOTION			{"wake_up_motion", WAKE_UP_MOTION, true, REPORT_MODE_CONTINUOUS, 1, 1}
#define SENSOR_INFO_MOVE_DETECTOR			{"move_detector", MOVE_DETECTOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_CALL_GESTURE			{"call_gesture", CALL_GESTURE, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_POCKET_MODE			{"pocket_mode", POCKET_MODE_SENSOR, true, REPORT_MODE_ON_CHANGE, 62, 62}
#define SENSOR_INFO_LED_COVER_EVENT			{"led_cover_event", LED_COVER_EVENT_SENSOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_TAP_TRACKER			{"tap_tracker", TAP_TRACKER_SENSOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_SHAKE_TRACKER			{"shake_tracker", SHAKE_TRACKER_SENSOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_LIGHT_SEAMLESS			{"light_seamless", LIGHT_SEAMLESS_SENSOR, true, REPORT_MODE_ON_CHANGE, 4, 4}
#define SENSOR_INFO_FLIP_COVER_DETECTOR		{"flip_cover_detector", FLIP_COVER_DETECTOR, true, REPORT_MODE_ON_CHANGE, 33, 20}
#define SENSOR_INFO_AUTOROTATION			{"autorotation", AUTOROTATION_SENSOR, true, REPORT_MODE_ON_CHANGE, 1, 1}
#define SENSOR_INFO_SAR_BACKOFF_MOTION		{"sarbackoffmotion", SAR_BACKOFF_MOTION, true, REPORT_MODE_SPECIAL, 1, 1}
#define SENSOR_INFO_FILE_MANAGER			{"file_manager", META_SENSOR+2, true, REPORT_MODE_ON_CHANGE, 1, 1}	
#endif
