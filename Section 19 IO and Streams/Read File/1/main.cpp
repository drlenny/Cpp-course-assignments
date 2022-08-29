#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream in_file;
    string line;
    string line2;
    int num;
    double total;

    in_file.open("test.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }

    in_file >> line >> line2 >> num >> total;
    cout << line << endl;
    cout << line2 << endl;
    cout << num << endl;
    cout << total << endl;

    in_file.close();

    return 0;
}