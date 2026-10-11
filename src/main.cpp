#include "config.h"

#include "Controller.h"
#include <Arduino.h>

Controller<> ctrl;

void setup() {
  ctrl.setup();

  Sensor tempSensors[6];
  for (int i = 0; i < NUM_MOISTURE_SENSORS; i++) {
    ctrl.sensors.push_back(Sensor::init(MOISTURE_SENSOR, i, -1000, 1000));
  }

  for (int i = 0; i < NUM_TEMP_SENSORS; i++) {
    ctrl.sensors.push_back(Sensor::init(TEMP_SENSOR, i + 8, -1000, 1000));
  }
}

void loop() { ctrl.loop(); }