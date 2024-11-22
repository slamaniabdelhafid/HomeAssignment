/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef BLASTER
#define BLASTER

#include <iostream>

class Blaster {
private:
	uint _power;
	uint _capacity;
public:
	Blaster(const uint &power, const uint &capacity);
	Blaster();

	void setPower(const uint &power);
	void setCapacity(const uint &capacity);

	uint getPower();
	uint getCapacity();
};

#endif