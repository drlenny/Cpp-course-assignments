#ifndef _MYSTRING_H_
#define _MYSTRING_H_

using namespace std;

class Mystring
{
    friend ostream &operator<<(ostream &os, const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &rhs);

    // non memeber functions
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);    // equality
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);    // inequality
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);  // less than
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);  // greater than
    friend Mystring operator-(const Mystring &obj);   // lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // concatenate

    friend Mystring& operator+=(Mystring &lhs, const Mystring &rhs);  // concatenate and save to lhs
    friend Mystring operator*(const Mystring &lhs, int n);   // repeat n times
    friend Mystring& operator*=(Mystring &lhs, int n); // repeat n times and save to lhs

    friend Mystring& operator++(Mystring &obj);  // pre increment capitalize   
    friend Mystring operator++(Mystring &obj, int);  // post increment capitalize   


private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment

    // // operator member methods
    // Mystring operator-() const;                    // make lowercase
    // Mystring operator+(const Mystring &rhs) const; // concatenate
    // bool operator==(const Mystring &rhs) const;    // equality
    // bool operator!=(const Mystring &rhs) const;     // inequality
    // bool operator<(const Mystring &rhs) const;    // less than
    // bool operator>(const Mystring &rhs) const;    // greater than
    // Mystring& operator+=(const Mystring& rhs);      // concatenate to the lhs
    // Mystring operator*(int n) const;  // repeat n times
    // Mystring& operator*=(int n);     // repeat n times and save to lhs
    // Mystring& operator++();     // pre increment capitalize ++
    // Mystring operator++(int);      // post increment capitalize ++

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_