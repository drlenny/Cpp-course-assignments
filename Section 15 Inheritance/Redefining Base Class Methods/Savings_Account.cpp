#include "Savings_Account.h"
#include <iostream>

using namespace std;

Savings_Account::Savings_Account(double balance, double int_rate)
    : Account(balance), int_rate{int_rate}
{
}

Savings_Account::Savings_Account()
    : Savings_Account{0.0, 0.0}
{
}

void Savings_Account::deposit(double amount){
    amount = amount + (amount * int_rate/100);
    Account::deposit(amount);
}

ostream &operator<<(ostream &os, const Savings_Account &account){
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.int_rate;
    return os;
}

Savings_Account::~Savings_Account()
{
}