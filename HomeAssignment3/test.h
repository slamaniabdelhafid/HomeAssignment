/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#ifndef TEST_H
#define TEST_H

#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "minicon.h"

void runTests() {
    // Create instances of each class
    Autobot autobot("Optimus Prime", "Red", 100, 50);
    Decepticon decepticon("Megatron", 80, 30);
    Instrument instrument(100, 5);
    Minicon minicon("Mini", &instrument, 50, 10);

    // Test methods
    autobot.fire();
    decepticon.move();
    minicon.work();
}

#endif // TEST_H