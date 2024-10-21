#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
	Autobot(Gun* gun, Weapon* weapon, const std::string& name);
	~Autobot();

	bool transform();
	bool attack();

	void setName(const std::string& name);
	std::string getName() const;

private:
	std::string _name;
};

#endif // AUTOBOT_H