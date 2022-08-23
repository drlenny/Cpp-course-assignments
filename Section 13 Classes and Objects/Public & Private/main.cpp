#include <iostream>
#include <string>

using namespace std;

class Player
{
// only available to other members or friend
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;

// available to all, can be called from outside the class
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

int main(){

    Player frank;
    // // errors
    // frank.name = "Frank";
    // cout << frank.health << endl;
    frank.talk("Hello there!");

    return 0;
}