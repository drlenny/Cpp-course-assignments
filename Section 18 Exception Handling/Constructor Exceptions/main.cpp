// Section 16
// Challenge
#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Illegal_Balance_Exception.h"
// #include "Account_Util.h"

using namespace std;

int main(){

    try{
        unique_ptr<Account> moes_account = make_unique<Checking_Account>("Moe", -10.0);
        cout << *moes_account << endl;
    }
    catch (const Illegal_Balance_Exception &ex){
        cerr << "Couldn't create account - negative balance" << endl;
    }
    cout << "Program Successfully Completed" << endl;

    return 0;
}