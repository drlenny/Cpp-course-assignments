#ifndef BASE_H
#define BASE_H
#include <iostream>

using namespace std;

#pragma once

class Base
{
private:
    int value;

public:

    Base(const Base &other);    // copy constructor
    Base &operator=(const Base &rhs);   //  copy assignment

    Base(); // no arg constructor
    Base(int x);  // overloaded constructor
    ~Base();  // destructor
};

#endif