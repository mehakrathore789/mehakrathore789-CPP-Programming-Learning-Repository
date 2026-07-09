/*
 * Program: Function Basics
 * Description: Declaring (prototype), defining, and calling a function.
 */

#include <iostream>
using namespace std;

int square(int number); // function prototype

int main() {
    cout << "Square of 6 is " << square(6) << endl;
    cout << "Square of 9 is " << square(9) << endl;
    return 0;
}

int square(int number) {
    return number * number;
}
