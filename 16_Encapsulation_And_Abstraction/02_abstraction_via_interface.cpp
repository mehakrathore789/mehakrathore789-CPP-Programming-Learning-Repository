/*
 * Program: Abstraction via Interface
 * Description: Client code depends only on the abstract 'PaymentMethod'
 *              interface, not on the specific implementation details of
 *              each payment type. This hides complexity behind a simple contract.
 */

#include <iostream>
using namespace std;

class PaymentMethod { // abstract interface
public:
    virtual void pay(double amount) = 0; // pure virtual - defines the contract
    virtual ~PaymentMethod() = default;
};

class CreditCardPayment : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid $" << amount << " using Credit Card (processing details hidden)." << endl;
    }
};

class UpiPayment : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid $" << amount << " using UPI (processing details hidden)." << endl;
    }
};

void checkout(PaymentMethod &method, double amount) {
    // This function doesn't know or care HOW payment happens - pure abstraction
    method.pay(amount);
}

int main() {
    CreditCardPayment card;
    UpiPayment upi;

    checkout(card, 250.0);
    checkout(upi, 99.5);

    return 0;
}
