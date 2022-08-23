#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    unique_ptr<Account> moes_account;

    try
    {
        moes_account = make_unique<Checking_Account>("Moe", -10.0);
        cout << *moes_account << endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }

    try
    {
        moes_account = make_unique<Savings_Account>("Moe", 1000.0);
        cout << *moes_account << endl;
        moes_account->withdraw(500.0);
        cout << *moes_account << endl;
        moes_account->withdraw(1000.0);
        cout << *moes_account << endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }
    catch (const Insufficient_Funds_Exception &ex)
    {
        cerr << ex.what() << endl;
    }

    cout << "Program completed successfully" << endl;
    return 0;
}
