#pragma once

#include "Sensor.h"
#include <sys/types.h>
#include <vector>

enum SensorType { MOISTURE_SENSOR, TEMP_SENSOR };
int sensorDelaysMs[] = {1000, 1500};

struct Sensor {
  uint8_t pin;
  long val;
  long max;
  long min;
  SensorType type;
  ulong tick;

  static Sensor init(SensorType type, uint8_t pin, long min, long max);
  int read(long delta);
};