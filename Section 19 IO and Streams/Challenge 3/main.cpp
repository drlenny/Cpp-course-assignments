#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream in_file{};
    string word{};
    string substring_search{};
    int number_of_total_words{0};
    int number_of_substring_found{0};

    in_file.open("romeoandjuliet.txt");
    if (!in_file)
    {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    cout << "\nEnter the substring to search for: ";
    cin >> substring_search;

    while (in_file >> word)
    {
        if (word.find(substring_search) != string::npos)
        {
            number_of_substring_found++;
        }
        number_of_total_words++;
    }

    cout << number_of_total_words << " words were searched..." << endl;

    cout << "The substring " << substring_search << " was found " << number_of_substring_found << " times" << endl;

    cout << endl;
    in_file.close();
    return 0;
}