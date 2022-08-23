#include "Account.h"
#include <iostream>

using namespace std;

// Simple Account Class

Account::Account()
    : Account(0.0) // delegating constructor
{
}

Account::Account(double balance) : balance(balance)
{
}

void Account::withdraw(double amount){
    if (balance-amount >= 0)
        balance-=amount;
    else
        cout << "Insufficient funds" << endl;
}

void Account::deposit(double amount){
    balance += amount;
}

ostream &operator<<(ostream &os, const Account &account){
    os << "Account balance: " << account.balance;
    return os;
}

Account::~Account()
{
}