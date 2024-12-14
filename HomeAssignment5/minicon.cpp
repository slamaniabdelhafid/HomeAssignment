#include "minicon.h"

// Define the static member variable
//int Minicon::miniconCounter = 0;

// Default constructor
Minicon::Minicon() {
    miniconCounter++;
}

// Constructor with parameters
Minicon::Minicon(std::string blaster, std::string instrument) {
    _blasterForm = blaster;
    _instrument = instrument;
    miniconCounter++;
}

std::string Minicon::getBlasterForm() const {
    return _blasterForm;
}

void Minicon::setBlasterForm(std::string newBlasterForm) {
    _blasterForm = newBlasterForm;  // Assuming you want to set the new blaster form
}

std::string Minicon::getInstrument() const {
    return _instrument;
}

void Minicon::setInstrument(std::string newInstrument) {
    _instrument = newInstrument;  // Assuming you want to set the new instrument
}

void Minicon::aboutRobot() {
    std::cout << "Blaster: " << _blasterForm << "\n";
    std::cout << "Instrument: " << _instrument << "\n";
}

// Implementing the virtual methods
void Minicon::transform() {
    std::cout << "Transform method in Minicon class" << std::endl;
}

void Minicon::openFire() {
    std::cout << "OpenFire method in Minicon class" << std::endl;
}

void Minicon::ultra() {
    std::cout << "Ultra method in Minicon class" << std::endl;
}