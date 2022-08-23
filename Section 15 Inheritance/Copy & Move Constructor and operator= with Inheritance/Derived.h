#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"

using namespace std;

#pragma once

class Derived : public Base
{
public:

    Derived(const Derived &other);    // copy constructor
    Derived &operator=(const Derived &rhs);   //  copy assignment

    Derived();
    Derived(int x);
    ~Derived();

private:
    int doubled_value;
};

#endif