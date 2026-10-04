#include "Controller/Controller.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"
#include <Arduino.h>
#include <Wire.h>

Controller ctrl;

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

  ctrl.setup();
}

void loop() { ctrl.loop(); }