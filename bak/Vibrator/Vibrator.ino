#include "VibratorControl.h"

Vibrator   vc;
void setup() 
{
  
}

void loop() 
{
  vc.startVibrate(5);  
  vc.stopVibrate();
  delay(2000);
}
