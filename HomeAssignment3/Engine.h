/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
public:
    Engine(std::string type);
    std::string getType() const;

private:
    std::string _type;
};

#endif