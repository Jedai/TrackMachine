#ifndef _CAR_H_
#define _CAR_H_

#include "motor.h"

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

      Motor rightMotor;
      Motor leftMotor;

public:

   Car();
   virtual ~Car();

   void Initialize();

   bool IsAutopilotActive();
   
   // move
   void MoveForward(DWORD distance);
   void MoveBackward(DWORD distance);
   
   void TurnRight(DWORD angle);
   void TurnLeft(DWORD angle);

   void SetWarningBlink();
};

#endif
