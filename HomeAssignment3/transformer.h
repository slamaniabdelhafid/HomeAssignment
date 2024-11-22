/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef TRANSFORMER
#define TRANSFORMER

#include <iostream>
#include <string>

class Transformer {
private:
	std::string _name;
	uint _level;
	uint _strength;
	uint _fuel;
	uint _ammo;
public:
	// Constructors
	Transformer(const std::string &name, const uint &level, const uint &strength, const uint &fuel, const uint &ammo);
	Transformer(const std::string &name);
	Transformer();
	// Destructor
	~Transformer();

	// Setters
	void setName(const std::string &name);
	void setLevel(const uint &level);
	void setStrength(const uint &strength);
	void setFuel(const uint &fuel);
	void setAmmo(const uint &ammo);

	// Getters
	std::string getName();
	uint getLevel();
	uint getStrength();
	uint getFuel();
	uint getAmmo();

	// Methods
	bool fire();
	bool move();
	bool jump();
};

#endif