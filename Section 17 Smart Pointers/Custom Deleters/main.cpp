#include <iostream>
#include <memory>

using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0} { cout << "Test constructor (" << data << ")" << endl; }
    Test(int data) : data{data} { cout << "Test constructor (" << data << ")" << endl; }
    int get_data() const { return data; }
    ~Test() { cout << "Test destructor (" << data << ")" << endl; }
};

void my_deleter(Test *ptr)
{
    cout << "\tUsing my custom function deleter" << endl;
    delete ptr;
}

int main(){

    {
        // Using a function
        shared_ptr<Test> ptr1 {new Test{100}, my_deleter};
    }

    {
        // Using Lambdo expression
        shared_ptr<Test> ptr2(new Test{1001},
        [](Test *ptr) {
            cout << "\tUsing my custom lambda deleter" << endl;
            delete ptr;
        });
    }

    return 0;
}