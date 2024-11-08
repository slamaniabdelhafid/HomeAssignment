/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer {
private:
    std::string _stealthAbility;

public:
    // Overloaded constructors
    Decepticon();
    explicit Decepticon(const std::string &name);
    Decepticon(const std::string &name, const std::string &stealthAbility, 
               unsigned int level, unsigned int strength, unsigned int fuel, unsigned int ammo);

    // Getters
    std::string getStealthAbility() const;

    // Output stream operator
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
};

#endif // DECEPTICON_H