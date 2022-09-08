#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream in_file{"romeoandjuliet.txt"};
    ofstream out_file{"romeoandjuliet_out.txt"};
    if (!in_file)
    {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    if (!out_file)
    {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    string line;
    int line_number{1};

    do
    {
        if (line == "")
        {
            out_file << endl;
        }
        else
        {
            out_file << setw(7) << left << line_number << line << endl;
            line_number++;
        }

    } while (getline(in_file, line));

    cout << "Copy Complete" << endl;

    in_file.close();
    out_file.close();

    return 0;
}