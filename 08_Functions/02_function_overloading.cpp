/*
 * Program: Function Overloading
 * Description: Multiple functions can share the same name as long as their
 *              parameter lists differ (in type or number of parameters).
 *              The compiler picks the right one based on the arguments passed.
 */

#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }

int main() {
    cout << "add(2, 3)       = " << add(2, 3) << endl;         // calls int version
    cout << "add(2.5, 3.5)   = " << add(2.5, 3.5) << endl;      // calls double version
    cout << "add(1, 2, 3)    = " << add(1, 2, 3) << endl;       // calls 3-arg version

    return 0;
}
