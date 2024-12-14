/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#ifndef BLASTER_H  
#define BLASTER_H

#include <string>
#include <iostream>

class Blaster { 
private:
    double _capacity;
    std::string _speed;

public:
    // Constructor
    Blaster();

    // Getters and Setters
    void setCapacity(double newCapacity);
    double getCapacity();

    void setSpeed(std::string& newSpeed);
    std::string getSpeed();

    // New virtual methods
    void transform();
    void openFire();
    void ultra();
};

#endif