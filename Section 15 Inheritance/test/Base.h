#ifndef BASE_H
#define BASE_H

using namespace std;

#pragma once

class Base
{
private:
    int value;

public:
    Base(); // no arg constr
    Base(int x); // overloaded constr
    ~Base(); // destr
};

#endif