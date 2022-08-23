#include "Base.h"
#include <iostream>

using namespace std;

// no args constructor
Base::Base()
    : value{0}
{
    cout << "Base no arg constructor" << endl;
}

// overloaded constructor
Base::Base(int x)
    : value{x}
{
    cout << "Base (int) overloaded constructor" << endl;
}

// destructor
Base::~Base()
{
    cout << "Base destructor" << endl;
}