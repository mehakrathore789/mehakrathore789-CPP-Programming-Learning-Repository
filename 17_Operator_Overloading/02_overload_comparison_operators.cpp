/*
 * Program: Overloading Comparison Operators
 * Description: Overloading '==' lets us compare two custom objects for
 *              equality using natural syntax instead of a named method.
 */

#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator, denominator;

    Fraction(int n, int d) : numerator(n), denominator(d) {}

    bool operator==(const Fraction &other) const {
        // Cross-multiplication avoids floating-point comparison issues
        return numerator * other.denominator == other.numerator * denominator;
    }
};

int main() {
    Fraction half(1, 2);
    Fraction twoQuarters(2, 4);
    Fraction third(1, 3);

    cout << boolalpha;
    cout << "1/2 == 2/4 ? " << (half == twoQuarters) << endl; // true
    cout << "1/2 == 1/3 ? " << (half == third) << endl;         // false

    return 0;
}
