/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blade.h"

Blade::Blade(const uint &sharpness, const uint &length) :
	_sharpness(sharpness),
	_length(length)
{}

Blade::Blade() :
	Blade(0, 0)
{}



void Blade::setSharpness(const uint &sharpness) {
	_sharpness = sharpness;
}

void Blade::setLength(const uint &length) {
	_length = length;
}


uint Blade::getSharpness() {
	return _sharpness;
}

uint Blade::getLength() {
	return _length;
}