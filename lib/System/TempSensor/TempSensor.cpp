#include "./TempSensor.h"
#include <Arduino.h>

void TempSensor::loop(ulong delta) {
  if (delta < TEMP_SENSOR_DELAY_MS)
    return;

  val = analogRead(pin);
}