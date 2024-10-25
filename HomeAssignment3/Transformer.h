/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Weapon {
public:
    Weapon(std::string type);
    std::string getType();
    void setType(std::string type);

private:
    std::string _type;
};

class Transformer {
public:
    Transformer();
    virtual ~Transformer();

    bool move();
    bool turn(int dir);
    bool jump();
    bool fire();
	virtual bool transform() = 0;

    // Getters and Setters
    uint getLevel();
    void setLevel(uint level);
    uint getStrength();
    void setStrength(uint strength);

protected:
    uint _level;
    uint _strength;
    uint _fuel;
    uint _ammo;
    Weapon _weapon; // Composition
};

#endif // TRANSFORMER_H