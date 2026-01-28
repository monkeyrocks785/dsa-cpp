// Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

#include <bits/stdc++.h>
using namespace std;

int sumN(int n)
{
    // Approach 1: Brute Force
    // if (n == 0)
    // {
    //     return 0;
    // }
    // return n + sumN(n - 1);

    // Approach 2: Using Formula
    return (n * (n + 1)) / 2;
}

int main()
{
    int n;
    cin >> n;
    int s = sumN(n);
    cout << s;
    return 0;
}