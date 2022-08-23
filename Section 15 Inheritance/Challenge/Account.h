#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

#pragma once

using namespace std;

// Simple Account Class
class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

protected:
    double balance;
    string name;

public:
    Account(string name = def_name, double balance = def_balance);
    // Account(string name = "Unnamed Account", double balance = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};

#endif