// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    // Approach 1 : Using for loop from 1 to min(n1, n2)
    // int gcd = 1;
    // for (int i = 1; i <= min(n1, n2); i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }
    // cout << "GCD : " << gcd << endl;

    // Approach 2 : Using for loop from min(n1, n2) to 1
    int gcd;
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD : " << gcd << endl;

    return 0;
}