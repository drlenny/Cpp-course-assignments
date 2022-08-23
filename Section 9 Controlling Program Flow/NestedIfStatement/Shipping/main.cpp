#include <iostream>

using namespace std;

int main()
{

    int length{}, width{}, height{};
    double base_cost{2.50};

    // const int tier1_threshold{100}; // volume
    // const int tier2_threshold{500}; // volume

    // int max_dimension_length{10}; //inches

    double tier1_surcharge{0.10}; // 10% extra
    double tier2_surcharge{0.25}; // 25% extra

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > 10 || width > 10 || height > 10)
    {
        cout << "Package rejected - dimensions exceeded" << endl;
    }
    else
    {
        package_volume = length * width * height;

        if (package_volume < 100){
            cout << "The cost for shipping is $" << base_cost << endl;
        } else if (package_volume >= 100){
            if (package_volume >= 100 && package_volume < 500){
                cout << "The cost for shipping is $" << base_cost + base_cost * tier1_surcharge << endl;
            }
            if (package_volume >= 500){
                cout << "The cost for shipping is $" << base_cost + base_cost * tier2_surcharge << endl;
            }
        }
    }

    cout << endl;
    return 0;
}