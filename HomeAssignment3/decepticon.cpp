/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "decepticon.h"

decepticon::decepticon() {}
decepticon::decepticon(std::string beast, std::string peace) {
    _beastForm = beast;
    _peaceful = peace;
}

std::string decepticon::getBeastForm() const {
    return _beastForm;
}

void decepticon::setBeastForm(std::string newBeastForm) {
    _beastForm = newBeastForm;
}

std::string decepticon::getPeaceful() const {
    return _peaceful;
}

void decepticon::setPeaceful(std::string newPeaceful) {
    _peaceful = newPeaceful;
}

void decepticon::aboutRobot() {
    std::cout << "BeastForm : " << _beastForm << "\n";
    std::cout << "Peace : " << _peaceful << "\n";
}