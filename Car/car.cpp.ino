#include "car.h"

Car::Car()
{  
}

Car::~Car()
{  
}

void Car::Initialize()
{  
      options.bt.autopilot = 0;

      rightMotor.Initialize();
      leftMotor.Initialize();
}

bool Car::IsAutopilotActive()
{
      return options.bt.autopilot == 1;
}

void Car::MoveForward(DWORD distance)
{  
      if(!leftMotor.Locked() && !rightMotor.Locked())
      {
      }
      else
      {
           SetWarningBlink();
      }
}
 
void Car::MoveBackward(DWORD distance)
{  
     MoveForward(0-distance); // ?
}

void Car::TurnRight(DWORD angle)
{
}

void Car::TurnLeft(DWORD angle)
{  
}

void Car::SetWarningBlink()
{
}

