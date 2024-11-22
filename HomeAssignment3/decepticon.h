/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.h"
#include "blade.h"

class Decepticon: public Transformer {
private:
	Blade _sword;
public:
	Decepticon(const std::string &name, const uint &sharpnessOfBlade, const uint &lengthOfBlade);
	Decepticon(const std::string &name);
	Decepticon();

	void setSharpnessOfBlade(const uint &sharpnessOfBlade);
	void setLengthOfBlade(const uint &lengthOfBlade);

	uint getSharpnessOfBlade();
	uint getLengthOfBlade();
};

#endif