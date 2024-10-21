#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
	Decepticon(Gun* gun, Weapon* weapon, const std::string& type);
	~Decepticon();

	bool transform();
	bool ambush();

	void setType(const std::string& type);
	std::string getType() const;

private:
	std::string _type;
};

#endif // DECEPTICON_H