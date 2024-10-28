#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    float remainingFuel;
    float cargoWeight;
    float fuelConsumptionRate;
    virtual float calculateWeightToFuelRatio(float cargo);

public:
    Vehicle(float fuel, float cargo);
    float getFuel();
    void addFuel(float fuel);
    void addCargo(float cargo);
    void removeCargo(float cargo);
    bool fuelEmpty();
    void runVehicle(float distance);
};