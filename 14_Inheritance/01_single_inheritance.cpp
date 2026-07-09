/*
 * Program: Single Inheritance
 * Description: A derived class (Dog) inherits attributes and behavior
 *              from a single base class (Animal).
 */

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;

    void eat() {
        cout << name << " is eating." << endl;
    }
};

class Dog : public Animal { // Dog inherits publicly from Animal
public:
    void bark() {
        cout << name << " says Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.name = "Buddy";  // inherited from Animal
    myDog.eat();             // inherited method
    myDog.bark();             // Dog's own method

    return 0;
}
