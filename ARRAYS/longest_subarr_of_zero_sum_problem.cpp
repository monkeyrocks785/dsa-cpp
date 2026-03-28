// Problem Statement: Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int mx = 0;
    unordered_map<int, int> m;
    int sum = 0;

    // Approach : Brute Force
    // for (int i = 0; i < (int)a.size(); i++)
    // {
    //     sum += a[i];
    //     if (sum == 0)
    //     {
    //         mx = max(mx, i + 1);
    //     }

    //     else if (m.find(sum) != m.end())
    //     {
    //         mx = max(mx, i - m[sum]);
    //     }

    //     else
    //     {
    //         m[sum] = i;
    //     }
    // }

    // Approach : Optimal
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
        {
            mx = max(mx, i + 1);
        }
        else
        {
            if (m.find(sum) != m.end())
            {
                mx = max(mx, i - m[sum]);
            }
            else
            {
                m[sum] = i;
            }
        }
    }

    return mx;
}

int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;
    return 0;
}