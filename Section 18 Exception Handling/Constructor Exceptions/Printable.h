#ifndef _PRINTABLE_H_
#define _PRINTABLE_H_
#include <iostream>

using namespace std;

class Printable
{
    friend ostream &operator<<(ostream &os, const Printable &obj);

public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable() = default;
};



#endif