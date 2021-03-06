#ifndef DYNAMIXELSDEFS_H
#define DYNAMIXELSDEFS_H
#endif

// Default setting
#define BAUDRATE                        1000000
#define DEVICENAME                      "/dev/ttyUSB0"      // Check which port is being used on your controller ex) Windows: "COM1"   Linux: "/dev/ttyUSB0"
#define TORQUE_ENABLE                   1                   // Value for enabling the torque
#define TORQUE_DISABLE                  0                   // Value for disabling the torque

// GENERAL
#define ESC_ASCII_VALUE                 0x1b
#define MAXIMUM_NUMBER_DYNAMIXELS       10
#define DXL_MINIMUM_POSITION_VALUE      0                   // Dynamixel will rotate between this value
#define DXL_MAXIMUM_POSITION_VALUE      4095                // and this value (note that the Dynamixel would not move when the position value is out of movable range. Check e-manual about the range of the Dynamixel you use.)
#define DXL_MOVING_STATUS_THRESHOLD     20                  // Dynamixel moving status threshold
#define MAXIMUM_CURRENT					1023

// PRINTING INFO
#define BAUDRATE_INFO                   1
#define ID_ARRAY_INFO                   2
#define POSITION_INFO                   3
#define HEADER_INFO                     4
#define MOVING_INFO                     5
#define DETAILS_INFO					6

// READING DATA
#define ID_DATA							0
#define PROTOCOL_DATA					1
#define FIRMWARE_DATA					2
#define MIN_VOLTAGE_DATA				3
#define MAX_VOLTAGE_DATA				4
#define CURRENT_LIMIT_DATA				5
#define PRESENT_CURRENT_DATA			6
#define MIN_POSITION_LIMIT_DATA			7
#define MAX_POSITION_LIMIT_DATA			8
#define POSITION_DATA 					9
#define PRESENT_INPUT_VOLTAGE_DATA		10
#define MOVING_DATA						11
#define MOVING_STATUS_DATA				12


// MOVING SPEEDS
#define MAXIMUM_MOVING_SPEED			1023
#define MINIMUM_MOVING_SPEED			1

// ADDRESSES
// based on http://support.robotis.com/en/product/dynamixel/x_series/xm430-w350.htm
#define ADDR_PRO_MODEL_NUMBER				0
#define ADDR_PRO_MODEL_INFORMATION			2
#define ADDR_PRO_VERSION_FIRMWARE			6
#define ADDR_PRO_ID                         7
#define ADDR_PRO_BAUD_RATE                  8
#define ADDR_PRO_RETURN_DELAY_TIME			9
#define ADDR_PRO_OPERATING_MODE				11
#define ADDR_PRO_PROTOCOL_VERSION			13
#define ADDR_PRO_HOMING_OFFSET				20
#define ADDR_PRO_MOVING_THRESHOLD			24
#define ADDR_PRO_TEMPERATURE_LIMIT			31
#define ADDR_PRO_MAX_VOLTAGE                32
#define ADDR_PRO_MIN_VOLTAGE                34
#define ADDR_PRO_PWM_LIMIT	                36
#define ADDR_PRO_CURRENT_LIMIT				38
#define ADDR_PRO_ACCELERATION_LIMIT			40
#define ADDR_PRO_VELOCITY_LIMIT				44
#define ADDR_PRO_MAX_POSITION_LIMIT			48
#define ADDR_PRO_MIN_POSITION_LIMIT			52
#define ADDR_PRO_SHUTDOWN					63
#define ADDR_PRO_TORQUE_ENABLE         		64                 // Control table address is different in Dynamixel model
#define ADDR_PRO_LED						65
#define ADDR_PRO_STATUS_RETURN_LEVEL 		68
#define ADDR_PRO_REGISTERED_INSTRUCTION		69
#define ADDR_PRO_HARDWARE_ERROR_STATUS		70
#define ADDR_PRO_VELOCITY_I_GAIN			76
#define ADDR_PRO_VELOCITY_P_GAIN			78
#define ADDR_PRO_VELOCITY_D_GAIN			80
#define ADDR_PRO_POSITION_I_GAIN			82
#define ADDR_PRO_POSITION_P_GAIN			84
#define ADDR_PRO_FEEDFORWARD_2ND_GAIN		88
#define ADDR_PRO_FEEDFORWARD_1ST_GAIN		90
#define ADDR_PRO_GOAL_PWM					100
#define ADDR_PRO_GOAL_CURRENT               102
#define ADDR_PRO_GOAL_VELOCITY 			    104
#define ADDR_PRO_PROFILE_ACCELERATION		108
#define ADDR_PRO_PROFILE_VELOCITY			112
#define ADDR_PRO_GOAL_POSITION          	116
#define ADDR_PRO_REALTIME_TICK				120
#define ADDR_PRO_MOVING						122
#define ADDR_PRO_MOVING_STATUS				123
#define ADDR_PRO_PRESENT_PWM				124
#define ADDR_PRO_PRESENT_CURRENT			126
#define ADDR_PRO_PRESENT_VELOCITY			128
#define ADDR_PRO_PRESENT_POSITION       	132
#define ADDR_PRO_VELOCITY_TRAJECTORY		136
#define ADDR_PRO_POSITION_TRAJECTORY		140
#define ADDR_PRO_PRESENT_INPUT_VOLTAGE		144
#define ADDR_PRO_PRESENT_TEMPERATURE		146

