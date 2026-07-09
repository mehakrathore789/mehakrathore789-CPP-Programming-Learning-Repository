/*
 * Program: String Basics
 * Description: std::string is a full-featured class, not just a char array.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    string name;

    cout << "Greeting: " << greeting << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    string message = greeting + ", " + name + "!"; // '+' concatenates strings directly
    cout << message << endl;

    return 0;
}
