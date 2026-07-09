/*
 * Program: Destructors
 * Description: A destructor runs automatically when an object goes out of
 *              scope or is explicitly deleted. It's used for cleanup
 *              (closing files, freeing memory, etc.). Name: ~ClassName().
 */

#include <iostream>
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Logger created - resource acquired." << endl;
    }

    ~Logger() { // destructor - runs automatically at end of scope
        cout << "Logger destroyed - resource released." << endl;
    }
};

void demonstrateScope() {
    Logger localLogger; // created here
    cout << "Inside demonstrateScope()." << endl;
} // localLogger's destructor runs automatically here, at the end of scope

int main() {
    cout << "Before calling demonstrateScope()." << endl;
    demonstrateScope();
    cout << "After calling demonstrateScope()." << endl;

    return 0;
}
