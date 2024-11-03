/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/
#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Engine.h"

int main() {
    Engine engine("V8");

    // Initialize CarConfig with all necessary fields
    CarConfig carConfig = {"Ford Mustang", 2021, 50, 2}; 
    Car car(carConfig); // Create a Car object using the configuration
    car.setEngine(&engine); // Set the engine for the car
    
    // Initialize TruckConfig with all necessary fields
    TruckConfig truckConfig = {"Volvo FH", 2022, 80, 1000}; 
    Truck truck(truckConfig); // Create a Truck object using the configuration
    truck.setEngine(&engine); // Set the engine for the truck

    // Drive the car and the truck
    car.drive();
    truck.drive();

    // Output the details of the car
    std::cout << "Car model: " << car.getModel() 
              << ", Year: " << car.getYear() 
              << ", Fuel Level: " << car.getFuelLevel() << "\n";
    
    // Output the details of the truck
    std::cout << "Truck model: " << truck.getModel() 
              << ", Year: " << truck.getYear() 
              << ", Payload Capacity: " << truck.getPayloadCapacity() << "\n";

    return 0; // Indicate successful completion of the program
}