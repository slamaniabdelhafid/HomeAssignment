#include "Engine.h"

Engine::Engine(std::string type) : _type(type) {
}

std::string Engine::getType() const {
    return _type;
}