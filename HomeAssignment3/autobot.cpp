/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "autobot.h"
#include <string>

    
//constructor

autobot::autobot(std::string moral, std::string vehicle){
    _moralAlignment = moral;
    _groundVehicle= vehicle;
}

autobot::autobot(){
        autobotCounter++;
    }

std::string autobot :: getMoralAlignemt() const{
        return _moralAlignment;
    }
    void setMoralAlignmet(std::string newMoralAlignment);

    std::string autobot :: getGroundVehicle() const{
        return _groundVehicle;
    }
    void setGroundVehicle(std::string newGroundVehicle);

//information about the transformer
void autobot :: aboutRobot() {
    std::cout<<"MoralAlignement : "<<_moralAlignment<<"\n";
    std::cout<<"groundVehicle : "<<_groundVehicle<<"\n";
}