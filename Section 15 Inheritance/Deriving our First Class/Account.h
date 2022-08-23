#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

#pragma once

using namespace std;

class Account
{
public:
    double balance;
    string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();

};

#endif