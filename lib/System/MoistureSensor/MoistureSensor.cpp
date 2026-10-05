#include "MoistureSensor.h"
#include <Arduino.h>

void MoistureSensor::loop(ulong delta) {
  if (delta < MOISTURE_SENSOR_DELAY_MS)
    return;

  val = analogRead(pin);
}