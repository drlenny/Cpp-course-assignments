#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

#pragma once

using namespace std;

// Simple Account Class
class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);

protected:
    double balance;

public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
    ~Account();
};

#endif