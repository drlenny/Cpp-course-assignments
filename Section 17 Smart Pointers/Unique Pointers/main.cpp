// Section 16
// Challenge
#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
// #include "Account_Util.h"

using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0} { cout << "Test constructor (" << data << ")" << endl; }
    Test(int data) : data{data} { cout << "Test constructor (" << data << ")" << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

int main()
{
    // Raw Pointers 
    Test *t1 =  new Test {1000}; 
    delete t1;

    // Unique Pointers
    unique_ptr<Test> t2 {new Test{2000}};
    unique_ptr<Test> t3 = make_unique<Test>(3000);

    unique_ptr<Test> t4;
    // t4 = t1; // error : can not assign unique pointers
    t4 = move(t2);
    if(!t2)
        cout << "t2 is nullptr" << endl;

    unique_ptr<Account> a1 = make_unique<Checking_Account>("Moe", 5000);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;

    vector<unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<Checking_Account>("James", 1000));
    accounts.push_back(make_unique<Savings_Account>("Billy", 10, 4.5));
    accounts.push_back(make_unique<Trust_Account>("Bobby", 8000, 3.6));
    for (const auto &acc: accounts)
        cout << *acc << endl;

    return 0;
}
