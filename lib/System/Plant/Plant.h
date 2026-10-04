#pragma once

#include "../System/MoistureSensor/MoistureSensor.h"
#include "../System/TempSensor/TempSensor.h"

enum PlantMoistureProfile { DRY, MODERATE, MOIST };

struct Plant {

  char *name;
  char *variety;
  PlantMoistureProfile MODERATE;
};
