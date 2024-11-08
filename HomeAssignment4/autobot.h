/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"
#include "blaster.h"

class Autobot : public Transformer {
private:
    std::string _color;
    Blaster _weapon;

public:
    // Overloaded constructors
    Autobot();
    explicit Autobot(const std::string &name);
    Autobot(const std::string &name, const std::string &color, 
            unsigned int powerOfBlaster, unsigned int capacityOfBlaster);

    // Getters and Setters
    void setColor(const std::string &color);
    std::string getColor() const;

    // Output stream operator
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);

    // Comparison operator
    bool operator>(const Autobot& other) const;
};

#endif // AUTOBOT_H