/* slamani abdelhafid. group 24.b83 . st130302@student.spbu.ru */

#include "decepticon.h"

// Default constructor
Decepticon::Decepticon() {}

// Constructor with parameters
Decepticon::Decepticon(std::string beast, std::string peace) {
    _beastForm = beast;
    _peaceful = peace;
}

std::string Decepticon::getBeastForm() const {
    return _beastForm;
}

void Decepticon::setDinosaurForm(std::string newBeastForm) {
    _beastForm = newBeastForm;  // Assuming you want to set the new beast form
}

std::string Decepticon::getPeaceful() const {
    return _peaceful;
}

void Decepticon::setPeaceful(std::string newPeaceful) {
    _peaceful = newPeaceful;  // Assuming you want to set the new peaceful state
}

void Decepticon::aboutRobot() {
    std::cout << "Beast Form: " << _beastForm << "\n";
    std::cout << "Peace: " << _peaceful << "\n";
}

// Implementing the virtual methods
void Decepticon::transform() {
    std::cout << "Transform method in Decepticon class" << std::endl;
}

void Decepticon::openFire() {
    std::cout << "OpenFire method in Decepticon class" << std::endl;
}

void Decepticon::ultra() {
    std::cout << "Ultra method in Decepticon class" << std::endl;
}