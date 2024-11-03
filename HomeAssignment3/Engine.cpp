/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Engine.h"

Engine::Engine(std::string type) : _type(type) {
}

std::string Engine::getType() const {
    return _type;
}