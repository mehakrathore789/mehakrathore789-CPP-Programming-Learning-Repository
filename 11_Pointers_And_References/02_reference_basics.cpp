/*
 * Program: Reference Basics
 * Description: A reference is an alias for an existing variable - another
 *              name for the same memory location. Unlike a pointer, it
 *              cannot be null and cannot be reseated after initialization.
 */

#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int &ref = number; // 'ref' is now another name for 'number'

    cout << "number = " << number << ", ref = " << ref << endl;

    ref = 100; // modifying ref ALSO modifies number - they share the same memory
    cout << "After ref = 100, number = " << number << endl;

    return 0;
}
