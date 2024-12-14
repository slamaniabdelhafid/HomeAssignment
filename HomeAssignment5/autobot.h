/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#include "Transformers.h"
#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>

class Autobot : public BaseTransformer {
private:
    std::string _moralAlignment;
    std::string _groundVehicle;

public:
    static int autobotCounter;
    
    // Constructor
    Autobot();
    
    // Constructor with parameters
    Autobot(std::string moral, std::string vehicle);

    std::string getMoralAlignemt() const;
    void setMoralAlignmet(std::string newMoralAlignment);

    std::string getGroundVehicle() const;
    void setGroundVehicle(std::string newGroundVehicle);
    
    void aboutRobot() override;

    // New virtual methods
    void transform() override;
    void openFire() override;
    void ultra() override;
};

#endif