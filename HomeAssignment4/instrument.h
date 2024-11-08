#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>

class Instrument {
private:
    std::string _type;
    unsigned int _power;

public:
    // Constructors
    Instrument();
    Instrument(const std::string &type, unsigned int power);

    // Getters
    std::string getType() const;
    unsigned int getPower() const;

    // Methods
    void play();
};

#endif // INSTRUMENT_H