#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"

TEST(TransformerTest, AutobotTransform) {
    Autobot autobot;
    EXPECT_TRUE(autobot.transform());
}

TEST(TransformerTest, DecepticonTransform) {
    Decepticon decepticon;
    EXPECT_TRUE(decepticon.transform());
}

TEST(WeaponTest, WeaponType) {
    Weapon weapon("Laser");
    EXPECT_EQ(weapon.getType(), "Laser");
    weapon.setType("Cannon");
    EXPECT_EQ(weapon.getType(), "Cannon");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}