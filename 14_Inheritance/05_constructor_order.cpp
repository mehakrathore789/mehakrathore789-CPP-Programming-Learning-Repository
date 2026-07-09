/*
 * Program: Constructor/Destructor Order in Inheritance
 * Description: When a derived object is created, the BASE class constructor
 *              runs FIRST, then the derived class constructor.
 *              Destructors run in the OPPOSITE order: derived first, then base.
 */

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor" << endl; }
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived d;
    cout << "\nEnd of main - destructors will now run in reverse order:" << endl;

    return 0;
}
