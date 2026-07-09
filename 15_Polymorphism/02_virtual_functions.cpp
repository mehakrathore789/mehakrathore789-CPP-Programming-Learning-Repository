/*
 * Program: Virtual Functions (Runtime Polymorphism)
 * Description: Marking a base class method 'virtual' ensures the correct
 *              DERIVED version is called at runtime, even through a base
 *              class pointer or reference - this is true polymorphism.
 */

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // 'virtual' enables dynamic dispatch
        cout << "Some generic animal sound." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override { // 'override' documents intent and catches typos
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal *animals[2];
    Cat cat;
    Dog dog;

    animals[0] = &cat;
    animals[1] = &dog;

    // Even though the pointer type is 'Animal*', the CORRECT derived
    // method is called for each object, thanks to 'virtual'.
    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }

    return 0;
}
