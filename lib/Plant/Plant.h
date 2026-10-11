#pragma once

#include <vector>

enum PlantMoistureProfile { DRY, MODERATE, MOIST };

struct Plant {
  char *name;
  char *variety;
  PlantMoistureProfile MODERATE;
};