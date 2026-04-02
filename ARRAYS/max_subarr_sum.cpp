// Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxS = INT_MIN;
    int sum = 0;

    // Approach : Brute Force
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //     }
    //     maxS = max(maxS, sum);
    // }

    // Approach : Better
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxS = max(maxS, sum);
        }
    }

    return maxS;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}