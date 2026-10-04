#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "System.h"
#include <Arduino.h>
#include <Wire.h>

System sys;

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

  sys.setup();
}

void loop() { sys.loop(); }