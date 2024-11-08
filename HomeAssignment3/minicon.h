/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef MINICON_H
#define MINICON_H

#include "transformer.h"
#include "instrument.h"

class Minicon : public Transformer {
private:
    Instrument* _pickaxe;
    unsigned int _energy;
    unsigned int _size;

public:
    // Constructors
    Minicon(const std::string &name, Instrument* pickaxe, 
            const unsigned int &energy, const unsigned int &size);
    Minicon(const std::string &name, Instrument* pickaxe);

    // Methods
    bool work();

    // Setters
    void setEnergy(const unsigned int &energy);
    void setSize(const unsigned int &size);

    // Getters
    unsigned int getEnergy();
    unsigned int getSize();
};

#endif // MINICON_H