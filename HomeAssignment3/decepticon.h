/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"
#include "blade.h"

class Decepticon : public Transformer {
private:
    Blade _sword;

public:
    // Constructors
    Decepticon(const std::string &name, const unsigned int &sharpnessOfBlade, 
               const unsigned int &lengthOfBlade);
    Decepticon(const std::string &name);
    Decepticon();

    // Setters
    void setSharpnessOfBlade(const unsigned int &sharpnessOfBlade);
    void setLengthOfBlade(const unsigned int &lengthOfBlade);

    // Getters
    unsigned int getSharpnessOfBlade();
    unsigned int getLengthOfBlade();
};

#endif // DECEPTICON_H