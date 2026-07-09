/*
 * Program: Diamond Pattern
 * Description: A pyramid followed by an inverted pyramid.
 */

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) { // top half
        for (int space = 1; space <= n - i; space++) cout << "  ";
        for (int star = 1; star <= i; star++) cout << "* ";
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) { // bottom half
        for (int space = 1; space <= n - i; space++) cout << "  ";
        for (int star = 1; star <= i; star++) cout << "* ";
        cout << endl;
    }

    return 0;
}
