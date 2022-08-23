#include <iostream>

using namespace std;

int main(){

    int num {};
    const int min {10};
    const int max {100};

    cout << "enter number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min && num <=max){
        cout << "you entered " << num << endl;

        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
        
    } else if (num > max || num < min){
        cout << "that is wrong" << endl;
    }

    cout << endl;
    return 0;
}