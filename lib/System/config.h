#pragma once

#include <sys/types.h>

// Controller
constexpr ulong BAUD_RATE = 115200UL;

// Screen
constexpr ulong SDA_PIN = 21;
constexpr ulong SCL_PIN = 22;

// Buttons
constexpr uint8_t CHANGE_PLANT_BUTTON_PIN = 18;
constexpr uint8_t RELEASE_WATER_BUTTON_PIN = 19;

// Mux
constexpr uint8_t MUX_SELECT_PINS[4] = {10, 11, 13, 12};
constexpr uint8_t MUX_COM_PIN = 1;