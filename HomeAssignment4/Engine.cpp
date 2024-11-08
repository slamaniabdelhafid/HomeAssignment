#include "Engine.h"

// Define the constructor
Engine::Engine(std::string type) : _type(type) {}

// Define the getType function
std::string Engine::getType() const {
    return _type;
}