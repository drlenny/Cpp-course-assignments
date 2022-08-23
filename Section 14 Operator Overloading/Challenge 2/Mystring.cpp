#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

// No-args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    //       cout << "Copy constructor used" << endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    //        cout << "Move constructor used" << endl;
}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    //    cout << "Using copy assignment" << endl;

    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    //   cout << "Using move assignment" << endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
ostream &operator<<(ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

// overloaded extraction operator
istream &operator>>(istream &in, Mystring &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}

// Global operator method definitions

// equality
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (strcmp(lhs.str, rhs.str) == 0);
}

// inequality
bool operator!=(const Mystring &lhs, const Mystring &rhs)
{
    return (strcmp(lhs.str, rhs.str) != 0);
}

// less than
bool operator<(const Mystring &lhs, const Mystring &rhs)
{
    return (strcmp(lhs.str, rhs.str) < 0);
}

// greater than
bool operator>(const Mystring &lhs, const Mystring &rhs)
{
    return (strcmp(lhs.str, rhs.str) > 0);
}

// lowercase
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenation and assign
Mystring &operator+=(Mystring &lhs, const Mystring &rhs)
{
    lhs = lhs + rhs;
    return lhs;
}

// repeat n times
Mystring operator*(const Mystring &lhs, int n)
{
    Mystring temp;
    for (int i = 1; i <= n; i++)
        temp = temp + lhs;
    return temp;
}

// repeat n times and save to lhs
Mystring &operator*=(Mystring &lhs, int n)
{
    lhs = lhs * n;
    return lhs;
}

// pre increment ++ uppercase
Mystring &operator++(Mystring &obj)
{
    for (size_t i = 0; i < strlen(obj.str); i++)
        obj.str[i] = toupper(obj.str[i]);
    return obj;
}

// post increment ++ uppercase
Mystring operator++(Mystring &obj, int)
{
    for (size_t i = 0; i < strlen(obj.str); i++)
        obj.str[i] = toupper(obj.str[i]);
    return obj;
}
