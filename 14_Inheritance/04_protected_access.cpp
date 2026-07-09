/*
 * Program: protected Access Specifier
 * Description: 'protected' members are accessible within the class itself
 *              AND within derived classes, but NOT from outside the hierarchy
 *              (unlike 'private', which is only accessible within the same class).
 */

#include <iostream>
using namespace std;

class Employee {
protected:
    double baseSalary; // accessible to derived classes

public:
    Employee(double salary) : baseSalary(salary) {}
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(double salary, double bonusAmount)
        : Employee(salary), bonus(bonusAmount) {}

    double getTotalSalary() {
        return baseSalary + bonus; // OK: baseSalary is protected, accessible here
    }
};

int main() {
    Manager m(50000, 10000);
    cout << "Manager's total salary: " << m.getTotalSalary() << endl;

    // m.baseSalary would NOT compile here - protected is inaccessible from outside

    return 0;
}
