/*
 * Program: Pointers vs References
 * Description: Side-by-side comparison of the two ways to indirectly
 *              access a variable in C++.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *ptr = &a;   // pointer: must be dereferenced with *, can be reassigned/null
    int &ref = a;     // reference: used directly, cannot be null or reseated

    cout << "Via pointer: " << *ptr << endl;
    cout << "Via reference: " << ref << endl;

    int b = 20;
    ptr = &b; // valid: pointer can now point somewhere else
    cout << "Pointer reassigned to b: " << *ptr << endl;

    // ref = b;  // This does NOT reseat ref - it assigns b's VALUE to 'a' (ref still refers to a)
    ref = b;
    cout << "After ref = b, a = " << a << " (a's value changed, ref still refers to a)" << endl;

    return 0;
}
