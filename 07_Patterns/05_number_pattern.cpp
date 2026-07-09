/*
 * Program: Number Pattern
 * Description: Prints a triangle where each row repeats its row number.
 */

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
