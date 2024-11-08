#include "instrument.h"

// Constructors
Instrument::Instrument() : _type(""), _power(0) {}

Instrument::Instrument(const std::string &type, unsigned int power)
    : _type(type), _power(power) {}

// Getters
std::string Instrument::getType() const { return _type; }
unsigned int Instrument::getPower() const { return _power; }

// Methods
void Instrument::play() {
    std::cout << "Playing " << _type << " with power: " << _power << std::endl;
}