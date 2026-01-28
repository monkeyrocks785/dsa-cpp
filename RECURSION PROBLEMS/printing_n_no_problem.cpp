// Problem Description: Given an integer N, write a program to print numbers from 1 to N.

#include <bits/stdc++.h>
using namespace std;

void printN(int n, int c)
{
    if (c > n)
    {
        return;
    }

    // Approach 1: Forward Recusion - printing the number before the recursive call

    // cout << c << endl;
    // printN(n, c + 1);

    // Approach 2: Backtracking - printing the number after the recursive call

    printN(n, c + 1);
    cout << c << endl;
}

int main()
{
    int n;
    cin >> n;
    int c = 1;
    printN(n, c);

    return 0;
}