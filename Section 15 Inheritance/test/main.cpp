#include <iostream>
#include "Base.h"
#include "Derived.h"

using namespace std;

// class Base
// {
// private:
//     int value;

// public:
//     Base()
//         : value{0}
//     {
//         cout << "Base no arg constructor" << endl;
//     }
//     Base(int x)
//         : value{x}
//     {
//         cout << "Base (int) overloaded constructor" << endl;
//     }
//     ~Base()
//     {
//         cout << "Base destructor" << endl;
//     }
// };

// class Derived : public Base
// {
// private:
//     int doubled_value;

// public:
//     Derived()
//         : Base{} /* invokes specific constructor */ , doubled_value{0}
//     {
//         cout << "Derived no arg constructor" << endl;
//     }
//     Derived(int x)
//         : Base{x} /* invokes specific constructor */ , doubled_value{x * 2}
//     {
//         cout << "Derived (int) overloaded constructor" << endl;
//     }
//     ~Derived()
//     {
//         cout << "Derived destructor" << endl;
//     }
// };

int main()
{
    Derived d{122};
    return 0;
}