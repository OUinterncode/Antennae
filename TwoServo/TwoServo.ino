#include <Servo.h>

Servo servoSetA;

Servo servoSetB;

int posA = 0;
int posB = 0;

void setup()
{
  servoSetA.attach(13);
  servoSetB.attach(12);
}

void loop()
{
  for (int i=0; i<90; i += 1) 
  {
    posA = 180 - i;
    posB = 0 + (i*2);
    
    servoSetA.write(posA);
    servoSetB.write(posB);
    delay(15);   
  }}
