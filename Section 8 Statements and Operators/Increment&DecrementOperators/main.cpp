// Section 8
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++

    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>

using namespace std;

int main()
{

    int counter{10};
    int result{0};

    // Example 1 - simple increment
    cout << "Counter : " << counter << endl;

    counter = counter + 1;
    cout << "Counter : " << counter << endl;

    counter++;
    cout << "Counter : " << counter << endl;

    ++counter;
    cout << "Counter : " << counter << endl;

    cout << endl;

    // Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter; // Note the preincrement
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;

    // Example 3 - postincrement
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++; // Note the post increment, counter gets incremented after it is used in statement
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;

    // Example 4
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter + 10; // Note the pre increment

    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;

    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++ + 10; // Note the post increment, counter gets incremented after it is used in statement
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;

    return 0;
}