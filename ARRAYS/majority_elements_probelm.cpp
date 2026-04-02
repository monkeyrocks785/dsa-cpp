// Problem Statement: Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    // Approach : Brute Force
    // for (int x : nums)
    // {
    //     int count = 0;
    //     for (int y : nums)
    //     {
    //         if (x == y)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > nums.size() / 2)
    //     {
    //         return x;
    //     }
    // }

    // Approach : Hash Map
    unordered_map<int, int> freq;
    for (int x : nums)
    {
        freq[x]++;
    }
    for (auto it : freq)
    {
        if (it.second > nums.size() / 2)
        {
            return it.first;
        }
    }
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;

    return 0;
}