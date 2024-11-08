#include "test.h"
#include <iostream>

void runTests() {
    // Transformer tests
    std::cout << "Running Transformer Tests..." << std::endl;
    
    Transformer t1("Optimus", 1, 100, 500, 50);
    Transformer t2("Megatron", 2, 120, 600, 60);
    
    std::cout << "Transformer 1: " << t1 << std::endl;
    std::cout << "Transformer 2: " << t2 << std::endl;
    
    if (t1 < t2) {
        std::cout << t1.getName() << " is weaker than " << t2.getName() << std::endl;
    }
    
    // Autobot tests
    std::cout << "\nRunning Autobot Tests..." << std::endl;
    
    Autobot autobot1("Bumblebee", "Yellow", 300, 50);
    Autobot autobot2("Optimus Prime", "Red", 500, 75);
    
    std::cout << "Autobot 1: " << autobot1 << std::endl;
    std::cout << "Autobot 2: " << autobot2 << std::endl;
    
    if (autobot2 > autobot1) {
        std::cout << autobot2.getName() << " has a more powerful blaster" << std::endl;
    }
    
    // Decepticon tests
    std::cout << "\nRunning Decepticon Tests..." << std::endl;
    
    Decepticon decepticon1("Starscream", "Aerial Stealth", 2, 90, 400, 40);
    Decepticon decepticon2("Soundwave", "Electronic Interference", 3, 110, 500, 55);
    
    std::cout << "Decepticon 1: " << decepticon1 << std::endl;
    std::cout << "Decepticon 2: " << decepticon2 << std::endl;
    
    // Minicon tests
    std::cout << "\nRunning Minicon Tests..." << std::endl;
    
    Minicon minicon1("Laserbeak", "Reconnaissance", 1, 50, 200, 20);
    Minicon minicon2("Rumble", "Seismic Disruption", 2, 60, 250, 25);
    
    std::cout << "Minicon 1: " << minicon1 << std::endl;
    std::cout << "Minicon 2: " << minicon2 << std::endl;
    
    // Method tests
    std::cout << "\nTesting Transformer Methods..." << std::endl;
    
    t1.fire();
    t1.move();
    t1.jump();
}