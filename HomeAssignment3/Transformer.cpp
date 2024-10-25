#include "Transformer.h"

Weapon::Weapon(std::string type) : _type(type) {}

std::string Weapon::getType() {
    return _type;
}

void Weapon::setType(std::string type) {
    _type = type;
}

Transformer::Transformer() : _level(1), _strength(100), _fuel(100), _ammo(10), _weapon("Laser") {}

Transformer::~Transformer() {}

bool Transformer::move() {
    return true;
}

bool Transformer::turn(int dir) {
    return true;
}

bool Transformer::jump() {
    return true;
}

bool Transformer::fire() {
    _ammo--;
    return true;
}

uint Transformer::getLevel() {
    return _level;
}

void Transformer::setLevel(uint level) {
    _level = level;
}

uint Transformer::getStrength() {
    return _strength;
}

void Transformer::setStrength(uint strength) {
    _strength = strength;
}