/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Car.h"

// Constructor definition for Car
Car::Car(const CarConfig& config) 
    : Vehicle(VehicleConfig{config.model, config.year, config.fuelLevel}), // Create VehicleConfig and initialize base class
      _numberOfDoors(config.numberOfDoors) // Initialize member variable
{
    // Additional constructor logic (if any)
}

// Implement other member functions
int Car::getNumberOfDoors() const {
    return _numberOfDoors;
}