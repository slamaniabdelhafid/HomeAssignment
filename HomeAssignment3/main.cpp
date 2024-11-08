/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "minicon.h"
#include "instrument.h"

int main() {
    // Create a Transformer
    Transformer baseTransformer("Base Transformer");
    baseTransformer.setFuel(100);
    baseTransformer.fire();

    // Create an Autobot
    Autobot optimusPrime("Optimus Prime");
    optimusPrime.setPowerOfBlaster(500);
    optimusPrime.setColor("Red");
    std::cout << "Autobot " << optimusPrime.getName() 
              << " Power: " << optimusPrime.getPowerOfBlaster() 
              << " Color: " << optimusPrime.getColor() << std::endl;

    // Create a Decepticon
    Decepticon megatron("Megatron");
    megatron.setSharpnessOfBlade(300);
    megatron.setLengthOfBlade(50);
    std::cout << "Decepticon " << megatron.getName() 
              << " Blade Sharpness: " << megatron.getSharpnessOfBlade() 
              << " Blade Length: " << megatron.getLengthOfBlade() << std::endl;

    // Create an Instrument and Minicon
    Instrument pickaxe(100, 50);
    Minicon miniBot("Mini Bot", &pickaxe);
    miniBot.setEnergy(200);
    miniBot.setSize(10);
    std::cout << "Minicon " << miniBot.getName() 
              << " Energy: " << miniBot.getEnergy() 
              << " Size: " << miniBot.getSize() << std::endl;

    return 0;
}