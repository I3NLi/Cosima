#include "USControl.h"


USControl   us;
void setup() {
  // put your setup code here, to run once:

  us.setPins(18, 19);
  us.setBaudRate(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  us.detectPulse();
}
