/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Engine.h"

// Define the constructor
Engine::Engine(std::string type) : _type(type) {}

// Define the getType function
std::string Engine::getType() const {
    return _type;
}