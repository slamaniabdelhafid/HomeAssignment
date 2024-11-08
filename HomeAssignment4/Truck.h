/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
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
    Truck(const std::string& model, int year, int fuelLevel, int capacity) // Overloaded constructor
        : Vehicle(VehicleConfig{model, year, fuelLevel}), _payloadCapacity(capacity) {}

    int getPayloadCapacity() const;

    // Overload the output operator
    friend std::ostream& operator<<(std::ostream& os, const Truck& truck) {
        os << "Truck model: " << truck.getModel() 
           << ", Year: " << truck.getYear() 
           << ", Fuel Level: " << truck.getFuelLevel() 
           << ", Payload Capacity: " << truck.getPayloadCapacity();
        return os;
    }

    // Overload comparison operator
    bool operator<(const Truck& other) const {
        return _payloadCapacity < other.getPayloadCapacity(); // Compare by payload capacity
    }

private:
    int _payloadCapacity;
};

#endif