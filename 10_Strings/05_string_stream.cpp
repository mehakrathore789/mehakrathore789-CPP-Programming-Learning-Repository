/*
 * Program: stringstream
 * Description: std::stringstream lets you treat a string like a stream,
 *              useful for parsing (splitting) or building formatted strings.
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // --- Parsing: split a CSV-style string into tokens ---
    string data = "10,20,30,40";
    stringstream ss(data);
    string token;
    vector<int> numbers;

    while (getline(ss, token, ',')) { // split on comma
        numbers.push_back(stoi(token)); // stoi converts string -> int
    }

    cout << "Parsed numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // --- Building: combine values into a formatted string ---
    stringstream builder;
    builder << "Name: " << "Alex" << ", Age: " << 30;
    cout << builder.str() << endl;

    return 0;
}
