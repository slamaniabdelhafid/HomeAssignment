/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef MINICON
#define MINICON

#include "transformer.h"
#include "instrument.h"

class Minicon: public Transformer {
private:
	Instrument* _pickaxe;
	uint _energy;
	uint _size;
public:
	Minicon(const std::string &name, Instrument* pickaxe, const uint &energy, const uint &size);
	Minicon(const std::string &name, Instrument* pickaxe);

	bool work();

	void setEnergy(const uint &energy);
	void setSize(const uint &size);

	uint getEnergy();
	uint getSize();
};

#endif