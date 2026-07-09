/*
 * Program: Pass by Reference
 * Description: In C++, a reference parameter (T&) lets a function modify
 *              the CALLER's original variable directly, without needing
 *              pointers as in C.
 */

#include <iostream>
using namespace std;

void swap(int &a, int &b); // '&' means 'a' and 'b' are references, not copies

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y); // no need for &x, &y like in C - just pass the variables

    cout << "After swap:  x = " << x << ", y = " << y << endl;

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
