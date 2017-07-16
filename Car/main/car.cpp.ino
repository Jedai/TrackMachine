#include "car.h"

Car::Car()
{  
}

Car::~Car()
{  
}

void Car::Initialize()
{  
    rightMotor.Initialize(PIN_MOTOR_RIGHT);
    leftMotor.Initialize(PIN_MOTOR_LEFT);

    state = CAR_STATE_IDLE;
    
    // set is active due to no manual control yet
    SetAutopilot(1); 
}

BOOL Car::IsAutopilotActive()
{
    return options.bt.autopilot;
}

void Car::SetAutopilot(DWORD val)
{
    options.bt.autopilot = val;
}

void Car::MoveForward(DWORD distance)
{  
    if(!leftMotor.IsLocked() && !rightMotor.IsLocked())
    {
        if(state != CAR_STATE_ERROR)
        {
            // mm/s -> rpm
            DWORD timeToMove = (distance / carSpeed) / SEC_PER_MINUTE; // (mm / mm\sec) / sec\min = min 
            DWORD carRPM = timeToMove / (CAR_WHEEL_DIAMETR * PI);  // rpm
            
            state = CAR_STATE_MOVE;
            
            leftMotor.GoForward(carRPM);
            rightMotor.GoForward(carRPM);

            delay(timeToMove * MS_PER_MINUTE);
            
            leftMotor.Stop();
            rightMotor.Stop();
        }
        else
        {
            // set error blink
        }
    }
    else
    {
         SetWarningBlink();
    }
}
 
void Car::MoveBackward(DWORD distance)
{  
    MoveForward(0-distance); 
}

void Car::TurnRight(DWORD angle)
{
}

void Car::TurnLeft(DWORD angle)
{  
}

void Car::SetSpeed(DWORD speedVal)
{
    if(speedVal <= CAR_MAX_SPEED)
    {
        carSpeed = speedVal;
    }
}

void Car::StopCar()
{  
    state = CAR_STATE_STOP;
}

void Car::SetWarningBlink()
{
}

CAR_STATE Car::GetCarState()
{
    return state;
}

