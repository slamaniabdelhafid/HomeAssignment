/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include "Transformer.h"
#include <string> // Include the string header

Weapon::Weapon() : type("Unknown") {}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

std::string Weapon::getType() const {
    return type;
}

Transformer::Transformer() : level(0) {}

void Transformer::setLevel(int level) {
    this->level = level;
}

int Transformer::getLevel() const {
    return level;
}