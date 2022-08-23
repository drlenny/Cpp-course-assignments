#include <iostream>

using namespace std;

void func2(int &x, int y, int z)
{
    x += y + z;
}

int func1(int x, int y){
    int result {};
    result = x + y;
    func2(result, x, y);
    return result;
}

int main(){
    int x{10};
    int y{20};
    int z{};
    z = func1(x, y);
    cout << z << endl;
    return 0;
}

/*
What typically happens when main calls func1 (or any function calls another)?
There are other woays to achieve the same reults

main:
    push space for the return value
    push space for the parameters
    push the return address
    transfer control to funcq (jmp)
func1:
    push the address of the previous activation record
    push any register values that will need to be retored before returning to the caller
    perform the code in func1
    restore the register values
    restore the previous activation record (mov the stack pointer)
    store any function result
    transfer control to the return address(jmp)
main:
    pop the parameters
    pop the return value
*/