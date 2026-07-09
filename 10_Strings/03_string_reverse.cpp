/*
 * Program: Reverse a String
 * Description: The STL's std::reverse() algorithm can reverse a string
 *              in place, given iterators marking its start and end.
 */

#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
using namespace std;

int main() {
    string str = "Hello World";

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
