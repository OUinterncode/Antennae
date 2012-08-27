// Fading lights

int led = 9;
int brightness = 1;
int fadeScale = 5;

void setup ()
{
  pinMode(led, OUTPUT);
 }
 
 void loop ()
 {
   analogWrite(led, brightness);
   
   brightness = brightness + fadeScale;
   
   if (brightness == 1 || brightness == 255)
      {
        fadeScale = -fadeScale;
       }
       
   delay(50);
       
 }
