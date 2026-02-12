// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

#include <bits/stdc++.h>
using namespace std;

// Approach : Brute Force
// void rightShift(vector<int> &nums, int k, int n)
// {
//     k %= n;

//     if (n == 0 || k == 0)
//     {
//         return;
//     }

//     int temp[k];
//     for (int i = n - k; i < n; i++)
//     {
//         temp[i - (n - k)] = nums[i];
//     }

//     for (int i = n - k - 1; i >= 0; i--)
//     {
//         nums[i + k] = nums[i];
//     }

//     for (int i = 0; i < k; i++)
//     {
//         nums[i] = temp[i];
//     }
// }

// void leftShift(vector<int> &nums, int k, int n)
// {
//     k %= n;

//     if (n == 0 || k == 0)
//     {
//         return;
//     }

//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = nums[i];
//     }

//     for (int i = k; i < n; i++)
//     {
//         nums[i - k] = nums[i];
//     }

//     for (int i = 0; i < k; i++)
//     {
//         nums[n - k + i] = temp[i];
//     }
// }

// Approach : Optimal
void reverseArr(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

vector<int> shiftArr(vector<int> &nums, int k, int n, string direction)
{
    k %= n;
    if (n == 0 || k == 0)
    {
        return nums;
    }

    if (direction == "right")
    {
        reverseArr(nums, 0, n - 1);
        reverseArr(nums, 0, k - 1);
        reverseArr(nums, k, n - 1);
    }
    if (direction == "left")
    {
        reverseArr(nums, 0, k - 1);
        reverseArr(nums, k, n - 1);
        reverseArr(nums, 0, n - 1);
    }

    return nums;
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
    // rightShift(nums, k, n);
    vector<int> rightArr = shiftArr(nums, k, n, "right");
    for (int i = 0; i < n; i++)
    {
        cout << rightArr[i] << " ";
    }

    cout << "\nRotating array to the left by " << k + 1 << " elements: ";
    // leftShift(nums, k + 1, n);
    vector<int> leftArr = shiftArr(nums, k + 1, n, "left");
    for (int i = 0; i < n; i++)
    {
        cout << leftArr[i] << " ";
    }

    return 0;
}