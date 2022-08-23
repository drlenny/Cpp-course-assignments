#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// used for looping through arrays (it is a lot like hooks kinda)

int main()
{

    int scores[]{10, 20, 30};

    // auto deduces the correct type in the collection
    for (auto score : scores)
        cout << score << endl;

    vector<double> temperatures{87.9, 77.4, 80.0, 78.1};
    double average_temp{};
    double total{};

    for (auto temp : temperatures)
        total += temp;

    if (temperatures.size() != 0)
        average_temp = total / temperatures.size();

    cout << fixed << setprecision(1);
    cout << "Average temperature is " << average_temp << endl;

    for (auto val : {1, 2, 3, 4, 5})
        cout << val << endl;

    for (auto c : "This is a test")
        if (c != ' ')
            cout << c;

    for (auto c : "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    cout << endl;
    return 0;
}