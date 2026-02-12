// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

#include <bits/stdc++.h>
using namespace std;

void rightShift(vector<int> &nums, int k, int n)
{
    k %= n;

    if (n == 0 || k == 0)
    {
        return;
    }

    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - (n - k)] = nums[i];
    }

    for (int i = n - k - 1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }

    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}

void leftShift(vector<int> &nums, int k, int n)
{
    k %= n;

    if (n == 0 || k == 0)
    {
        return;
    }

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }

    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];
    }

    for (int i = 0; i < k; i++)
    {
        nums[n - k + i] = temp[i];
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\nRotating array to the right by " << k << " elements: ";
    rightShift(nums, k, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\nRotating array to the left by " << k + 1 << " elements: ";
    leftShift(nums, k + 1, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}