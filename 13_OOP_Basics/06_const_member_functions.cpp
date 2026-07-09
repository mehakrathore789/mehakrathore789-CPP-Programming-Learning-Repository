/*
 * Program: const Member Functions
 * Description: Marking a member function 'const' guarantees it will NOT
 *              modify the object's data - the compiler enforces this.
 *              This allows the function to be called on const objects too.
 */

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    double getBalance() const { // const -> promises not to modify the object
        return balance;
        // balance = 0; // would NOT compile inside a const function
    }

    void deposit(double amount) { // non-const, since it modifies 'balance'
        balance += amount;
    }
};

int main() {
    const BankAccount account(1000.0); // a CONST object

    // Only const member functions can be called on a const object:
    cout << "Balance: " << account.getBalance() << endl;

    // account.deposit(500); // would NOT compile - deposit() is not const

    return 0;
}
