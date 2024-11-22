/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef INSTR
#define INSTR

#include <iostream>

class Instrument {
private:
	uint _endurance;
	uint _effect;
public:
	Instrument(const uint &endurance, const uint &effect);
	Instrument();

	bool use();

	void setEndurance(const uint &setEndurance);
	void setEffect(const uint &effect);

	uint getEndurance();
	uint getEffect();
};


#endif