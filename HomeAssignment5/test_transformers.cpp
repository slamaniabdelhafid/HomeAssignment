/* slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru */

#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "minicon.h"   
#include "decepticon.h"  
#include <iostream>

// Base class test
TEST(TransformerTest, SetNameAndHeight) {
    BaseTransformer myRobo2;
    myRobo2.setName("Titanus");
    myRobo2.setHeight(150);
    EXPECT_EQ(myRobo2.getHeight(), 150);
    EXPECT_EQ(myRobo2.getName(), "Titanus");
}

// Autobots
// We initialize the value of the autobots counter 
int Autobot::autobotCounter = 0;
TEST(AutobotTest, AutobotsCount) {
    Autobot autobot1;
    Autobot autobot2;
    Autobot autobot3;
    EXPECT_EQ(Autobot::autobotCounter, 3);
}

// Minicons
// We initialize the value of the counter 
int Minicon::miniconCounter = 0; 
TEST(MiniconTest, MiniconsCount) {
    Minicon minicon; 
    EXPECT_EQ(Minicon::miniconCounter, 1); 
}

// Decepticons
TEST(DecepticonTest, DecepticonGetName) { 
    Decepticon decepticon; 
    decepticon.setName("Chidima");
    EXPECT_EQ(decepticon.getName(), "Chidima");
}

// Additional tests can be added here for more functionality

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}