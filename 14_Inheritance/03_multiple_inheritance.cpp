/*
 * Program: Multiple Inheritance
 * Description: A class can inherit from more than one base class at once.
 */

#include <iostream>
using namespace std;

class Swimmer {
public:
    void swim() { cout << "Swimming..." << endl; }
};

class Flyer {
public:
    void fly() { cout << "Flying..." << endl; }
};

class Duck : public Swimmer, public Flyer { // inherits from BOTH classes
public:
    void quack() { cout << "Quack!" << endl; }
};

int main() {
    Duck donald;
    donald.swim();  // from Swimmer
    donald.fly();    // from Flyer
    donald.quack();   // Duck's own method

    return 0;
}
