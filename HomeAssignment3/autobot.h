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
    // Constructors
    Autobot(const std::string &name, const std::string &color, 
            const unsigned int &powerOfBlaster, const unsigned int &capacityOfBlaster);
    Autobot(const std::string &name);
    Autobot();

    // Setters
    void setPowerOfBlaster(const unsigned int &powerOfBlaster);
    void setCapacityOfBlaster(const unsigned int &capacityOfBlaster);
    void setColor(const std::string &color);

    // Getters
    unsigned int getPowerOfBlaster();
    unsigned int getCapacityOfBlaster();
    std::string getColor();
};

#endif // AUTOBOT_H