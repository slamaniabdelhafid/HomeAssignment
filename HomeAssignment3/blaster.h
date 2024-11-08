/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef BLASTER_H
#define BLASTER_H

#include <iostream>

class Blaster {
private:
    unsigned int _power;
    unsigned int _capacity;

public:
    // Constructors
    Blaster(const unsigned int &power, const unsigned int &capacity);
    Blaster();

    // Setters
    void setPower(const unsigned int &power);
    void setCapacity(const unsigned int &capacity);

    // Getters
    unsigned int getPower();
    unsigned int getCapacity();
};

#endif // BLASTER_H