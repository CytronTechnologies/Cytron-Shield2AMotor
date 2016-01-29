#include "Arduino.h"
#include "Shield2AMotor.h"

Shield2AMotor::Shield2AMotor(boolean mode)
{
  pinMode(DIR1, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(DIR2, OUTPUT);
  
  digitalWrite(DIR1, LOW);
  digitalWrite(EN1, LOW);
  digitalWrite(EN2, LOW);
  digitalWrite(DIR2, LOW);
  
  _mode = mode;
}

void Shield2AMotor::control(signed int motor1Speed, signed int motor2Speed)
{
  if(_mode == false)
  {
    if(motor1Speed >= 0)
    {
      if(motor1Speed > 100) motor1Speed = 100;
      motor1Speed = motor1Speed * 2.5;
      analogWrite(EN1, motor1Speed);
      digitalWrite(DIR1, LOW);
    }
    else if(motor1Speed < 0)
    {
      if(motor1Speed < -100) motor1Speed = -100;
      motor1Speed = motor1Speed * -2.5;
      analogWrite(EN1, motor1Speed);
      digitalWrite(DIR1, HIGH);
    }
    
    if(motor2Speed >= 0)
    {
      if(motor2Speed > 100) motor2Speed = 100;
      motor2Speed = motor2Speed * 2.5;
      analogWrite(EN2, motor2Speed);
      digitalWrite(DIR2, LOW);
    }
    else if(motor2Speed < 0)
    {
      if(motor2Speed < -100) motor2Speed = -100;
      motor2Speed = motor2Speed * -2.5;
      analogWrite(EN2, motor2Speed);
      digitalWrite(DIR2, HIGH);
    }
  }
  else if(_mode == true)
  {
    if(motor1Speed >= 0)
    {
      if(motor1Speed > 100) motor1Speed = 100;
      motor1Speed = (motor1Speed * -1.27) + 127;
      analogWrite(EN1, motor1Speed);
      digitalWrite(DIR1, HIGH);
    }
    else if(motor1Speed < 0)
    {
      if(motor1Speed < -100) motor1Speed = -100;
      motor1Speed = (motor1Speed * -1.27) + 127;
      analogWrite(EN1, motor1Speed);
      digitalWrite(DIR1, HIGH);
    }
    
    if(motor2Speed >= 0)
    {
      if(motor2Speed > 100) motor2Speed = 100;
      motor2Speed = (motor2Speed * -1.27) + 127;
      analogWrite(EN2, motor2Speed);
      digitalWrite(DIR2, HIGH);
    }
    else if(motor2Speed < 0)
    {
      if(motor2Speed < -100) motor2Speed = -100;
      motor2Speed = (motor2Speed * -1.27) + 127;
      analogWrite(EN2, motor2Speed);
      digitalWrite(DIR2, HIGH);
    }
  }
}

