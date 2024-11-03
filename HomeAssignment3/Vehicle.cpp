/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Vehicle.h"

Vehicle::Vehicle(VehicleConfig config)
    : _model(config.model), _year(config.year), _fuelLevel(config.fuelLevel) {
}

void Vehicle::drive() {
    if (_fuelLevel <= 0) {
        std::cerr << "Not enough fuel to drive\n";
        return;
    }
    std::cout << "Driving " << _model << "\n";
    _fuelLevel--;
}

void Vehicle::refuel(int amount) {
    _fuelLevel += amount;
}

std::string Vehicle::getModel() const {
    return _model;
}

int Vehicle::getYear() const {
    return _year;
}

int Vehicle::getFuelLevel() const {
    return _fuelLevel;
}

void Vehicle::setEngine(Engine* engine) {
    _engine = engine;
}

Engine* Vehicle::getEngine() const {
    return _engine;
}

Vehicle::~Vehicle() {
}