/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */


#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>


class Weapon
{
    private:
    std::string _name;
    int _size;

    public:
    std::string getName() const;

    void setName( const std::string& newName);
    int getSize() const;
    void setSize( int newSize);

};
#endif