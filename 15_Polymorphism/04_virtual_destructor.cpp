/*
 * Program: Virtual Destructors
 * Description: If you delete a derived object through a BASE class pointer,
 *              and the base destructor is NOT virtual, only the base
 *              destructor runs - the derived part is never cleaned up
 *              (undefined behavior / resource leaks). Always make base
 *              class destructors virtual when polymorphism is involved.
 */

#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() { // virtual destructor - ensures correct cleanup order
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base *ptr = new Derived();
    delete ptr; // With a virtual destructor: BOTH destructors run correctly.
                // Without 'virtual' on ~Base(), only Base's destructor would run.

    return 0;
}
