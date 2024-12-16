/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "memory.h"

double Memory :: getCapacity()
{
    return _capacity;
}


void Memory :: setCapacity(double newCapacity)
{
    _capacity = newCapacity;
}

std::string Memory :: getSpeed()
{
    return _speed;
}

void Memory :: setSpeed(std:: string& newSpeed)
{
    _speed = newSpeed;
}