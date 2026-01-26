// Problem Statement: Given an integer N, return true if it is a palindrome else return false.
// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int reversed = 0;
    while (n > 0)
    {
        int l = n % 10;
        reversed = reversed * 10 + l;
        n = n / 10;
    }
    if (original == reversed)
    {
        cout << "Number is a palindrome" << endl;
    }
    else
    {
        cout << "Number isn't a palindrome" << endl;
    }

    return 0;
}