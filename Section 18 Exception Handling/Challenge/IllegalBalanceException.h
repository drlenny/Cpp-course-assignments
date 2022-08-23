#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__
#include <exception>

using namespace std;

class IllegalBalanceException : exception
{
public:
    IllegalBalanceException() {}
    ~IllegalBalanceException() {}
    virtual const char *what() const noexcept { return "Error: Illegal Balance"; }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
