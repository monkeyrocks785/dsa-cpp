// Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int length = (log10(n) + 1);
    int sum = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, length);
        temp /= 10;
    }

    if (sum == n)
        cout << "It is an Armstrong number" << endl;
    else
        cout << "It isn't an Armstrong number" << endl;

    return 0;
}