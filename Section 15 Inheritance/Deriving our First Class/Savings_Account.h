#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

#pragma once

using namespace std;

class Savings_Account: public Account
{
public:
    double int_rate;
    
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);

private:
};

#endif