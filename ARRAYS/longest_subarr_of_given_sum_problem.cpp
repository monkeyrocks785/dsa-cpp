// Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

#include <bits/stdc++.h>
using namespace std;

int longestSubarr(vector<int> &nums, int k)
{
    int n = nums.size();
    int mx = 0;

    // Approach 1: Brute Force
    // for (int si = 0; si < n; si++)
    // {
    //     for (int ei = si; ei < n; ei++)
    //     {
    //         int s = 0;
    //         for (int i = si; i <= ei; i++)
    //         {
    //             s += nums[i];
    //         }
    //         if (s == k)
    //         {
    //             mx = max(mx, ei - si + 1);
    //         }
    //     }
    // }

    // Aproach 2: Two-pointers
    int l = 0, r = 0, s = nums[0];
    while (r < n)
    {
        while (l <= r && s > k)
        {
            s -= nums[l];
            l++;
        }
        if (s == k)
        {
            mx = max(mx, r - l + 1);
        }
        r++;
        if (r < n)
        {
            s += nums[r];
        }
    }

    return mx;
}

int main()
{
    vector<int> a = {-1, 1, 1, 2};
    int k = 1;
    cout << longestSubarr(a, k) << endl;
    return 0;
}