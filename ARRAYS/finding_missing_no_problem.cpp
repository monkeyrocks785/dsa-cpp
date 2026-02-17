// Problem statement: Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> arr)
{
    // Approach : Linear search
    int n = arr.size() + 1;
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return i;
        }
    }
}

int main()
{
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNum(arr) << endl;

    return 0;
}