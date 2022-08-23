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
Derived::~Derived()
{
    cout << "Derived destructor" << endl;
}