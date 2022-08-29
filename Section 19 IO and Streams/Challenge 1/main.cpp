// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void ruler()
{
    cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
}

struct City
{
    string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country
{
    string name;
    vector<City> cities;
};

struct Tours
{
    string title;
    vector<Country> countries;
};

int main()
{
    Tours tours{"Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia",
                        {{"Bogota", 8778000, 400.98},
                         {"Cali", 2401000, 424.12},
                         {"Medellin", 2464000, 350.98},
                         {"Cartagena", 972000, 345.34}},
                    },
                    {
                        "Brazil",
                        {{"Rio De Janiero", 13500000, 567.45},
                         {"Sao Paulo", 11310000, 975.45},
                         {"Salvador", 18234000, 855.99}},
                    },
                    {
                        "Chile",
                        {{"Valdivia", 260000, 569.12},
                         {"Santiago", 7040000, 520.00}},
                    },
                    {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
                }};

    // Unformatted display so you can see how to access the vector elements

    ruler();
    cout << "\n";
    cout << setw(50) << tours.title << endl;
    cout << setw(21) << left << "\nCountry"
         << setw(20) << left << "City"
         << setw(24) << left << "Population"
         << "Price";

    cout << setfill('-') << setw(70) << "\n"
         << endl;
    cout << setfill(' ');

    cout << setprecision(2) << fixed;

    for (auto country : tours.countries)
    { // loop through the countries
        for (size_t i = 0; i < country.cities.size(); ++i)
        { // loop through the cities for each country

            cout << setw(20) << left << ((i == 0) ? country.name : "");

            cout << setw(15) << left << country.cities.at(i).name
                 << setw(15) << right << country.cities.at(i).population
                 << setw(19) << right << country.cities.at(i).cost
                 << endl;
        }
    }

    cout << endl
         << endl;
    return 0;
}