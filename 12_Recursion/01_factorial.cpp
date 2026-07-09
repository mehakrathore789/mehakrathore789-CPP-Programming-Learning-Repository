/*
 * Program: Factorial using Recursion
 * Description: n! = n * (n-1)!  with base case 0! = 1
 */

#include <iostream>
using namespace std;

long factorial(int n) {
    if (n == 0 || n == 1) return 1; // base case
    return n * factorial(n - 1);     // recursive case
}

int main() {
    int number = 6;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
