/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "blaster.h"

// Constructors
Blaster::Blaster() : _power(0), _capacity(0) {}

Blaster::Blaster(unsigned int power, unsigned int capacity)
    : _power(power), _capacity(capacity) {}

// Getters
unsigned int Blaster::getPower() const { return _power; }
unsigned int Blaster::getCapacity() const { return _capacity; }

// Methods
void Blaster::fire() {
    if (_capacity > 0) {
        std::cout << "Firing blaster with power: " << _power << std::endl;
        _capacity--;
    } else {
        std::cout << "Blaster is out of ammo!" << std::endl;
    }
}