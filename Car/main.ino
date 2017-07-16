#include "car.h"

Car car;

void setup() 
{
     car.Initialize();
}

void loop() 
{
    if(car.IsAutopilotActive())
    {
          car.MoveForward(0);      
    }
    else
    {
          // process commands from manual control      
    }
}
