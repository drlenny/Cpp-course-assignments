#include <iostream>

using namespace std;

int main(){

    int num1(10);
    int num2(20);

    num1 = num2 = 1111; // value on right is being assigned to left; goes right to left

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}