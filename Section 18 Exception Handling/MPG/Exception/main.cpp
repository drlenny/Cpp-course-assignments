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

    try
    {
        if (gallons == 0)
            throw 0;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch(int &test){
        cerr << "Error" << endl;
    }

    cout << "Bye" << endl;
    return 0;
}