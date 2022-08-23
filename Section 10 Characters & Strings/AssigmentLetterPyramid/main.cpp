#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string input{};

    cout << "Enter a string of characters: ";
    getline(cin, input);

    int input_size{input.length()};

    int spaces{};

    string str_to_show{};

    for (int i{0}; i < input_size; ++i)
    {

        spaces = input_size - 1 - i;

        str_to_show = input.substr(0, i + 1);

        for (int j{str_to_show.length() - 2}; j >= 0; j--)
        {
            str_to_show += str_to_show[j];
        }
        cout << string(spaces, ' ') << str_to_show << endl;
    }

    cout << endl;
    return 0;
}