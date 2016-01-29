#include "Shield2AMotor.h"

// Connect 4 pin on SHIELD-2AMOTOR to "Signed Magnitude" mode
Shield2AMotor motor(SIGNED_MAGNITUDE);

signed int leftSpeed, rightSpeed;

int i;

void setup()
{
  
}

void loop()
{
  // Rotate 360 degree CW
  for(i = 0; i < 50; i++)
  {
    motor.control(100, 0);
    motor.control(0, 100);
    delay(10);
    motor.control(0, 100);
    motor.control(-100, 0);
    delay(10);
    motor.control(-100, 0);
    motor.control(0, -100);
    delay(10);
    motor.control(0, -100);
    motor.control(100, 0);
    delay(10);
  }
  delay(1000);

  // Rotate 360 degree CCW
  for(i = 0; i < 50; i++)
  {
    motor.control(0, -100);
    motor.control(-100, 0);
    delay(10);
    motor.control(-100, 0);
    motor.control(0, 100);
    delay(10);
    motor.control(0, 100);
    motor.control(100, 0);
    delay(10);
    motor.control(100, 0);
    motor.control(0, -100);
    delay(10);
  }
  delay(1000);
}