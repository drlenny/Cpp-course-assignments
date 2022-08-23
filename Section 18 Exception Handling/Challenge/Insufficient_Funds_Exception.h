#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__
#include <exception>

using namespace std;

class Insufficient_Funds_Exception : exception
{
public:
    Insufficient_Funds_Exception() {}
    ~Insufficient_Funds_Exception() {}
    virtual const char *what() const noexcept { return "Error: Insufficient Funds"; }
};

#endif
