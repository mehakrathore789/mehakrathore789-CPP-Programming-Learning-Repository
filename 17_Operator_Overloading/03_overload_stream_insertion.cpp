/*
 * Program: Overloading the << (Stream Insertion) Operator
 * Description: Allows a custom object to be printed directly with cout,
 *              just like built-in types. Must be a non-member (free)
 *              function because 'cout' is on the LEFT side of '<<'.
 */

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

// Free function, often declared as a 'friend' if it needs private access
ostream &operator<<(ostream &out, const Point &p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out; // returning the stream allows chaining: cout << p1 << p2;
}

int main() {
    Point p1(3, 7);

    cout << "Point p1 = " << p1 << endl; // now works naturally!

    return 0;
}
