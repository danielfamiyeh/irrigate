#include "System.h"

void System::setup() {
  screen->setup();

  plants.push_back(Plant{"Plant 1", "Tiger Aloe", PlantMoistureProfile::DRY});
  plants.push_back(
      Plant{"Plant 2", "Monstera", PlantMoistureProfile::MODERATE});

  int i;
  for (auto &plant : plants) {
    sensors.moisture.push_back({i, 2000, 1500});
    sensors.temperature.push_back({20, 9, 20});
  }
}
void System::loop() {}