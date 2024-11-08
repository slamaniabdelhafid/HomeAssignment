#ifndef BLADE_H
#define BLADE_H

#include <iostream>

class Blade {
private:
    unsigned int _sharpness;
    unsigned int _length;

public:
    // Constructors
    Blade();
    Blade(unsigned int sharpness, unsigned int length);

    // Getters
    unsigned int getSharpness() const;
    unsigned int getLength() const;

    // Methods
    void slash();
};

#endif // BLADE_H