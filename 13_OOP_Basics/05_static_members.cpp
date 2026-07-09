/*
 * Program: Static Members
 * Description: A 'static' member belongs to the CLASS itself, shared by
 *              all objects, rather than existing separately in each object.
 */

#include <iostream>
using namespace std;

class Counter {
private:
    static int totalObjectsCreated; // declaration - shared across all instances

public:
    Counter() {
        totalObjectsCreated++; // every new object increments the SHARED counter
    }

    static int getTotal() { // a static member function - callable without an object
        return totalObjectsCreated;
    }
};

int Counter::totalObjectsCreated = 0; // definition/initialization outside the class

int main() {
    Counter a, b, c; // creates 3 objects

    cout << "Total objects created: " << Counter::getTotal() << endl;

    return 0;
}
