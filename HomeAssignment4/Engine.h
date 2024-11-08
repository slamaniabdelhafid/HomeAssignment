/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>

class Engine {
public:
    Engine(std::string type); // Declaration
    std::string getType() const; // Declaration

    // Overload the output operator
    friend std::ostream& operator<<(std::ostream& os, const Engine& engine) {
        os << "Engine type: " << engine.getType();
        return os;
    }

private:
    std::string _type;
};

#endif