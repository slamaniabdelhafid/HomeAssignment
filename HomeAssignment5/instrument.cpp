/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#include "instrument.h"

// Getters and Setters
std::string Instrument::getName() const {
    return _name;
}

void Instrument::setName(const std::string& newName) {
    _name = newName;
}

int Instrument::getSize() const {
    return _size;
}

void Instrument::setSize(int newSize) {
    _size = newSize;
}

// Implementing the virtual methods
void Instrument::transform() {
    std::cout << "Transform method in Instrument class" << std::endl;
}

void Instrument::openFire() {
    std::cout << "OpenFire method in Instrument class" << std::endl;
}

void Instrument::ultra() {
    std::cout << "Ultra method in Instrument class" << std::endl;
}