// Problem Statement: Given an integer N return the reverse of the given number.
// Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 0;

    while (n > 0)
    {
        int l = n % 10;
        r = r * 10 + l;
        n = n / 10;
    }

    cout << "Reverse is : " << r << endl;

    return 0;
}