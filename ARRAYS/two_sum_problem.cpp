// Problem Statement: Given an array of integers arr[] and an integer target.
// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

#include <bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
// string solve1(vector<int> &a, int t, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == t)
//             {
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

// vector<int> solve2(vector<int> &a, int t, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == t)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }

// Approach 2: Using Hashing
// string solve1(vector<int> &a, int t, int n)
// {
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int comp = t - a[i];
//         if (mp.find(comp) != mp.end())
//         {
//             return "YES";
//         }
//         mp[a[i]] = i;
//     }
//     return "NO";
// }

// vector<int> solve2(vector<int> &a, int t, int n)
// {
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int comp = t - a[i];
//         if (mp.find(comp) != mp.end())
//         {
//             return {mp[comp], i};
//         }
//         mp[a[i]] = i;
//     }
//     return {-1, -1};
// }

// Approach 3: Greedy Approach (Sorting + Two Pointers)
string solve1(vector<int> &a, int t, int n)
{
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({a[i], i});
    }
    sort(vp.begin(), vp.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        int s = vp[l].first + vp[r].first;
        if (s == t)
        {
            return "YES";
        }
        else if (s < t)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return "NO";
}

vector<int> solve2(vector<int> &a, int t, int n)
{
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({a[i], i});
    }
    sort(vp.begin(), vp.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        int s = vp[l].first + vp[r].first;
        if (s == t)
        {
            return {vp[l].second, vp[r].second};
        }
        else if (s < t)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // Variant 1
    cout << solve1(arr, target, arr.size()) << "\n";

    // Variant 2
    vector<int> res = solve2(arr, target, arr.size());
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}