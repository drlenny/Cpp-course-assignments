#include "Mystring.h"
#include <iostream>
#include <cstring>

using namespace std;

// No args constructor
Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded Constructor
Mystring::Mystring(const char *s) : str{nullptr}
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

// Copy Constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}
// copies string one char at a time

// Move Constructor
Mystring::Mystring(Mystring &&source) : str(source.str)
{
    source.str = nullptr;
    cout << "Move constructor used" << endl;
}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout << "Copy assignment" << endl;
    if (this == &rhs)
        return *this;
    delete[] this->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout << "Using move assignment" << endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;     // assign right side pointer to left side pointer
    rhs.str = nullptr; // nullify right side pointer
    return *this;
}

// overloaded equality operator
bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) == 0);
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

// Display Method
void Mystring::display() const
{
    cout << str << " : " << get_length() << endl;
}

// length getter
int Mystring::get_length() const { return strlen(str); }

// string getter
const char *Mystring::get_str() const { return str; }