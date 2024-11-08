/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef MINICON_H
#define MINICON_H

#include "transformer.h"

class Minicon : public Transformer {
private:
    std::string _specialAbility;

public:
    // Overloaded constructors
    Minicon();
    explicit Minicon(const std::string &name);
    Minicon(const std::string &name, const std::string &specialAbility, 
            unsigned int level, unsigned int strength, unsigned int fuel, unsigned int ammo);

    // Getters
    std::string getSpecialAbility() const;

    // Output stream operator
    friend std::ostream& operator<<(std::ostream& os, const Minicon& minicon);
};

#endif // MINICON_H