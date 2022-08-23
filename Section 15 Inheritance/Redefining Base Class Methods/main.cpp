#include <iostream>
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "\n============== Account class =================" << endl;
    Account a1{1000.0};
    cout << a1 << endl; // Account balance: 1000

    a1.deposit(500.0);
    cout << a1 << endl; // Account balance: 1500

    a1.withdraw(1000);
    cout << a1 << endl; // Account balance: 500

    a1.withdraw(50000.0); // Insuficient
    cout << a1 << endl;   // Account balance: 500

    cout << "\n============== Savings Account class =================" << endl;
    Savings_Account sa1{1000.0, 5.0};
    cout << sa1 << endl; // Account balance: 1000

    sa1.deposit(500.0);
    cout << sa1 << endl; // Account balance: 1500

    sa1.withdraw(1000);
    cout << sa1 << endl; // Account balance: 500

    sa1.withdraw(50000.0); // Insuficient
    cout << sa1 << endl;   // Account balance: 500

    return 0;
}