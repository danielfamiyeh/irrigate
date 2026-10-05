#pragma once

#include "MoistureSensor/MoistureSensor.h"
#include "TempSensor/TempSensor.h"
#include <vector>

enum PlantMoistureProfile { DRY, MODERATE, MOIST };

struct Plant {

  char *name;
  char *variety;
  PlantMoistureProfile MODERATE;
};

typedef std::vector<Plant> Plants;