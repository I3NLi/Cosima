#include "Vibrator.h"
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

void setup() 
{
  Vibrator vt;
  vt.initializeVibrator(36, 50);
  xTaskCreate(&vt.startVibrate,"Start Vibrating", 2048, NULL, 1, NULL);
  
}


//void loop() 
//{
//  vc.startVibrate(5);  
//  vc.stopVibrate();
//  delay(2000);
//}
