/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef BLADE
#define BLADE

#include <iostream>

class Blade {
private:
	uint _sharpness;
	uint _length;
public:
	Blade(const uint &sharpness, const uint &length);
	Blade();

	void setSharpness(const uint &sharpness);
	void setLength(const uint &length);

	uint getSharpness();
	uint getLength();
};


#endif