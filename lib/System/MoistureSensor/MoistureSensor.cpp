#include "MoistureSensor.h"

namespace System {
    bool MoistureSensor::needsWater(){
        return MoistureSensor::val < MoistureSensor::min;
    }
}