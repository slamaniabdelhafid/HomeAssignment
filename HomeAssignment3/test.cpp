#include <gtest/gtest.h>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Engine.h"

TEST(VehicleTest, Drive) {
    VehicleConfig config = {"Toyota Camry", 2020, 50};
    Vehicle vehicle(config);
    vehicle.drive();
    EXPECT_EQ(49, vehicle.getFuelLevel());
}

TEST(CarTest, GetNumberOfDoors) {
    CarConfig config = {"Honda Civic", 2019, 40, 4};
    Car car(config);
    EXPECT_EQ(4, car.getNumberOfDoors());
}

TEST(TruckTest, GetPayloadCapacity) {
    TruckConfig config = {"Ford F-150", 2018, 60, 1000};
    Truck truck(config);
    EXPECT_EQ(1000, truck.getPayloadCapacity());
}

TEST(EngineTest, GetType) {
    Engine engine("V6");
    EXPECT_EQ("V6", engine.getType());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}