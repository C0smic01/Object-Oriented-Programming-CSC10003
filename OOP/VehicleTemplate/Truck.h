#pragma once
#include "Vehicle.h"

class Truck: public Vehicle
{
protected:
    float calculateWeightToFuelRatio(float cargo);
public:
    Truck(float fuel, float cargo);
};