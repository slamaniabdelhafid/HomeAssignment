/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blaster.h"  

double Blaster::getCapacity() 
{
    return _capacity;
}

void Blaster::setCapacity(double newCapacity)  
{
    _capacity = newCapacity;
}

std::string Blaster::getSpeed()  
{
    return _speed;
}

void Blaster::setSpeed(std::string& newSpeed)  
{
    _speed = newSpeed;
}