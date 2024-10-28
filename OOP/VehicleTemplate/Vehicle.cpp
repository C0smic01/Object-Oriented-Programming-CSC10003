#include "Vehicle.h"
// Placeholder to be replaced with the actual implementation in the derived classes
float Vehicle::calculateWeightToFuelRatio(float cargo)
{
    return 0.0f;
}

Vehicle::Vehicle(float fuel, float cargo)
{
    Vehicle::remainingFuel = fuel;
    Vehicle::cargoWeight = cargo;
    Vehicle::fuelConsumptionRate = calculateWeightToFuelRatio(Vehicle::cargoWeight);
}

float Vehicle::getFuel()
{
    return Vehicle::remainingFuel;
}

void Vehicle::addFuel(float fuel)
{
    Vehicle::remainingFuel += fuel;
}

void Vehicle::addCargo(float cargo)
{
    Vehicle::cargoWeight += cargo;
    Vehicle::fuelConsumptionRate = Vehicle::calculateWeightToFuelRatio(Vehicle::cargoWeight);
}

void Vehicle::removeCargo(float cargo)
{
    Vehicle::cargoWeight -= cargo;
    Vehicle::fuelConsumptionRate = Vehicle::calculateWeightToFuelRatio(Vehicle::cargoWeight);
}

bool Vehicle::fuelEmpty()
{
    if (Vehicle::remainingFuel > 0)
    {
        return false;
    }
    else return true;
}

void Vehicle::runVehicle(float distance)
{
    float fuelNeeded = distance * Vehicle::fuelConsumptionRate / 100;
    if (fuelNeeded > Vehicle::remainingFuel)
    {
        cout << "Not enough fuel to run for " << distance << " km." << endl;
    }
    else
    {
        Vehicle::remainingFuel -= fuelNeeded;
        cout << "Vehicle ran for " << distance << " km." << endl;
        cout << "Remaining fuel: " << Vehicle::remainingFuel << " liters." << endl;
        cout << "Cargo's weight: " << Vehicle::cargoWeight << " kg." << endl;
    }
}