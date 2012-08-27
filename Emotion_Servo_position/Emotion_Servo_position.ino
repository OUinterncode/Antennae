#include <Servo.h>

Servo servoSetTop;

Servo servoSetBottom;

int posA = 0;
int posB = 45;
int posC = 90;
int posD = 135;
int posE = 180;

const int buttonPin1 = 2;
const int buttonPin2 = 4;
const int buttonPin3 = 6;
const int buttonPin4 = 8;
int buttonState = 0;
 
void setup()
{
  servoSetTop.attach(13);
  servoSetBottom.attach(12);
  
  servoSetTop.write(posA);
  servoSetBottom.write(posC);
  delay(15);
  
  servoSetTop.write(posC);
  servoSetBottom.write(posC);
  delay(15);
  
  servoSetTop.write(posA);
  servoSetBottom.write(posC);
  delay(15);
}

void loop ()
{
}
