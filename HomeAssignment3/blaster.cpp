/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blaster.h"

double blaster::getCapacity() {
    return _capacity;
}

void blaster::setCapacity(double newCapacity) {
    _capacity = newCapacity;
}

std::string blaster::getSpeed() {
    return _speed;
}

void blaster::setSpeed(std::string& newSpeed) {
    _speed = newSpeed;
}