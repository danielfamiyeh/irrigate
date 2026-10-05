#include "Controller/Controller.h"
#include "Plant/Plant.h"
#include "Screen/Screen.h"

#include "config.h"

#include <Arduino.h>

Controller<> ctrl;

void setup() {
  ctrl.setup();

  ctrl.plants.push_back(
      Plant{"Plant 1", "Tiger Aloe", PlantMoistureProfile::DRY});
  ctrl.plants.push_back(
      Plant{"Plant 2", "Monstera", PlantMoistureProfile::MODERATE});

  int i;
  for (auto &plant : ctrl.plants) {
    ctrl.sensors.moisture.push_back(MoistureSensor{i, 2000, 1500, 1000});
    ctrl.sensors.temperature.push_back(TempSensor{20, 9, 20});
  }
}

void loop() { ctrl.loop(); }