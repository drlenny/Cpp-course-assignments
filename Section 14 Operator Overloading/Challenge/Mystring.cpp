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

// equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) == 0);
}

// inequality
bool Mystring::operator!=(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) != 0);
}

// less than method
bool Mystring::operator<(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) < 0);
}

// greater than method
bool Mystring::operator>(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) > 0);
}

// make lowercase
Mystring Mystring::operator-() const
{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// pre increment capitalize ++
Mystring &Mystring::operator++()
{
    for (size_t i=0; i < strlen(str)+1; ++i)
        str[i] = toupper(str[i]);
    return *this;
}

// post increment capitalize ++
Mystring Mystring::operator++(int)
{
    Mystring temp(*this); // make a copy
    operator++();         // call pre increment
    return temp;          // return old value
}

// concatenate method
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenate to the lhs
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs.str;
    return *this;
}

// repeat n times
Mystring Mystring::operator*(int n) const
{
    Mystring temp;
    for (int i = 1; i <= n; i++)
        temp = temp + *this;
    return temp;
}

// repeat n times and save to lhs
Mystring &Mystring::operator*=(int n)
{
    *this = *this * n;
    return *this;
}
