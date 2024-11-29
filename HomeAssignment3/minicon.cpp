/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "Minicon.h"

int minicon::dinobotCounter = 0;

minicon::minicon() {
    dinobotCounter++;
}

minicon::minicon(std::string dinosaur, std::string dangerous) {
    _dinosaurForm = dinosaur;
    _dangerous = dangerous;
    dinobotCounter++;
}

std::string minicon::getDinosaurForm() const {
    return _dinosaurForm;
}

void minicon::setDinosaurForm(std::string newDinosaurForm) {
    _dinosaurForm = newDinosaurForm;
}

std::string minicon::getDangerous() const {
    return _dangerous;
}

void minicon::setDangerous(std::string newDangerous) {
    _dangerous = newDangerous;
}

void minicon::aboutRobot() {
    std::cout << "DinosaurForm : " << _dinosaurForm << "\n";
    std::cout << "Dangerous : " << _dangerous << "\n";
}