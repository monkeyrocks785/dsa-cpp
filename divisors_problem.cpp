// Problem Statement: Given an integer N, return all divisors of N.
// A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> divisors;
    // Approach 1: Brute Force
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         divisors.push_back(i);
    //     }
    // }

    // Approach 2: Optimized Approach - using a property of divisors as if i is a divisor of n then n/i is also a divisor of n
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
        }
        if (i != n / i)
        {
            divisors.push_back(n / i);
        }
    }

    cout << "Divisors of " << n << " are: ";
    for (int div : divisors)
    {
        cout << div << " ";
    }

    return 0;
}