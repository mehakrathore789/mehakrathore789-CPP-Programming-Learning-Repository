/*
 * Program: Overloading ++ (Prefix and Postfix)
 * Description: The prefix (++obj) and postfix (obj++) versions of an
 *              operator are distinguished by a dummy 'int' parameter on
 *              the postfix version.
 */

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter &operator++() {   // prefix ++counter
        count++;
        return *this;
    }

    Counter operator++(int) { // postfix counter++ (unused 'int' marks it as postfix)
        Counter temp = *this;  // save the current state before incrementing
        count++;
        return temp;            // return the OLD value, as postfix semantics require
    }

    int getCount() const { return count; }
};

int main() {
    Counter c;

    ++c; ++c; // prefix: increments then returns
    cout << "After two prefix ++: " << c.getCount() << endl;

    c++; // postfix: returns old value, then increments
    cout << "After one postfix ++: " << c.getCount() << endl;

    return 0;
}
