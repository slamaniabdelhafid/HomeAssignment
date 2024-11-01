/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Transformer.h"

Weapon::Weapon(const std::string &name) : _name(name) {}

std::string Weapon::getName() const {
    return _name;
}

Transformer::Transformer() : _level(1), _strength(10), _range(5), _weapon(nullptr) {}

Transformer::~Transformer() {
    delete _weapon; // Destroying the weapon
}

uint Transformer::getLevel() const {
    return _level;
}

void Transformer::setLevel(uint level) {
    _level = level;
}

uint Transformer::getStrength() const {
    return _strength;
}

void Transformer::setStrength(uint strength) {
    _strength = strength;
}

uint Transformer::getRange() const {
    return _range;
}

void Transformer::setRange(uint range) {
    _range = range;
}

bool Transformer::fire() {
    return true; // Simple method
}