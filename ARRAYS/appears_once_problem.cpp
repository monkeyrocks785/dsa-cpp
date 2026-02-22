// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

#include <bits/stdc++.h>
using namespace std;

int singleNum(vector<int> &arr)
{
    int n = arr.size();
    // Approach 1 : using linear search
    // for (int i = 0; i < n; i++)
    // {
    //     int c = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             c++;
    //     }
    //     if (c == 1)
    //         return arr[i];
    // }

    // Approach 2 : using hashing
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second == 1)
            return it.first;
    }
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    cout << singleNum(arr) << endl;
    return 0;
}