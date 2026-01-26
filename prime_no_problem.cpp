// Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}