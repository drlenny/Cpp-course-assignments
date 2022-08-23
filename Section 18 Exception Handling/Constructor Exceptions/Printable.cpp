#include "Account.h"

using namespace std;

ostream &operator<<(ostream &os, const Printable &obj)
{
    obj.print(os);
    return os;
}