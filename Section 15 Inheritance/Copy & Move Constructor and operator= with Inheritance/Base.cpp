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

// copy constructor
Base::Base(const Base &other)
    : value{other.value}
{
    cout << "Base copy instructor" << endl;
}

// copy assignment
Base &Base::operator=(const Base &rhs)
{
    cout << "Copy Assignment" << endl;
    if (this == &rhs)
        return *this;
    value = rhs.value;
    return *this;
}