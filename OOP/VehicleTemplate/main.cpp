#include "Truck.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int choice1 = 0;
        cout << "1. Motorbike\n2. Truck\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice1;
        if (choice1 == 1)
        {
            float fuel = 0.0f, 
                cargo = 0.0f;
            cout << "Enter fuel(liter): ";
            cin >> fuel;
            cout << "Enter cargo's weight(kg): ";
            cin >> cargo;
            Motorbike motorbike(fuel, cargo);
            while (true)
            {
                int choice2 = 0;
                cout << "1. Add cargo\n2. Remove cargo\n3. Add fuel\n4. Run vehicle\n5. Check if motorbike is out of fuel\n6. Get fuel\n7. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice2;
                if (choice2 == 1)
                {
                    float cargoToAdd = 0.0f;
                    cout << "Enter cargo's weight to add: ";
                    cin >> cargoToAdd;
                    motorbike.addCargo(cargoToAdd);
                }
                else if (choice2 == 2)
                {
                    float cargoToRemove = 0.0f;
                    cout << "Enter cargo's weight to remove: ";
                    cin >> cargoToRemove;
                    motorbike.removeCargo(cargoToRemove);
                }
                else if (choice2 == 3)
                {
                    float fuelToAdd = 0.0f;
                    cout << "Enter fuel to add: ";
                    cin >> fuelToAdd;
                    motorbike.addFuel(fuelToAdd);
                }
                else if (choice2 == 4)
                {
                    float distance = 0.0f;
                    cout << "Enter distance: ";
                    cin >> distance;
                    motorbike.runVehicle(distance);
                }
                else if (choice2 == 5)
                {
                    if (motorbike.fuelEmpty())
                    {
                        cout << "Motorbike is out of fuel.\n";
                    }
                    else
                    {
                        cout << "Motorbike is not out of fuel.\n";
                    }
                }
                else if (choice2 == 6)
                {
                    cout << "Fuel: " << motorbike.getFuel() << " liters.\n";
                }
                else if (choice2 == 7)
                {
                    break;
                }
                else
                {
                    cout << "Invalid choice\n";
                }
            } 
        }
        else if (choice1 == 2)
        {
            float fuel = 0.0f, 
                cargo = 0.0f;
            cout << "Enter fuel(liter): ";
            cin >> fuel;
            cout << "Enter cargo(kg): ";
            cin >> cargo;
            Truck truck(fuel, cargo);
            while (true)
            {
                int choice2 = 0;
                cout << "1. Add cargo\n2. Remove cargo\n3. Add fuel\n4. Run vehicle\n5. Check if truck is out of fuel\n6. Get fuel\n7. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice2;
                if (choice2 == 1)
                {
                    float cargoToAdd = 0.0f;
                    cout << "Enter cargo's weight to add: ";
                    cin >> cargoToAdd;
                    truck.addCargo(cargoToAdd);
                }
                else if (choice2 == 2)
                {
                    float cargoToRemove = 0.0f;
                    cout << "Enter cargo's weight to remove: ";
                    cin >> cargoToRemove;
                    truck.removeCargo(cargoToRemove);
                }
                else if (choice2 == 3)
                {
                    float fuelToAdd = 0.0f;
                    cout << "Enter fuel to add: ";
                    cin >> fuelToAdd;
                    truck.addFuel(fuelToAdd);
                }
                else if (choice2 == 4)
                {
                    float distance = 0.0f;
                    cout << "Enter distance: ";
                    cin >> distance;
                    truck.runVehicle(distance);
                }
                else if (choice2 == 5)
                {
                    if (truck.fuelEmpty())
                    {
                        cout << "Truck is out of fuel.\n";
                    }
                    else
                    {
                        cout << "Truck is not out of fuel.\n";
                    }
                }
                else if (choice2 == 6)
                {
                    cout << "Fuel: " << truck.getFuel() << " liters.\n";
                }
                else if (choice2 == 7)
                {
                    break;
                }
                else
                {
                    cout << "Invalid choice\n";
                }
            }
        }
        else if (choice1 == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}