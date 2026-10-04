#pragma once

#include "../System/MoistureSensor/MoistureSensor.h"
#include "../System/TempSensor/TempSensor.h"

namespace System {
enum PlantMoistureProfile { DRY, MODERATE, MOIST };

struct Plant {

  char *name;
  char *variety;
  PlantMoistureProfile MODERATE;
  MoistureSensor moisture;
  TempSensor temp;
};

}; // namespace System