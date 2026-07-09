/*
 * Program: Common Vector Operations
 * Description: Computing sum, maximum, and minimum of a vector's elements.
 */

#include <iostream>
#include <vector>
#include <algorithm> // for max_element, min_element
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 89, 3, 67, 24};

    int sum = 0;
    for (int n : numbers) sum += n;

    auto maxIt = max_element(numbers.begin(), numbers.end());
    auto minIt = min_element(numbers.begin(), numbers.end());

    cout << "Sum: " << sum << endl;
    cout << "Average: " << static_cast<double>(sum) / numbers.size() << endl;
    cout << "Maximum: " << *maxIt << endl;
    cout << "Minimum: " << *minIt << endl;

    return 0;
}
