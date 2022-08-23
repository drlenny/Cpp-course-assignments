#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0}
{
}

// Deposit:
//     Amount supplied to the deposit will be incremented by (amount * int_rate/100)
//     and then the updated amount will be deposited

bool Trust_Account::deposit(double amount)
{
    amount += amount * (int_rate / 100);
    if (amount >= 5000.0)
        amount += 50.0;
    return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    int count{};
    if (amount > (balance * 0.2) || num_withdrawals >= 3)
    {
        return false;
    }
    else
    {
        ++num_withdrawals;
        return Account::withdraw(amount);
    }
}

ostream &operator<<(ostream &os, const Trust_Account &account)
{
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.num_withdrawals << "]";
    return os;
}