// Problem Description: Given an integer N, write a program to print numbers from N to 1.

#include <bits/stdc++.h>
using namespace std;

void printN(int n)
{
    if (n < 1)
    {
        return;
    }
    // Approach 1 : Forward Recusion
    // cout << n << endl;
    // printN(n - 1);
    // Approach 2 : Backtracking
    printN(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    printN(n);
    return 0;
}