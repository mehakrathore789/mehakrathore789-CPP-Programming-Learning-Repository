/*
 * Program: Encapsulation with Getters and Setters
 * Description: Keeping data members 'private' and exposing controlled
 *              access through public methods protects the object's
 *              internal state from invalid changes (data hiding).
 */

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // cannot be accessed directly from outside the class

public:
    BankAccount(double initialBalance) {
        balance = (initialBalance >= 0) ? initialBalance : 0; // basic validation
    }

    double getBalance() const { // "getter" - read access
        return balance;
    }

    void deposit(double amount) { // "setter"-like method with validation
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
        }
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(2000); // triggers validation - insufficient funds
    cout << "Balance after failed withdrawal: " << account.getBalance() << endl;

    // account.balance = -9999; // would NOT compile - 'balance' is private

    return 0;
}
