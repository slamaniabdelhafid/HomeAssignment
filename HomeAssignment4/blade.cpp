/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "blade.h"

// Constructors
Blade::Blade() : _sharpness(0), _length(0) {}

Blade::Blade(unsigned int sharpness, unsigned int length)
    : _sharpness(sharpness), _length(length) {}

// Getters
unsigned int Blade::getSharpness() const { return _sharpness; }
unsigned int Blade::getLength() const { return _length; }

// Methods
void Blade::slash() {
    std::cout << "Slashing with blade of sharpness: " << _sharpness 
              << " and length: " << _length << std::endl;
}