#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};

    // using default settings
    cout << "====== Default ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Note how since we can't displat in precision 2 scientific notation is used
    cout << setprecision(2);
    cout << "====== Precision 2 ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Using precision 5
    cout << setprecision(5);
    cout << "====== Precision 5 ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Using precision 9
    cout << setprecision(9);
    cout << "====== Precision 9 ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Using precision 3 and fixed
    cout << setprecision(3) << fixed; // precision happens after decimal point
    cout << "====== Precision 3 - fixed ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Using precision 3 and fixed and scientific notation
    // fixed carries down to here because is persistent
    cout << setprecision(3) << scientific;
    cout << "====== Precision 3 - scientific notation ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Same but display capital 'E' in scientific
    cout << setprecision(3) << scientific << uppercase;
    cout << "====== Precision 3 - scientific notation - uppercase ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Show '+' symbol for positive numbers
    cout << setprecision(3) << fixed << showpos;
    cout << "====== Precision 3 - fixed - showpos ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);
    cout << "====== Precision 3 - back to default ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Show trailing zeroes up to precision 10
    cout << setprecision(10) << showpoint;
    cout << "====== Precision 10 ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Back to default (for reals)
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    cout << "====== back to default (for reals) ===========" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}