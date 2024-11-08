/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef BLADE_H
#define BLADE_H

#include <iostream>

class Blade {
private:
    unsigned int _sharpness;
    unsigned int _length;

public:
    // Constructors
    Blade(const unsigned int &sharpness, const unsigned int &length);
    Blade();

    // Setters
    void setSharpness(const unsigned int &sharpness);
    void setLength(const unsigned int &length);

    // Getters
    unsigned int getSharpness();
    unsigned int getLength();
};

#endif // BLADE_H