#include "Checking_Account.h"

using namespace std;

Checking_Account::Checking_Account(string name, double balance, double withdrawal_fee)
    : Account{name, balance}, withdrawal_fee{withdrawal_fee}
    {
}

bool Checking_Account::withdraw(double amount){
    amount += withdrawal_fee;
    return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const Checking_Account &account){
    os << "[Checking_Account: " << account.name << ": " << account.balance << ", " << account.withdrawal_fee << "]";
    return os;
}