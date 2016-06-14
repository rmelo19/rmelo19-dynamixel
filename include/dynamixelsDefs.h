#ifndef DYNAMIXELSDEFS_H
#define DYNAMIXELSDEFS_H
#endif

#ifdef XM430
// ADDRESSES
// based on http://support.robotis.com/en/product/dynamixel/x_series/xm430-w350.htm
#define ADDR_MODEL_NUMBER				0
#define ADDR_MODEL_INFORMATION			2
#define ADDR_VERSION_FIRMWARE			6
#define ADDR_ID                         7
#define ADDR_BAUD_RATE                  8
#define ADDR_RETURN_DELAY_TIME			9
#define ADDR_OPERATING_MODE				11
#define ADDR_PROTOCOL_VERSION			13
#define ADDR_HOMING_OFFSET				20
#define ADDR_MOVING_THRESHOLD			24
#define ADDR_TEMPERATURE_LIMIT			31
#define ADDR_MAX_VOLTAGE                32
#define ADDR_MIN_VOLTAGE                34
#define ADDR_PWM_LIMIT	                36
#define ADDR_CURRENT_LIMIT				38
#define ADDR_ACCELERATION_LIMIT			40
#define ADDR_VELOCITY_LIMIT				44
#define ADDR_MAX_POSITION_LIMIT			48
#define ADDR_MIN_POSITION_LIMIT			52
#define ADDR_SHUTDOWN					63
#define ADDR_TORQUE_ENABLE          64                 // Control table address is different in Dynamixel model
#define ADDR_LED						65
#define ADDR_STATUS_RETURN_LEVEL 		68
#define ADDR_REGISTERED_INSTRUCTION		69
#define ADDR_HARDWARE_ERROR_STATUS		70
#define ADDR_VELOCITY_I_GAIN			76
#define ADDR_VELOCITY_P_GAIN			78
#define ADDR_VELOCITY_D_GAIN			80
#define ADDR_POSITION_I_GAIN			82
#define ADDR_POSITION_P_GAIN			84
#define ADDR_FEEDFORWARD_2ND_GAIN		88
#define ADDR_FEEDFORWARD_1ST_GAIN		90
#define ADDR_GOAL_PWM					100
#define ADDR_GOAL_CURRENT               102
#define ADDR_GOAL_VELOCITY 			    104
#define ADDR_PROFILE_ACCELERATION		108
#define ADDR_PROFILE_VELOCITY			112
#define ADDR_GOAL_POSITION          	116
#define ADDR_REALTIME_TICK				120
#define ADDR_MOVING						122
#define ADDR_MOVING_STATUS				123
#define ADDR_PRESENT_PWM				124
#define ADDR_PRESENT_CURRENT			126
#define ADDR_PRESENT_VELOCITY			128
#define ADDR_PRESENT_POSITION       	132
#define ADDR_VELOCITY_TRAJECTORY		136
#define ADDR_POSITION_TRAJECTORY		140
#define ADDR_PRESENT_INPUT_VOLTAGE		144
#define ADDR_PRESENT_TEMPERATURE		146



#endif