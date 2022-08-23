#include <iostream>

using namespace std;

int main()
{

    int cents{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    cout << "\nIn the US:" << endl;
    cout << "1 dollar is 100 cents" << endl;
    cout << "1 quarter is 25 cents" << endl;
    cout << "1 dime is 10 cents" << endl;
    cout << "1 nickel is 5 cents" << endl;
    cout << "1 penny is 1 cent" << endl;

    cout << "\nEnter an amount in cents: " << endl;
    cin >> cents;

    // dollars = cents / 100;
    // cents -= dollars * 100;

    // quarters = cents / 25;
    // cents -= quarters * 25;

    // dimes = cents / 10;
    // cents -= dimes * 10;

    // nickels = cents / 5;
    // cents -= nickels * 5;

    // ========== WITH MODULO ============== //

    dollars = cents / 100;
    cents %= 100;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    pennies = cents;

    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    // cout << "\nYou entered " << cents << " cents" << endl;

    cout << endl;
    return 0;
}