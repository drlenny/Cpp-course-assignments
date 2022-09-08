#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in_file{"poem.txt"};
    ofstream out_file{"poem_out.txt"};
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

    char c;
    while (in_file.get(c))
        out_file.put(c);

    cout << "File copied" << endl;

    in_file.close();
    out_file.close();

    return 0;
}