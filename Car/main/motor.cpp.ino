#include "motor.h"

Motor::Motor()
{  
}

Motor::~Motor()
{
}

void Motor::Initialize(DWORD _pin)
{
    pin = _pin;

    pinMode(pin, OUTPUT);
    
    Unlock();
}

BOOL Motor::IsLocked()
{
    return options.bt.lock;
}

void Motor::Lock()
{
    options.bt.lock = 1;
}

void Motor::Unlock()
{
    options.bt.lock = 0;
}

void Motor::GoForward(DWORD rpm)
{      
    analogWrite(pin, rpm / MOTOR_POWER_1RPM);
}

void Motor::GoBackward(DWORD rpm)
{
}

void Motor::Stop()
{
    analogWrite(pin, MOTOR_POWER_STOP);
}

