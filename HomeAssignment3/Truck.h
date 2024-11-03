#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

// Configuration structure for Truck
struct TruckConfig : public VehicleConfig {
    int payloadCapacity; // Payload capacity

    // Constructor for TruckConfig
    TruckConfig(const std::string& model, int year, int fuelLevel, int capacity)
        : VehicleConfig{model, year, fuelLevel}, payloadCapacity(capacity) {}
};

class Truck : public Vehicle {
public:
    Truck(const TruckConfig& config); // Declaration
    int getPayloadCapacity() const;

private:
    int _payloadCapacity;
};

#endif