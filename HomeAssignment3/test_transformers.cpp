#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "VehicleTransformer.h"

TEST(TransformerTest, DefaultValues) {
    Transformer t;
    EXPECT_EQ(t.getLevel(), 0);
    EXPECT_EQ(t.getStrength(), 0);
}

TEST(AutobotTest, Transform) {
    Autobot a;
    EXPECT_TRUE(a.transform());
}

TEST(DecepticonTest, Transform) {
    Decepticon d;
    EXPECT_TRUE(d.transform());
}

TEST(VehicleTransformerTest, Drive) {
    VehicleTransformer v;
    EXPECT_TRUE(v.drive());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}