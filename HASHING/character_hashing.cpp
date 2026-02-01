// There can be three cases in character hashing - (1) Only lowercase string; (2) Only uppercase string;(1) Combination of both lowercase and uppercase in a string

#include <bits/stdc++.h>
using namespace std;

// Here we make hash array of size 26 to fit all from 0 - 25.

// Case 1

int main()
{
    string s;
    cin >> s;

    // Pre-storing
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     case 1
    //     hash[s[i] - 'a']++;

    //     case 2
    //     hash[s[i] - 'A']++;
    // }

    // Pre-storing for case 3
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetching
        // case 1
        // cout << "Appearance of " << c << " is : " << hash[c - 'a'] << endl;
        // case 2
        // cout << "Appearance of " << c << " is : " << hash[c - 'A'] << endl;
        // case 3
        cout << "Appearance of " << c << " is : " << hash[c] << endl;
    }

    return 0;
}

// We can use CASE 3 approach for CASE 1 and 2 as well