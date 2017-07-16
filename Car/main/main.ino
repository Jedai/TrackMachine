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
        car.MoveForward(100);   
        car.StopCar();  
        delay(100); 
    }
    else
    {
        // process commands from manual control      
    }
}
