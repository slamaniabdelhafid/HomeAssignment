/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"
#include "Minibot.h"

TEST(TransformerTest, AutobotTransform) {
    Autobot autobot;
    EXPECT_NO_THROW(autobot.transform());
}

TEST(TransformerTest, DecepticonTransform) {
    Decepticon decepticon;
    EXPECT_NO_THROW(decepticon.transform());
}

TEST(TransformerTest, MinibotTransform) {
    Minibot minibot;
    EXPECT_NO_THROW(minibot.transform());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}