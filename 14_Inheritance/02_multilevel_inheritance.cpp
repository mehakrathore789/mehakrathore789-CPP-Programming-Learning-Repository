/*
 * Program: Multilevel Inheritance
 * Description: A chain of inheritance: Vehicle -> Car -> SportsCar.
 *              Each level adds its own features on top of the previous one.
 */

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started." << endl; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving." << endl; }
};

class SportsCar : public Car {
public:
    void turboBoost() { cout << "Turbo boost activated!" << endl; }
};

int main() {
    SportsCar mySportsCar;

    mySportsCar.start();       // from Vehicle (grandparent)
    mySportsCar.drive();        // from Car (parent)
    mySportsCar.turboBoost();    // from SportsCar itself

    return 0;
}