// OPERATING MODES
#define TORQUE_CONTROL_MODE					0
#define VELOCITY_CONTROL_MODE				1
#define POSITION_CONTROL_MODE 				3
#define EXTENTED_POSITION_CONTROL_MODE		4
#define CURRENT_BASED_POSITION_CONTROL		5
#define PWM_CONTROL_MODE					16

// GENERAL
#define ADDR_MODEL_NUMBER 					0
#define ADDR_VERSION_FIRMWARE				2
#define ADDR_ID                         	3
#define ADDR_BAUD_RATE                  	4
#define ADDR_RETURN_DELAY_TIME				5
#define ADDR_CW_ANGLE_LIMIT					6
#define ADDR_CCW_ANGLE_LIMIT				8
#define ADDR_THE_HIGHEST_LIMIT_TEMPERATURE 	11
#define ADDR_THE_LOWEST_LIMIT_VOLTAGE		12
#define ADDR_THE_HIGHEST_LIMIT_VOLTAGE  	13
#define ADDR_MAX_TORQUE						14
#define ADDR_STATUS_RETURN_LEVEL   			16 
#define	ADDR_ALARM_LED						17
#define ADDR_ALARM_SHUTDOWN					18
#define ADDR_MULTI_TURN_OFFSET				20
#define ADDR_RESOLUTION_DIVIDER				22
#define ADDR_TORQUE_ENABLE  				24
#define ADDR_LED 							25
#define ADDR_D_GAIN 						26
#define ADDR_I_GAIN 						27
#define ADDR_P_GAIN 						28
#define ADDR_GOAL_POSITION          		30
#define ADDR_MOVING_SPEED					32
#define ADDR_TORQUE_LIMIT					34
#define ADDR_PRESENT_POSITION       		36
#define ADDR_PRESENT_SPEED					38
#define ADDR_PRESENT_LOAD					40
#define ADDR_PRESENT_VOLTAGE 				42
#define ADDR_PRESENT_TEMPERATURE 			43
#define ADDR_REGISTERED 					44
#define ADDR_MOVING 						46
#define ADDR_LOCK 							47
#define ADDR_PUNCH 							48
#define ADDR_GOAL_ACCELERATION				73

// VELOCITY PROFILES
#define STEP_VELOCITY_PROFILE				0
#define RECTANGLE_VELOCITY_PROFILE			1
#define TRIANGLE_VELOCITY_PROFILE			2
#define TRAPEZOIDAL_VELOCITY_PROFILE		3

// OPERATING MODES
#define WHEEL_MODE							0
#define JOINT_MODE							1
#define MULTI_TURN_MODE 					2

// THRESHOLDS
#define POSITION_THRESHOLD					20 // for setting position


