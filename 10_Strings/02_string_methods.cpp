/*
 * Program: Common String Methods
 * Description: A tour of frequently used std::string member functions.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Programming in C++";

    cout << "Length: " << text.length() << endl;
    cout << "Substring (0, 11): " << text.substr(0, 11) << endl; // "Programming"
    cout << "Find 'C++': position " << text.find("C++") << endl;

    string upper = text;
    for (char &c : upper) c = toupper(c); // convert to uppercase in place
    cout << "Uppercase: " << upper << endl;

    cout << "Contains 'Prog'? " << (text.find("Prog") != string::npos) << endl;

    return 0;
}
