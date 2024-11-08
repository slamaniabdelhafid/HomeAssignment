/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "decepticon.h"

// Constructors
Decepticon::Decepticon(const std::string &name, const unsigned int &sharpnessOfBlade, 
                       const unsigned int &lengthOfBlade) 
    : Transformer(name), _sword(sharpnessOfBlade, lengthOfBlade) {}

Decepticon::Decepticon(const std::string &name) : Transformer(name), _sword() {}

Decepticon::Decepticon() : Transformer (), _sword() {}

// Setters
void Decepticon::setSharpnessOfBlade(const unsigned int &sharpnessOfBlade) { _sword.setSharpness(sharpnessOfBlade); }
void Decepticon::setLengthOfBlade(const unsigned int &lengthOfBlade) { _sword.setLength(lengthOfBlade); }

// Getters
unsigned int Decepticon::getSharpnessOfBlade() { return _sword.getSharpness(); }
unsigned int Decepticon::getLengthOfBlade() { return _sword.getLength(); }