#include <iostream>

using namespace std;

int main()
{
    enum Direction
    {
        left,
        right,
        up,
        down
    };

    Direction heading{left};

    switch (heading)
    {
    case left:
        cout << "going left" << endl;
        break;
    case right:
        cout << "going right" << endl;
        break;
    case up:
        cout << "going up" << endl;
        break;
    case down:
        cout << "going down" << endl;
        break;
    default:
        cout << "OK" << endl;
    }

    cout << endl;
    return 0;
}