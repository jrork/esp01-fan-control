#include <Arduino.h>

int TIP120pin = 3; // PWM signal out to transistor on pin 9
int i = 0;
void setup()
{
  pinMode(TIP120pin, OUTPUT);
}

void loop()
{
  analogWrite(TIP120pin, 255); // Run full speed (255) 
    delay(3000);               // for 3 seconds
  analogWrite(TIP120pin, 150); // Run at approximately 40% speed
    delay(6000);               // for 6 seconds
//while (i<256) {
//  analogWrite(TIP120pin, i);
//  i++;
//  delay(100);
//}
//while(i>0){
//  analogWrite(TIP120pin, i);
//  i--;
//  delay(100);
//}
}