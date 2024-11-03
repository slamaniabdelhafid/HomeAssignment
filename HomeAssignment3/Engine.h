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