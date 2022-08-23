
// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned? " << endl;
    int small_rooms{0};
    cin >> small_rooms;

    cout << "How many big rooms would you like cleaned? " << endl;
    int big_rooms{0};
    cin >> big_rooms;

    const double small_room_price{25.0};
    const double big_room_price{35};
    const double sales_tax{0.06};
    const int estimate_expiry{30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of big rooms: " << big_rooms << endl;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per big room: $" << big_room_price << endl;
    cout << "Cost: $" << (small_room_price * small_rooms) + (big_room_price * big_rooms) << endl;
    cout << "Tax: $" << ((small_room_price * small_rooms) + (big_room_price * big_rooms)) * sales_tax << endl;
    cout << "==================================" << endl;
    cout << "Total estimate: $" << (small_room_price * small_rooms) + (big_room_price * big_rooms) + ((small_room_price * small_rooms) + (big_room_price * big_rooms)) * sales_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}
