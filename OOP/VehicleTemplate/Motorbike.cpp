#include "Motorbike.h"

float Motorbike::calculateWeightToFuelRatio(float cargo)
{
    return 2 + cargo * 0.1 / 10;
}

Motorbike::Motorbike(float fuel, float cargo): Vehicle(fuel, cargo)
{
    fuelConsumptionRate = calculateWeightToFuelRatio(cargo);
}
