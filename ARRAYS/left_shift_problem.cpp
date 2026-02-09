// Problem Statement: Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.

#include <bits/stdc++.h>
using namespace std;

void leftShift(vector<int> &nums, int n)
{
    // Approach 1 : Brute Force
    int temp = nums[0];
    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    int n = nums.size();
    leftShift(nums, n);
    cout << "\nArray after left shift: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}