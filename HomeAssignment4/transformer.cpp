/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "transformer.h"

// Constructors
Transformer::Transformer()
    : _name(""), _level(0), _strength(0), _fuel(0), _ammo(0) {}

Transformer::Transformer(const std::string& name)
    : _name(name), _level(0), _strength(0), _fuel(0), _ammo(0) {}

Transformer::Transformer(const std::string& name, unsigned int level,
                         unsigned int strength, unsigned int fuel, unsigned int ammo)
    : _name(name), _level(level), _strength(strength), _fuel(fuel), _ammo(ammo) {}

// Destructor
Transformer::~Transformer() {}

// Getters
std::string Transformer::getName() const { return _name; }
unsigned int Transformer::getLevel() const { return _level; }
unsigned int Transformer::getStrength() const { return _strength; }
unsigned int Transformer::getFuel() const { return _fuel; }
unsigned int Transformer::getAmmo() const { return _ammo; }

// Setters
void Transformer::setName(const std::string& name) { _name = name; }
void Transformer::setLevel(unsigned int level) { _level = level; }
void Transformer::setStrength(unsigned int strength) { _strength = strength; }
void Transformer::setFuel(unsigned int fuel) { _fuel = fuel; }
void Transformer::setAmmo(unsigned int ammo) { _ammo = ammo; }

// Stream output operator
std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer: " << transformer._name
       << ", Level: " << transformer._level
       << ", Strength: " << transformer._strength
       << ", Fuel: " << transformer._fuel
       << ", Ammo: " << transformer._ammo;
    return os;
}

// Comparison operators
bool Transformer::operator>(const Transformer& other) const {
    return _strength > other._strength;
}

bool Transformer::operator<(const Transformer& other) const {
    return _strength < other._strength;
}

bool Transformer::operator==(const Transformer& other) const {
    return _strength == other._strength;
}

// Virtual methods
bool Transformer::fire() {
    std::cout << _name << " is firing!" << std::endl;
    return true;
}

bool Transformer::move() {
    std::cout << _name << " is moving!" << std::endl;
    return true;
}

bool Transformer::jump() {
    std::cout << _name << " is jumping!" << std::endl;
    return true;
}