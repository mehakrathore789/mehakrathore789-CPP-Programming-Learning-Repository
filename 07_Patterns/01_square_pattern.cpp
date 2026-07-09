/*
 * Program: Square Pattern
 * Description: Prints an n x n solid square of stars.
 */

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
