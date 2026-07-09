/*
 * Program: Function Overriding (without virtual)
 * Description: A derived class can redefine a base class method with the
 *              same signature. WITHOUT 'virtual', which version runs is
 *              decided at COMPILE time based on the pointer/reference type,
 *              not the actual object type - this is a common pitfall.
 */

#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Some generic animal sound." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() { // hides (not overrides) Animal's version
        cout << "Meow!" << endl;
    }
};

int main() {
    Cat myCat;
    myCat.makeSound(); // calls Cat's version - "Meow!"

    Animal *animalPtr = &myCat;
    animalPtr->makeSound(); // WITHOUT virtual: calls Animal's version - "generic sound"
                             // (see 02_virtual_functions.cpp to fix this)

    return 0;
}
