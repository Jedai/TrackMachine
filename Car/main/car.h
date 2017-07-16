#ifndef _CAR_H_
#define _CAR_H_

#include "motor.h"

typedef enum _CarState
{
    CAR_STATE_IDLE,
    CAR_STATE_STOP,
    CAR_STATE_MOVE,
    CAR_STATE_TURN,
    CAR_STATE_ERROR,
} CAR_STATE;

class Car
{
    union _ParameterBits
    {
          DWORD dw;
          struct
          {
               DWORD autopilot : 1;                 
          } bt;
    } options;
    
    CAR_STATE state;
    
    DWORD carSpeed;  // assume mm/sec ?
      
    Motor rightMotor;
    Motor leftMotor;
    
public:

    Car();
    virtual ~Car();

    void Initialize();

    void SetAutopilot(DWORD);
    BOOL IsAutopilotActive();
   
    void SetSpeed(DWORD);
    
    // move to distance in milimeters
    void MoveForward(DWORD distance);
    void MoveBackward(DWORD distance);
   
    void TurnRight(DWORD angle);
    void TurnLeft(DWORD angle);

    void StopCar();

    CAR_STATE GetCarState();
    
    void SetWarningBlink();
};

#endif
