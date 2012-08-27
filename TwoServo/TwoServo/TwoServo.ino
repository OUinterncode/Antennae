#include <Servo.h>

Servo servoSetH;

Servo servoSetV;

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
  servoSetA.attach(13);
  servoSetB.attach(12);
  
  servoSetA.write(posA);
  servoSetB.write(posA);
  delay(15);
  
  pinMode (buttonPin1, INPUT);
  pinMode (buttonPin2, INPUT);
  pinMode (buttonPin3, INPUT);
  pinMode (buttonPin4, INPUT);
}

void loop()
{
  //sadness  
  buttonState = digitalRead (buttonPin1);
    if (buttonState == HIGH) 
    {
      servoSetV.write.(posE);
      servoSetH.write.(posE);
       }
       
    //happiness
    buttonState = digitalRead (buttonPin2);
    if (buttonState == HIGH) 
    {
      servoSetV.write.(posC);
      servoSetH.write.(posC);
       }
       
    //anger
    buttonState = digitalRead (buttonPin3);
    if (buttonState == HIGH) 
    {
      servoSetV.write.(posA);
      servoSetH.write.(posC);
       }
       
    //neutral
    buttonState = digitalRead (buttonPin4);
    if (buttonState == HIGH) 
    {
      servoSetV.write.(posB);
      servoSetH.write.(posC);
       }
  }
