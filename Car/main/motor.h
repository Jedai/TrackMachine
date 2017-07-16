#ifndef _MOTOR_H_
#define _MOTOR_H_

#include "types.h"

class Motor
{
     DWORD pin;

     union _MotorOptions
     {
         DWORD dw;
         struct
         {       
              DWORD lock : 1;   
         } bt;
     } options;

public:

    Motor();
    virtual ~Motor();

    void Initialize(DWORD);

    BOOL IsLocked();
    void Lock();
    void Unlock();

    void GoForward(DWORD);
    void GoBackward(DWORD);
    void Stop();
};

#endif
