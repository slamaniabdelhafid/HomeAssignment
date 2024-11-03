/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Truck.h"

// Constructor definition for Truck
Truck::Truck(const TruckConfig& config) 
    : Vehicle(VehicleConfig{config.model, config.year, config.fuelLevel}), // Initialize base class
      _payloadCapacity(config.payloadCapacity) // Initialize member variable
{
    // Additional constructor logic (if any)
}

// Implement other member functions
int Truck::getPayloadCapacity() const {
    return _payloadCapacity;
}