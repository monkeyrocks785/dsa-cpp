// Problem Statement: Given an integer N, return all divisors of N.
// A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> divisors;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
        }
    }
    cout << "Divisors of " << n << " are: ";
    for (int div : divisors)
    {
        cout << div << " ";
    }

    return 0;
}