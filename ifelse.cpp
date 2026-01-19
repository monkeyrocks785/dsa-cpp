#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else if (age < 18 && age >= 0)
    {
        cout << "You are not an adult" << endl;
    }
    else
    {
        cout << "Invalid age" << endl;
    }

    return 0;
}