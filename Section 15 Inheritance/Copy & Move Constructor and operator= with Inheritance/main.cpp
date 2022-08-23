#include <iostream>
#include "Base.h"
#include "Derived.h"

using namespace std;

int main()
{
    // Base b{100}; // overloaded constructor
    // Base b1{b};  // copy constructor
    // b = b1;      // copy assignment

    Derived d{100}; // overloaded constructor
    Derived d1{d};  // copy constructor
    d = d1;      // copy assignment

    return 0;
}