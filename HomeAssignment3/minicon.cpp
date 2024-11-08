/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "minicon.h"

// Constructors
Minicon::Minicon(const std::string &name, Instrument* pickaxe, 
                 const unsigned int &energy, const unsigned int &size) 
    : Transformer(name), _pickaxe(pickaxe), _energy(energy), _size(size) {}

Minicon::Minicon(const std::string &name, Instrument* pickaxe) 
    : Transformer(name), _pickaxe(pickaxe), _energy(0), _size(0) {}

// Methods
bool Minicon::work() { return true; }

// Setters
void Minicon::setEnergy(const unsigned int &energy) { _energy = energy; }
void Minicon::setSize(const unsigned int &size) { _size = size; }

// Getters
unsigned int Minicon::getEnergy() { return _energy; }
unsigned int Minicon::getSize() { return _size; }