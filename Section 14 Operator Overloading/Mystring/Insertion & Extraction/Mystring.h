#ifndef MYSTRING_H
#define MYSTRING_H

using namespace std;

class Mystring
{
    // global friends
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

    friend ostream &operator << (ostream &os, const Mystring &rhs);
    friend istream &operator >> (istream &in, Mystring &rhs);
private:
    char *str; // pointer to a char[] that holds a C style string
public:
    Mystring();                       // No args constructor
    Mystring(const char *s);          // Overloaded Constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source);        // move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs);   //Copy assignment
    Mystring &operator=(Mystring &&rhs);        // Move assignment

    // getters
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif