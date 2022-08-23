#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
    char *str; // pointer to a char[] that holds a C style string
public:
    Mystring();                       // No atgs constructor
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