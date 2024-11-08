#include "minicon.h"

// Constructors
Minicon::Minicon() : Transformer(), _specialAbility("") {}

Minicon::Minicon(const std::string &name) 
    : Transformer(name), _specialAbility("") {}

Minicon::Minicon(const std::string &name, const std::string &specialAbility, 
                 unsigned int level, unsigned int strength, unsigned int fuel, unsigned int ammo)
    : Transformer(name, level, strength, fuel, ammo), _specialAbility(specialAbility) {}

// Getters
std::string Minicon::getSpecialAbility() const { return _specialAbility; }

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Minicon& minicon) {
    os << static_cast<const Transformer&>(minicon) 
       << ", Special Ability: " << minicon._specialAbility;
    return os;
}