#ifndef _TYPES_H_
#define _TYPES_H_

#define BYTE    unsigned char
#define WORD    unsigned short
#define DWORD   unsigned int
#define BOOL    bool

//
// HW definitions
//

// digital pins 0 - 13
#define PIN_MOTOR_RIGHT    1
#define PIN_MOTOR_LEFT     2
#define PIN_LED            3
#define PIN_DM             4 // ultrasonic
#define PIN_CTRL           5 // manual control \ radio module

// motor analog data
#define MOTOR_POWER_STOP   0
#define MOTOR_POWER_1RPM   1 // analog pin out value in 1 rpm (0...255)

//
// SW definitions
//
#define CAR_MAX_SPEED          100
#define CAR_DIAMETR_MULTIPLIER 10
#define CAR_WHEEL_DIAMETR      50.7 // 50.7 mm

#define MOTOR_SPINDLE_DIAMETR  10

#define SEC_PER_MINUTE     60
#define MS_PER_SECOND      1000
#define MS_PER_MINUTE      (SEC_PER_MINUTE * MS_PER_SECOND)

#endif // !_TYPES_H_
