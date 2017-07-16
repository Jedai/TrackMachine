#include "motor.h"

Motor::Motor()
{  
}

Motor::~Motor()
{
}

void Motor::Initialize()
{
}

DWORD Motor::Locked()
{
    return options.bt.lock;
}

