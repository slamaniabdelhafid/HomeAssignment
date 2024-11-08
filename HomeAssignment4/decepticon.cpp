#include "decepticon.h"

// Constructors
Decepticon::Decepticon() : Transformer(), _stealthAbility("") {}

Decepticon::Decepticon(const std::string &name) 
    : Transformer(name), _stealthAbility("") {}

Decepticon::Decepticon(const std::string &name, const std::string &stealthAbility, 
                       unsigned int level, unsigned int strength, unsigned int fuel, unsigned int ammo)
    : Transformer(name, level, strength, fuel, ammo), _stealthAbility(stealthAbility) {}

// Getters
std::string Decepticon::getStealthAbility() const { return _stealthAbility; }

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << static_cast<const Transformer&>(decepticon) 
       << ", Stealth Ability: " << decepticon._stealthAbility;
    return os;
}