/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#include "blaster.h"

// Constructor
Blaster::Blaster() : _capacity(0), _speed("0") {}

// Getters and Setters
double Blaster::getCapacity() {
    return _capacity;
}

void Blaster::setCapacity(double newCapacity) {
    _capacity = newCapacity;
}

std::string Blaster::getSpeed() {
    return _speed;
}

void Blaster::setSpeed(std::string& newSpeed) {
    _speed = newSpeed;
}

// Implementing the virtual methods
void Blaster::transform() {
    std::cout << "Transform method in Blaster class" << std::endl;
}

void Blaster::openFire() {
    std::cout << "OpenFire method in Blaster class" << std::endl;
}

void Blaster::ultra() {
    std::cout << "Ultra method in Blaster class" << std::endl;
}