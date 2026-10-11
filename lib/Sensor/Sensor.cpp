#include "Sensor.h"
#include <Arduino.h>

int Sensor::read(long delta) {
  if (delta < sensorDelaysMs[type])
    return;

  val = analogRead(pin);
  tick = delta;
};

Sensor Sensor::init(SensorType type, uint8_t pin, long min, long max) {
  return Sensor{pin, 0, min, max, type, 0};
};
