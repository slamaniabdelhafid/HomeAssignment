#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Gun;  // Forward declaration
class Weapon;  // Forward declaration

class Transformer {
public:
    Transformer(Gun* gun, Weapon* weapon);
    ~Transformer();
    bool move();
    bool turn();
    bool fire();
    void setLevel(unsigned int level);
    unsigned int getLevel() const;

private:
    unsigned int _ammo;  // Example member variable
    unsigned int _level;  // Example member variable
};

#endif // TRANSFORMER_H