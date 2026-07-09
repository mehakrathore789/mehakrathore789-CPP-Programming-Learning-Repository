/*
 * Program: Constructors
 * Description: A constructor is a special member function that initializes
 *              an object automatically when it's created. C++ supports:
 *              - Default constructor (no parameters)
 *              - Parameterized constructor (accepts initial values)
 *              - Copy constructor (creates a new object as a copy of another)
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student() { // default constructor
        name = "Unknown";
        rollNumber = 0;
        cout << "Default constructor called." << endl;
    }

    Student(string n, int r) : name(n), rollNumber(r) { // parameterized (uses initializer list)
        cout << "Parameterized constructor called for " << name << "." << endl;
    }

    Student(const Student &other) { // copy constructor
        name = other.name;
        rollNumber = other.rollNumber;
        cout << "Copy constructor called for " << name << "." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};

int main() {
    Student s1;                       // calls default constructor
    Student s2("Riya Singh", 5);       // calls parameterized constructor
    Student s3 = s2;                   // calls copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
