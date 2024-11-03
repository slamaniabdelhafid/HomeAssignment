/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
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

private:
    std::string _model;
    int _year;
    int _fuelLevel;
    Engine* _engine = nullptr;
};

#endif