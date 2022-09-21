#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(115200);

  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
    lox.begin();
    lox.setAddress(0x11);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
