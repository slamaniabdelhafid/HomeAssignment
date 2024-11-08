/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Engine.h"

int main() {
    Engine engine("V8");

    Car car("Ford Mustang", 2021, 50, 2);
    car.setEngine(&engine);

    Truck truck("Volvo FH", 2022, 80, 1000);
    truck.setEngine(&engine);

    std::cout << car << std::endl;
    std::cout << truck << std::endl;

    return 0;
}