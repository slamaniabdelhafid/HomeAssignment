/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blade.h"

// Constructors
Blade::Blade(const unsigned int &sharpness, const unsigned int &length) 
    : _sharpness(sharpness), _length(length) {}

Blade::Blade() : _sharpness(0), _length(0) {}

// Setters
void Blade::setSharpness(const unsigned int &sharpness) { _sharpness = sharpness; }
void Blade::setLength(const unsigned int &length) { _length = length; }

// Getters
unsigned int Blade::getSharpness() { return _sharpness; }
unsigned int Blade::getLength() { return _length; }