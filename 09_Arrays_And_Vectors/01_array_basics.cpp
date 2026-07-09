/*
 * Program: C-Style Array Basics
 * Description: A fixed-size array, same as in C. Its size cannot change
 *              after declaration.
 */

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90, 85, 76, 88, 95};

    cout << "First element: " << marks[0] << endl;
    cout << "All elements: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
