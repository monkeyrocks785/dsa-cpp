// Problem Statement: You are given an array. The task is to reverse the array and print it.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int n : arr)
        cout << n << " ";

    vector<int> a1 = arr;

    // Approach: Built-in Function
    // reverse(a1.begin(), a1.end());

    // Approach: Brute Force
    for (int i = 0; i < arr.size(); i++)
    {
        a1[i] = arr[arr.size() - 1 - i];
    }

    // Approach: Two pointer Technique
    // int u = 0;
    // int v = arr.size() - 1;
    // while (u < v)
    // {
    //     swap(a2[u], a2[v]);
    //     u++;
    //     v--;
    // }

    cout << "\nReversed array: ";
    for (int n : a1)
        cout << n << " ";

    return 0;
}