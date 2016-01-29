#ifndef SHIELD2AMOTOR_h
#define SHIELD2AMOTOR_h

#include "Arduino.h"

#define DIR1 4
#define EN1  5
#define EN2  6
#define DIR2 7
#define SIGNED_MAGNITUDE  false
#define LOCKED_ANTI_PHASE true

class Shield2AMotor
{
  public:
    boolean _mode;
    Shield2AMotor(boolean mode);
    void control(signed int motor1Speed, signed int motor2Speed);
};

#endif
