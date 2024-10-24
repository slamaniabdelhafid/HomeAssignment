#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Gun; // Gun Class Preliminary Announcement

class Transformer {
public:
    Transformer();
    virtual ~Transformer();

    bool move();
    bool turn(int dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();

    // Getters and Setters
    void setLevel(uint level);
    uint getLevel() const;

    void setStrength(uint strength);
    uint getStrength() const;

    void setRange(uint range);
    uint getRange() const;

private:
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;
    Gun* _gun; // Association
};

#endif // TRANSFORMER_H