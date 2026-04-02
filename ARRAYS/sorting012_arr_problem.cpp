// Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

#include <bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int> &nums)
{
    // Approach : BruteForce
    int count0 = 0, count1 = 0, count2 = 0;
    for (int x : nums)
    {
        if (x == 0)
            count0++;
        else if (x == 1)
            count1++;
        else
            count2++;
    }
    int idx = 0;
    while (count0--)
    {
        nums[idx++] = 0;
    }
    while (count1--)
    {
        nums[idx++] = 1;
    }
    while (count2--)
    {
        nums[idx++] = 2;
    }
}

int main()
{
    vector<int> nums = {1, 0, 2, 1, 0};
    sortZeroOneTwo(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }
    
    return 0;
}