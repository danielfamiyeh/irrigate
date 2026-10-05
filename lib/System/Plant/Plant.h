#pragma once

#include "MoistureSensor/MoistureSensor.h"
#include "TempSensor/TempSensor.h"
#include <vector>

typedef std::vector<Plant> Plants;

enum PlantMoistureProfile { DRY, MODERATE, MOIST };

struct Plant {

  char *name;
  char *variety;
  PlantMoistureProfile MODERATE;
};