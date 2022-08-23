#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

#pragma once

class Trust_Account : public Savings_Account
{
    friend ostream &operator<<(ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

protected:
    double int_rate;
    int num_withdrawals;

public:
    Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif