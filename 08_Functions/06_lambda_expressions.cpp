/*
 * Program: Lambda Expressions
 * Description: A lambda is an anonymous, inline function - very useful
 *              for short operations passed to STL algorithms.
 *              Syntax: [capture](parameters) { body }
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // A simple lambda stored in a variable
    auto add = [](int a, int b) { return a + b; };
    cout << "Lambda add(3, 4) = " << add(3, 4) << endl;

    // Lambdas are commonly passed directly into STL algorithms
    vector<int> numbers = {5, 2, 8, 1, 9};
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b; // sort in descending order
    });

    cout << "Sorted descending: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Capturing a variable from the surrounding scope with [&]
    int threshold = 5;
    int countAbove = count_if(numbers.begin(), numbers.end(),
                               [&](int n) { return n > threshold; });
    cout << "Numbers above " << threshold << ": " << countAbove << endl;

    return 0;
}
