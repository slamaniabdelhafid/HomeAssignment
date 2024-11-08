/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
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
    Car(const std::string& model, int year, int fuelLevel, int doors) // Overloaded constructor
        : Vehicle(VehicleConfig{model, year, fuelLevel}), _numberOfDoors(doors) {}

    int getNumberOfDoors() const;

    // Overload the output operator
    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Car model: " << car.getModel() 
           << ", Year: " << car.getYear() 
           << ", Fuel Level: " << car.getFuelLevel() 
           << ", Number of Doors: " << car.getNumberOfDoors();
        return os;
    }

    // Overload comparison operator
    bool operator<(const Car& other) const {
        return getYear() < other.getYear(); // Use getYear() to compare
    }

private:
    int _numberOfDoors;
};

#endif