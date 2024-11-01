/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

// Testing the base class Transformer
TEST(TransformerTest, DefaultConstructor) {
    Transformer transformer;
    EXPECT_EQ(transformer.getLevel(), 1);
    EXPECT_EQ(transformer.getStrength(), 10);
    EXPECT_EQ(transformer.getRange(), 5);
}

TEST(TransformerTest, SetGetLevel) {
    Transformer transformer;
    transformer.setLevel(5);
    EXPECT_EQ(transformer.getLevel(), 5);
}

TEST(TransformerTest, SetGetStrength) {
    Transformer transformer;
    transformer.setStrength(20);
    EXPECT_EQ(transformer.getStrength(), 20);
}

TEST(TransformerTest, SetGetRange) {
    Transformer transformer;
    transformer.setRange(15);
    EXPECT_EQ(transformer.getRange(), 15);
}

TEST(TransformerTest, Fire) {
    Transformer transformer;
    EXPECT_TRUE(transformer.fire());
}

// Testing the class Autobot
TEST(AutobotTest, Transform) {
    Autobot autobot;
    EXPECT_TRUE(autobot.transform());
}

// Testing the class Decepticon
TEST(DecepticonTest, Transform) {
    Decepticon decepticon;
    EXPECT_TRUE(decepticon.transform());
}

// Running all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}