/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "instrument.h"

Instrument::Instrument(const uint &endurance, const uint &effect) :
	_endurance(endurance),
	_effect(effect)
{}

Instrument::Instrument() :
	Instrument(0, 0)
{}


bool Instrument::use() {
	std::cout << "Instrument has been used\n";
	return true;
}


void Instrument::setEndurance(const uint &endurance) {
	_endurance = endurance;
}

void Instrument::setEffect(const uint &effect) {
	_effect = effect;
}

uint Instrument::getEndurance() {
	return _endurance;
}

uint Instrument::getEffect() {
	return _effect;
}