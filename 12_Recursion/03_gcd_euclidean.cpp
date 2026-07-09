/*
 * Program: GCD using the Euclidean Algorithm
 * Description: GCD(a, b) = GCD(b, a % b), until b becomes 0.
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a; // base case
    return gcd(b, a % b);  // recursive case
}

int main() {
    int x = 48, y = 18;
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
    return 0;
}
