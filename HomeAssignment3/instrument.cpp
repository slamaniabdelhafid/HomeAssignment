/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "instrument.h"

std::string instrument::getName() const {
    return _name;
}

void instrument::setName(const std::string& newName) {
    _name = newName;
}

int instrument::getSize() const {
    return _size;
}

void instrument::setSize(int newSize) {
    _size = newSize;
}