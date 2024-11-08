/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "autobot.h"

// Constructors
Autobot::Autobot(const std::string &name, const std::string &color, 
                 const unsigned int &powerOfBlaster, const unsigned int &capacityOfBlaster) 
    : Transformer(name), _color(color), _weapon(powerOfBlaster, capacityOfBlaster) {}

Autobot::Autobot(const std::string &name) : Transformer(name), _color(""), _weapon() {}

Autobot::Autobot() : Transformer(), _color(""), _weapon() {}

// Setters
void Autobot::setPowerOfBlaster(const unsigned int &powerOfBlaster) { _weapon.setPower(powerOfBlaster); }
void Autobot::setCapacityOfBlaster(const unsigned int &capacityOfBlaster) { _weapon.setCapacity(capacityOfBlaster); }
void Autobot::setColor(const std::string &color) { _color = color; }

// Getters
unsigned int Autobot::getPowerOfBlaster() { return _weapon.getPower(); }
unsigned int Autobot::getCapacityOfBlaster() { return _weapon.getCapacity(); }
std::string Autobot::getColor() { return _color; }