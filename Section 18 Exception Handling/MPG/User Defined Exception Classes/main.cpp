#include <iostream>

using namespace std;

class DivideByZeroException{};
class NegativeValueException{};

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw DivideByZeroException();
    if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
}

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
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (const DivideByZeroException &ex)
    {
        cerr << "Can't divide by 0" << endl;
    }
    catch (const NegativeValueException &ex){
        cerr << "A parameter is Negative" << endl;
    }

    cout << "Bye" << endl;
    return 0;
}