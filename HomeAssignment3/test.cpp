/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "blaster.h"
#include "decepticon.h"
#include "instrument.h"
#include "minicon.h"

int main() {
    blaster blaster;
    blaster.setCapacity(100.0);
    blaster.setSpeed("Fast");

    decepticon decepticon("Dragon", "Peaceful");
    decepticon.setBeastForm("Dragon");
    decepticon.setPeaceful("Not Dangerous");

    instrument instrument;
    instrument.setName("Laser");
    instrument.setSize(5);

    minicon minicon("T-Rex", "Very Dangerous");
    minicon.setDinosaurForm("T-Rex");
    minicon.setDangerous("Extremely Dangerous");

    // Display information
    std::cout << "blaster Capacity: " << blaster.getCapacity() << "\n";
    std::cout << "blaster Speed: " << blaster.getSpeed() << "\n";
    decepticon.aboutRobot();
    std::cout << "instrument Name: " << instrument.getName() << "\n";
    std::cout << "instrument Size: " << instrument.getSize() << "\n";
    minicon.aboutRobot();

    return 0;
}