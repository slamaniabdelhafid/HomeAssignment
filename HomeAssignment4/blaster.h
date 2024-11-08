#ifndef BLASTER_H
#define BLASTER_H

#include <iostream>

class Blaster {
private:
    unsigned int _power;
    unsigned int _capacity;

public:
    // Constructors
    Blaster();
    Blaster(unsigned int power, unsigned int capacity);

    // Getters
    unsigned int getPower() const;
    unsigned int getCapacity() const;

    // Methods
    void fire();
};

#endif // BLASTER_H