// Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroToEnd(vector<int> &arr, int n)
{
    // Approach : Brute Force
    // vector<int> temp(n, 0);
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         temp[index] = arr[i];
    //         index++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    // }

    // Approach : Optimal
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        return arr;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12, 0, 0, 5, 0, 5, 6, 874, 25};
    int n = arr.size();

    cout << "Original Array: ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    moveZeroToEnd(arr, n);

    cout << "\nArray after moving zeros to the end: ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}