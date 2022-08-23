#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

#pragma once

class Checking_Account : public Account
{
    friend ostream &operator<<(ostream &os, const Checking_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_withdrawal_fee = 1.5;

protected:
    double withdrawal_fee;

public:
    Checking_Account(string name = def_name, double balance = def_balance, double withdrawal_fee = def_withdrawal_fee);
    bool withdraw(double amount);
};

#endif