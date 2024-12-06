/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef BLASTER_H  
#define BLASTER_H
#include <string>
#include <iostream>

class Blaster  
{
    public:
    double _capacity;  
    std::string _speed;  

    void setCapacity(double newCapacity);
    double getCapacity();

    void setSpeed(std::string& newSpeed);
    std::string getSpeed();
};

#endif