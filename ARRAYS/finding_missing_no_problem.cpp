// Problem statement: Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> arr)
{
    int n = arr.size() + 1;
    // Approach : Linear search

    // for (int i = 1; i <= n; i++)
    // {
    //     bool found = false;
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (arr[j] == i)
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found)
    //     {
    //         return i;
    //     }
    // }

    // Approach : using hashing

    // vector<int> hash(n + 1, 0);

    // for (int i = 0; i < n - 1; i++)
    // {
    //     hash[arr[i]]++;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (hash[i] == 0)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

    // Approach : using sum formula

    // int sum = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     sum += arr[i];
    // }

    // int sum_exp = (n * (n + 1)) / 2;
    // return sum_exp - sum;

    // Approach : using XOR

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNum(arr) << endl;

    return 0;
}