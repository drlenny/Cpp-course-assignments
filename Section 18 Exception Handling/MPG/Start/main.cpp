#include <iostream>

using namespace std;

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;

    // miles_per_gallon = miles / gallons; // crashes if divide by 0
    if (gallons != 0)
    {
        miles_per_gallon = static_cast<double>(miles) / gallons; // inf if divide by 0
        cout << "Result: " << miles_per_gallon << endl;
    }
    else
    {
        cerr << "Something went wrong" << endl;
    }

    cout << "Bye" << endl;
    return 0;
}