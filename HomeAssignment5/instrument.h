/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>
#include <string>

class Instrument {
private:
    std::string _name;
    int _size;

public:
    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& newName);
    
    int getSize() const;
    void setSize(int newSize);

    // New virtual methods
    void transform();
    void openFire();
    void ultra();
};

#endif // INSTRUMENT_H