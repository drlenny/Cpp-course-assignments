#include <iostream>

using namespace std;

int main()
{

    char letter_grade{};

    cout << "Enter the letter grade you expect to get on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need at least 90" << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need between 80 and 89" << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need 70 to 79" << endl;
        break;
    case 'd':
    case 'D':
        cout << "You need 60 to 69" << endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "You sure? (Y/N)";
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y')
            cout << "You failed" << endl;
        else if (confirm == 'n' || confirm == 'N')
            cout << "go study" << endl;
        else
            cout << "invalid choice" << endl;
        break;
    }

    default:
        cout << "invalid grade" << endl;
    }

    cout << endl;
    return 0;
}