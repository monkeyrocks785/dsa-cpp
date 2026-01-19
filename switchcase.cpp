#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "Enter the number of day (1 to 7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Day is Monday";
        break;
    case 2:
        cout << "Day is Tuesday";
        break;
    case 3:
        cout << "Day is Wednesday";
        break;
    case 4:
        cout << "Day is Thursday";
        break;
    case 5:
        cout << "Day is Friday";
        break;
    case 6:
        cout << "Day is Saturday";
        break;
    case 7:
        cout << "Day is Sunday";
        break;

    default:
        cout << "Invalid input";
        break;
    }

    return 0;
}