/*
 * Program: std::vector Basics
 * Description: vector is a dynamic array from the STL - it can grow and
 *              shrink at runtime, unlike a C-style array.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30}; // initial size 3

    numbers.push_back(40); // adds a new element at the end
    numbers.push_back(50);

    cout << "Vector size: " << numbers.size() << endl;
    cout << "Elements: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    cout << "First: " << numbers.front() << ", Last: " << numbers.back() << endl;

    numbers.pop_back(); // removes the last element
    cout << "After pop_back, size: " << numbers.size() << endl;

    return 0;
}
