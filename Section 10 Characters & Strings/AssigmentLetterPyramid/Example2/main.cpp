#include <iostream>

#include <string>



using namespace std;



int main (){

   

    string text {};

    cout<<"enter the text to make the pyramid: ";

    getline(cin,text);

    int size_of_text {text.length()};

    int no_of_space {};

    string str_to_show {};

   

    for (int i {0}; i<size_of_text; i++){ //  a loop for counting lines of pyramid   

        no_of_space = size_of_text-1-i;

        str_to_show=text.substr(0,i+1);

        for (int j {str_to_show.length()-2};j>=0;j--) //a loop for displaying each line

            str_to_show+=str_to_show[j];

        cout<<string(no_of_space,' ')<<str_to_show<<endl;

    }

   

    return 0;

}