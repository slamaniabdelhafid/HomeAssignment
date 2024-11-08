#include "autobot.h"

// Constructors
Autobot::Autobot() : Transformer(), _color(""), _weapon() {}

Autobot::Autobot(const std::string &name) 
    : Transformer(name), _color(""), _weapon() {}

Autobot::Autobot(const std::string &name, const std::string &color, 
                 unsigned int powerOfBlaster, unsigned int capacityOfBlaster)
    : Transformer(name), _color(color), _weapon(powerOfBlaster, capacityOfBlaster) {}

// Getters and Setters
void Autobot::setColor(const std::string &color) { _color = color; }
std::string Autobot::getColor() const { return _color; }

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << static_cast<const Transformer&>(autobot) 
       << ", Color: " << autobot._color 
       << ", Blaster Power: " << autobot._weapon.getPower();
    return os;
}

// Comparison operator
bool Autobot::operator>(const Autobot& other) const {
    return _weapon.getPower() > other._weapon.getPower();
}