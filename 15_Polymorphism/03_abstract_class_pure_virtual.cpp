/*
 * Program: Abstract Classes and Pure Virtual Functions
 * Description: A pure virtual function (declared with '= 0') has no
 *              implementation in the base class, forcing every derived
 *              class to provide its own. A class with a pure virtual
 *              function is "abstract" and cannot be instantiated directly -
 *              it acts as an interface/contract.
 */

#include <iostream>
using namespace std;

class Shape { // abstract base class
public:
    virtual double area() const = 0; // pure virtual function - no body here
    virtual void describe() const {
        cout << "This shape has an area of " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override { // MUST implement this, or Circle stays abstract too
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

int main() {
    // Shape s; // would NOT compile - Shape is abstract

    Circle circle(5);
    Rectangle rectangle(4, 6);

    circle.describe();
    rectangle.describe();

    return 0;
}
