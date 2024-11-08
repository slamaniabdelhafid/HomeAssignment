/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "transformer.h"

// Constructors
Transformer::Transformer(const std::string &name, const unsigned int &level, 
                         const unsigned int &strength, const unsigned int &fuel, 
                         const unsigned int &ammo) 
    : _name(name), _level(level), _strength(strength), _fuel(fuel), _ammo(ammo) {}

Transformer::Transformer(const std::string &name) : _name(name), _level(0), 
    _strength(0), _fuel(0), _ammo(0) {}

Transformer::Transformer() : _name(""), _level(0), _strength(0), _fuel(0), _ammo(0) {}

// Destructor
Transformer::~Transformer() {}

// Setters
void Transformer::setName(const std::string &name) { _name = name; }
void Transformer::setLevel(const unsigned int &level) { _level = level; }
void Transformer::setStrength(const unsigned int &strength) { _strength = strength; }
void Transformer::setFuel(const unsigned int &fuel) { _fuel = fuel; }
void Transformer::setAmmo(const unsigned int &ammo) { _ammo = ammo; }

// Getters
std::string Transformer::getName() { return _name; }
unsigned int Transformer::getLevel() { return _level; }
unsigned int Transformer::getStrength() { return _strength; }
unsigned int Transformer::getFuel() { return _fuel; }
unsigned int Transformer::getAmmo() { return _ammo; }

// Methods
bool Transformer::fire() { return true; }
bool Transformer::move() { return true; }
bool Transformer::jump() { return true; }