/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blaster.h"

Blaster::Blaster(const uint &power, const uint &capacity) :
	_power(power),
	_capacity(capacity)
{}

Blaster::Blaster() :
	Blaster(0, 0)
{}



void Blaster::setPower(const uint &power) {
	_power = power;
}

void Blaster::setCapacity(const uint &capacity) {
	_capacity = capacity;
}


uint Blaster::getPower() {
	return _power;
}

uint Blaster::getCapacity() {
	return _capacity;
}