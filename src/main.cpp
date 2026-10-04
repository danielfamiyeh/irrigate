#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include "System.h"
#include <Arduino.h>
#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

  System sys;
  sys.setup();
}

void loop() { Serial.println("Alive"); }