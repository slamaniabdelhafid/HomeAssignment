/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blaster.h"

// Constructors
Blaster::Blaster(const unsigned int &power, const unsigned int &capacity) 
    : _power(power), _capacity(capacity) {}

Blaster::Blaster() : _power(0), _capacity(0) {}

// Setters
void Blaster::setPower(const unsigned int &power) { _power = power; }
void Blaster::setCapacity(const unsigned int &capacity) { _capacity = capacity; }

// Getters
unsigned int Blaster::getPower() { return _power; }
unsigned int Blaster::getCapacity() { return _capacity; }