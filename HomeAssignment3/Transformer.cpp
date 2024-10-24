#include "Transformer.h"

Transformer::Transformer() : _level(0), _strength(0), _range(0), _fuel(0), _ammo(0), _gun(nullptr) {}

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

bool Transformer::ultimate() {
    return true;
}

bool Transformer::transform() {
    return true;
}

void Transformer::setLevel(uint level) {
    _level = level;
}

uint Transformer::getLevel() const {
    return _level;
}

void Transformer::setStrength(uint strength) {
    _strength = strength;
}

uint Transformer::getStrength() const {
    return _strength;
}

void Transformer::setRange(uint range) {
    _range = range;
}

uint Transformer::getRange() const {
    return _range;
}