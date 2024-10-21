#include "Decepticon.h"

Decepticon::Decepticon(Gun* gun, Weapon* weapon, const std::string& type)
    : Transformer(gun, weapon), _type(type) {}

Decepticon::~Decepticon() {}

bool Decepticon::transform() {
    return true; // Plug
}

bool Decepticon::ambush() {
    return true; // Plug
}

void Decepticon::setType(const std::string& type) {
   