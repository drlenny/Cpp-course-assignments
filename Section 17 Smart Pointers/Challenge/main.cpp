// Section 17
// Challenge 1
/***********************************************************************************************************
Create a program that has the following:

1. a function named make that creates and returns a unique_ptr to a vector of shared_ptrs to Test objects. 

2. a function named fill that expects a vector of shared pointers to Test objects and a int
   representing the number of Test objects to create dynamically and add to the vector.
   
   This function will prompt the user to enter an integer, create a shared_ptr to a Test object 
   initialized to the entered integer and add that shared pointer to the vector.
   
3. a function named display that expects a vector of shared_ptrs to Test object and displays the
   data in each Test object
   
4. The main driver should look as follows:

    int main() {
        unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
        vec_ptr = make();
        cout << "How many data points do you want to enter: ";
        int num;
        cin >> num;
        fill(*vec_ptr, num);
        display(*vec_ptr);
        return 0;
    }
    
Below is a sample run for the user entering 3 at the console:
    
How many data points do you want to enter: 3
Enter data point [1] : 10
        Test constructor (10)
Enter data point [2] : 20
        Test constructor (20)
Enter data point [3] : 30
        Test constructor (30)
Displaying vector data
=======================
10
20
30
=======================
        Test destructor (10)
        Test destructor (20)
        Test destructor (30)

- I am providing the function prototypes in the code. 
However, feel free to modify these as you wish
***********************************************************************************************************/
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} { cout << "\tTest constructor (" << data << ")" << endl; }
    Test(int data) : data {data} { cout << "\tTest constructor (" << data << ")" << endl; }
    int get_data() const {return data; }
    ~Test() {cout << "\tTest destructor (" << data << ")" << endl; }
};

// Function prototypes
auto make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>>&vec);


auto make(){
    return make_unique<vector<shared_ptr<Test>>>();
};

void fill(vector<shared_ptr<Test>> &vec, int num){
    int temp;
    for (int i = 1; i <= num; i++){
        cout << "Add an integer to the data vector: ";
        cin >> temp;
        // shared_ptr<Test> ptr = make_shared<Test>(temp); 
        vec.push_back(make_shared<Test>(temp));
    }
}

void display(const vector<shared_ptr<Test>>&vec){
    for (const auto &acc: vec)
        cout << acc->get_data() << endl;
}

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}