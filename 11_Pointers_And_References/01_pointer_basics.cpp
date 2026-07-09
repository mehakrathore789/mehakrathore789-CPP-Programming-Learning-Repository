/*
 * Program: Pointer Basics
 * Description: A pointer stores the memory address of another variable.
 */

#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int *ptr = &number; // ptr holds the ADDRESS of number

    cout << "Value of number:      " << number << endl;
    cout << "Address of number:    " << &number << endl;
    cout << "Value pointed by ptr: " << *ptr << endl; // dereference

    *ptr = 100; // modifies 'number' through the pointer
    cout << "After *ptr = 100, number = " << number << endl;

    return 0;
}
