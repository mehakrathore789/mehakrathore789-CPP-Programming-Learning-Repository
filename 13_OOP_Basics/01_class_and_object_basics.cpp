/*
 * Program: Class and Object Basics
 * Description: A class is a blueprint; an object is an instance of that
 *              blueprint. Here we model a simple 'Car'.
 */

#include <iostream>
#include <string>
using namespace std;

class Car {
public:               // accessible from outside the class
    string brand;
    int speed;

    void accelerate() {  // a "member function" (method)
        speed += 10;
        cout << brand << " is now going " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;          // creating an object (instance) of the Car class
    myCar.brand = "Toyota";
    myCar.speed = 0;

    myCar.accelerate();
    myCar.accelerate();

    return 0;
}
