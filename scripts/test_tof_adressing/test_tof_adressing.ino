#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {

  Serial.begin(115200);
  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }
  Serial.println("Adafruit VL53L0X test.");
  if (!lox.begin(0x11)) {
    Serial.println(F("Failed to boot VL53L0X"));
    while (1);

  }

  // start continuous ranging
  lox.startRangeContinuous();
}

void loop() {
    if (lox.isRangeComplete()) {
    Serial.print("Distance in mm: ");
    Serial.println(lox.readRange());
  }
}
