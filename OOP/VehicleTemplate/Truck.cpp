#include "Truck.h"

float Truck::calculateWeightToFuelRatio(float cargo)
{
    return 20 + cargo * 1 / 1000;
}

Truck::Truck(float fuel, float cargo): Vehicle(fuel, cargo)
{
    fuelConsumptionRate = calculateWeightToFuelRatio(cargo);
}

