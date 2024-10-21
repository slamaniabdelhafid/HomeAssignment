#include "Autobot.h"

Autobot::Autobot(Gun* gun, Weapon* weapon, const std::string& name)
    : Transformer(gun, weapon), _name(name) {}

Autobot::~Autobot() {}

bool Autobot::transform() {
    return true; // Plug
}

bool Autobot::attack() {
    return true; // Plug
}

void Autobot::setName(const std::string& name) {
    _name = name;
}

std::string Autobot::getName() const {
    return _name;
}