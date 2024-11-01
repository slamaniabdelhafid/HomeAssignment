/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include <iostream>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Minibot.h"

int main() {
    std::cout << "Transformers are ready!" << std::endl;

    Autobot autobot;
    Decepticon decepticon;
    Minibot minibot;

    // Example usage
    autobot.setLevel(2);
    decepticon.setLevel(3);
    minibot.setLevel(1);

    std::cout << "Autobot Level: " << autobot.getLevel() << std::endl;
    std::cout << "Decepticon Level: " << decepticon.getLevel() << std::endl;
    std::cout << "Minibot Level: " << minibot.getLevel() << std::endl;

    autobot.transform();
    decepticon.transform();
    minibot.transform();

    return 0;
}