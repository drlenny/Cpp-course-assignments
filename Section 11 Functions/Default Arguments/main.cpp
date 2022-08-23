#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix){
    cout << "Hello, " << prefix + " " + name + " " + suffix << endl;
};

int main()
{
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.35); // will not use defaults

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl; // 112.25

    cost = calc_cost(100.0, 0.08);       // will use default shipping 100 + 8 + 3.50
    cout << "Cost is: " << cost << endl; // 111.50

    cost = calc_cost(200.0);             // wil use default tax and shipping 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl; // 215.50

    cost = calc_cost();// 100 + 6 + 3.50
    cout << "Cost is: " << cost << endl; // 109.50

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("Joe Bob", "Professor");
    greeting("Mary", "Ms.");

    return 0;
}