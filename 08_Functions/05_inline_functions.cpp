/*
 * Program: Inline Functions
 * Description: 'inline' suggests to the compiler that it replace the
 *              function call with the function's actual code, avoiding
 *              call overhead for small, frequently-used functions.
 *              (Modern compilers often decide this automatically anyway.)
 */

#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    cout << "Cube of 3: " << cube(3) << endl;
    cout << "Cube of 5: " << cube(5) << endl;

    return 0;
}
