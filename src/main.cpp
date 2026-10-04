#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include <Arduino.h>
#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);
}

void loop() { Serial.println("Alive"); }