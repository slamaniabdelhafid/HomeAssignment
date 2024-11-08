/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>

class Instrument {
private:
    unsigned int _endurance;
    unsigned int _effect;

public:
    // Constructors
    Instrument(const unsigned int &endurance, const unsigned int &effect);
    Instrument();

    // Methods
    bool use();

    // Setters
    void setEndurance(const unsigned int &endurance);
    void setEffect(const unsigned int &effect);

    // Getters
    unsigned int getEndurance();
    unsigned int getEffect();
};

#endif // INSTRUMENT_H