/*
 * Program: Default Arguments
 * Description: A function parameter can have a default value, used
 *              automatically when the caller omits that argument.
 */

#include <iostream>
using namespace std;

// 'unit' defaults to "kg" if the caller doesn't specify it
void printWeight(double weight, string unit = "kg") {
    cout << "Weight: " << weight << " " << unit << endl;
}

int main() {
    printWeight(70);          // uses default unit "kg"
    printWeight(154, "lbs");  // overrides the default

    return 0;
}
