/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

class Transformer {
private:
    std::string _name;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    unsigned int _ammo;

public:
    // Constructors
    Transformer(const std::string &name, const unsigned int &level, 
                const unsigned int &strength, const unsigned int &fuel, 
                const unsigned int &ammo);
    Transformer(const std::string &name);
    Transformer();

    // Destructor
    ~Transformer();

    // Setters
    void setName(const std::string &name);
    void setLevel(const unsigned int &level);
    void setStrength(const unsigned int &strength);
    void setFuel(const unsigned int &fuel);
    void setAmmo(const unsigned int &ammo);

    // Getters
    std::string getName();
    unsigned int getLevel();
    unsigned int getStrength();
    unsigned int getFuel();
    unsigned int getAmmo();

    // Methods
    bool fire();
    bool move();
    bool jump();
};

#endif // TRANSFORMER_H