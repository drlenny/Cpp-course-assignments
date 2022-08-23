#include <iostream>

using namespace std;

int main()
{

    int sum{0};

    for (int i{1}; i <= 15; i += 2)
        sum += i;
        cout << sum;

    cout << endl;
    return 0;
}