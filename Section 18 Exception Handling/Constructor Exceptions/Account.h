// Simple Account
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "Printable.h"
#include "Illegal_Balance_Exception.h"

using namespace std;

class Account : public Printable
{
    // friend ostream &operator<<(ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

protected:
    string name;
    double balance;

public:
    Account(string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(ostream &os) const override;
    virtual ~Account() = default;
};
#endif