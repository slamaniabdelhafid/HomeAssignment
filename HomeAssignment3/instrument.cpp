/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "instrument.h"

// Constructors
Instrument::Instrument(const unsigned int &endurance, const unsigned int &effect) 
    : _endurance(endurance), _effect(effect) {}

Instrument::Instrument() : _endurance(0), _effect(0) {}

// Methods
bool Instrument::use() { return true; }

// Setters
void Instrument::setEndurance(const unsigned int &endurance) { _endurance = endurance; }
void Instrument::setEffect(const unsigned int &effect) { _effect = effect; }

// Getters
unsigned int Instrument::getEndurance() { return _endurance; }
unsigned int Instrument::getEffect() { return _effect; }