#include "Derived.h"
#include <iostream>

using namespace std;

Derived::Derived()
    : Base{} /* invokes specific constructor */, doubled_value{0}
{
    cout << "Derived no arg constructor" << endl;
}
Derived::Derived(int x)
    : Base{x} /* invokes specific constructor */, doubled_value{x * 2}
{
    cout << "Derived (int) overloaded constructor" << endl;
}

Derived::Derived(const Derived &other)
    : Base(other), doubled_value{other.doubled_value}
{
    cout << "Derived copy constructor" << endl;
}

Derived &Derived::operator=(const Derived &rhs)
{
    cout << "Derived copy assignment" << endl;
    if (this == &rhs)
        return *this;
    Base::operator=(rhs);
    doubled_value = rhs.doubled_value;
    return *this;
}

Derived::~Derived()
{
    cout << "Derived destructor" << endl;
}