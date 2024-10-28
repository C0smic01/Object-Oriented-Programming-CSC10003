#pragma once
#include "Vehicle.h"

class Motorbike: public Vehicle
{
protected:
    float calculateWeightToFuelRatio(float cargo);
public:
    Motorbike(float fuel, float cargo);
};