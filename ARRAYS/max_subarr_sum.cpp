// Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{

    // Approach : Brute Force
    // int maxS = INT_MIN;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += nums[k];
    //         }
    //         maxS = max(maxS, sum);
    //     }
    // }

    // Approach : Better
    // int maxS = INT_MIN;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //         maxS = max(maxS, sum);
    //     }
    // }

    // Approach : Optimal (Kadane's Algorithm)
    long long maxS = INT_MIN, sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxS = max(maxS, sum);
        if (sum < 0)
            sum = 0;
    }

    return maxS;
}

int main()
{
    vector<int> arr = {2, 3, -7, 4, 7, -4};
    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}