#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n====================================" << endl;
    cout << num << endl;
    cout << ref << endl;

    num = 300;
    cout << "\n====================================" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n====================================" << endl;
    vector<string> stooges { "Larry", "Moe", "Curly" };

    for (auto str : stooges)
        str = "Funny"; // str is a COPY of the each vector element

    for (auto str : stooges) // no change
        cout << str << endl;

    cout << "\n====================================" << endl;
    for (auto &str: stooges)    //str is a reference to each vector element
        str = "Funny";
    
    for (auto const &str: stooges)  // notice use of const
        cout << str << endl;        // now the vector elements have changed

    cout << endl;
    return 0;
}