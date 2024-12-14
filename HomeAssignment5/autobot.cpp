/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#include "autobot.h"
#include <string>
#include <iostream>

// +1 when an object is created

// Constructor
Autobot::Autobot(std::string moral, std::string vehicle) {
    _moralAlignment = moral;
    _groundVehicle = vehicle;
    autobotCounter++;
}

Autobot::Autobot() {
    autobotCounter++;
}

std::string Autobot::getMoralAlignemt() const {
    return _moralAlignment;
}

void Autobot::setMoralAlignmet(std::string newMoralAlignment) {
    _moralAlignment = newMoralAlignment;
}

std::string Autobot::getGroundVehicle() const {
    return _groundVehicle;
}

void Autobot::setGroundVehicle(std::string newGroundVehicle) {
    _groundVehicle = newGroundVehicle;
}

// Information about the transformer
void Autobot::aboutRobot() {
    std::cout << "Moral Alignment: " << _moralAlignment << "\n";
    std::cout << "Ground Vehicle: " << _groundVehicle << "\n";
}

// Implementing the virtual methods
void Autobot::transform() {
    std::cout << "Transform method in Autobot class" << std::endl;
}

void Autobot::openFire() {
    std::cout << "OpenFire method in Autobot class" << std::endl;
}

void Autobot::ultra() {
    std::cout << "Ultra method in Autobot class" << std::endl;
}