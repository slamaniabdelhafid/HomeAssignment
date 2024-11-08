/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

class Transformer {
protected:
    std::string _name;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    unsigned int _ammo;

public:
    // Constructors
    Transformer();
    explicit Transformer(const std::string& name);
    Transformer(const std::string& name, unsigned int level,
                unsigned int strength, unsigned int fuel, unsigned int ammo);

    // Virtual destructor
    virtual ~Transformer();

    // Getters
    std::string getName() const;
    unsigned int getLevel() const;
    unsigned int getStrength() const;
    unsigned int getFuel() const;
    unsigned int getAmmo() const;

    // Setters
    void setName(const std::string& name);
    void setLevel(unsigned int level);
    void setStrength(unsigned int strength);
    void setFuel(unsigned int fuel);
    void setAmmo(unsigned int ammo);

    // Stream output operator
    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

    // Comparison operators
    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
    bool operator==(const Transformer& other) const;

    // Virtual methods
    virtual bool fire();
    virtual bool move();
    virtual bool jump();
};

#endif // TRANSFORMER_H