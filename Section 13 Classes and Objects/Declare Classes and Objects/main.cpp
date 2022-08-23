#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attibutes
    string name{"Player"};
    int health{0};
    int xp{0};

    //methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name{"Account"};
    double balance{0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main(){

    Account frank_account;
    Account jim_account;

    // objects
    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    // objects on the heap (like with pointers)
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}