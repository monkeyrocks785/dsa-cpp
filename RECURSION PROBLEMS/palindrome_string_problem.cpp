// Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.

#include <bits/stdc++.h>
using namespace std;

// Appraoch: Two pointer approach
// bool palindrome(string &s)
// {
//     int n = s.length();
//     int u = 0;
//     int v = n - 1;
//     while (u < v)
//     {
//         if (s[u] != s[v])
//         {
//             return false;
//         }
//         u++;
//         v--;
//     }
//     return true;
// }

// Approach: Recursion
bool palindrome(string &s, int i)
{
    int n = s.length();
    if (i >= s.length() / 2)
    {
        return true;
    }
    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    return palindrome(s, i + 1);
}

int main()
{
    string s;
    cin >> s;
    int i = 0;
    // if (palindrome(s))
    // {
    //     cout << "Palindrome String" << endl;
    // }
    // else
    // {
    //     cout << "Not a Palindrome String" << endl;
    // }
    if (palindrome(s, i))
    {
        cout << "Palindrome String" << endl;
    }
    else
    {
        cout << "Not a Palindrome String" << endl;
    }
    return 0;
}