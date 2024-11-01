/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string> // Include the string header

class Weapon {
public:
    Weapon();
    void setType(const std::string& type);
    std::string getType() const;

private:
    std::string type;
};

class Transformer {
public:
    Transformer();
    virtual void transform() = 0; // Pure virtual function
    void setLevel(int level);
    int getLevel() const;

protected:
    int level;
};

#endif // TRANSFORMER_H