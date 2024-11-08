/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
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