/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Weapon {
public:
    Weapon(const std::string &name);
    std::string getName() const;

private:
    std::string _name;
};

class Transformer {
public:
    Transformer();
    virtual ~Transformer();

    uint getLevel() const;
    void setLevel(uint level);

    uint getStrength() const;
    void setStrength(uint strength);

    uint getRange() const;
    void setRange(uint range);

    bool fire();

protected:
    uint _level;
    uint _strength;
    uint _range;
    Weapon *_weapon; // Association
};

#endif // TRANSFORMER_H