#include <iostream>

using namespace std;

int main()
{

    char selection{};
    do
    {
        cout << "\n=======================" << endl;
        cout << "1. Do This" << endl;
        cout << "2. Do That" << endl;
        cout << "3. Do Something Else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: " << endl;
        cin >> selection;

        if (selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
            else if (selection == 'q' || selection == 'Q')
            cout << "Goodbye..." << endl;
            else 
            cout << "Unknown option -- try again" << endl;

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}