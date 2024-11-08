#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "Engine.h"

struct VehicleConfig {
    const std::string model;
    const int year;
    const int fuelLevel;
};

class Vehicle {
public:
    Vehicle(VehicleConfig config);
    void drive();
    void refuel(int amount);
    std::string getModel() const;
    int getYear() const;
    int getFuelLevel() const;

    void setEngine(Engine* engine);
    Engine* getEngine() const;

    virtual ~Vehicle();

    // Overload the output operator
    friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
        os << "Vehicle model: " << vehicle.getModel() 
           << ", Year: " << vehicle.getYear() 
           << ", Fuel Level: " << vehicle.getFuelLevel();
        return os;
    }

private:
    std::string _model;
    int _year;
    int _fuelLevel;
    Engine* _engine = nullptr;
};

#endif