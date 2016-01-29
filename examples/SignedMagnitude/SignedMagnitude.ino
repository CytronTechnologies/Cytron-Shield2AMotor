#include "Shield2AMotor.h"

// Connect 4 pin on SHIELD-2AMOTOR to "Signed Magnitude" mode
Shield2AMotor motor(SIGNED_MAGNITUDE);

signed int motor1Speed, motor2Speed;

void setup()
{
  
}

void loop()
{
  // Control motor1 speed
  // Value range from -100 (max CCW) to 100 (max CW)
  // -ve value represent opposite direction to +ve value
  for(motor1Speed = 0; motor1Speed < 100; motor1Speed++)
  {
    motor.control(motor1Speed, 0);
    delay(100);
  }
  for(motor1Speed = 100; motor1Speed > -100; motor1Speed--)
  {
    motor.control(motor1Speed, 0);
    delay(100);
  }
  for(motor1Speed = -100; motor1Speed < 0; motor1Speed++)
  {
    motor.control(motor1Speed, 0);
    delay(100);
  }

  // Control motor2 speed motor
  // Value range from -100 (max CCW) to 100 (max CW)
  // -ve value represent opposite direction to +ve value
  for(motor2Speed = 0; motor2Speed < 100; motor2Speed++)
  {
    motor.control(0, motor2Speed);
    delay(100);
  }
  for(motor2Speed = 100; motor2Speed > -100; motor2Speed--)
  {
    motor.control(0, motor2Speed);
    delay(100);
  }
  for(motor2Speed = -100; motor2Speed < 0; motor2Speed++)
  {
    motor.control(0, motor2Speed);
    delay(100);
  }
}