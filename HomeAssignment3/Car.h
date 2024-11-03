#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// Configuration structure for Car
struct CarConfig : public VehicleConfig {
    int numberOfDoors; // Number of doors

    // Constructor for CarConfig
    CarConfig(const std::string& model, int year, int fuelLevel, int doors)
        : VehicleConfig{model, year, fuelLevel}, numberOfDoors(doors) {}
};

class Car : public Vehicle {
public:
    Car(const CarConfig& config); // Declaration
    int getNumberOfDoors() const;

private:
    int _numberOfDoors;
};

#endif