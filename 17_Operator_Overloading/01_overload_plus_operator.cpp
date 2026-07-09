/*
 * Program: Overloading the + Operator
 * Description: Lets two Point objects be added together using the natural
 *              '+' syntax, just like built-in numeric types.
 */

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload '+' as a member function
    Point operator+(const Point &other) const {
        return Point(x + other.x, y + other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point sum = p1 + p2; // uses our overloaded operator+
    cout << "p1 + p2 = ";
    sum.display();

    return 0;
}
