// Problem Statement: You are given an array. The task is to reverse the array and print it.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int n : arr)
        cout << n << " ";

    // Approach: Built-in Function
    vector<int> a1 = arr;
    reverse(a1.begin(), a1.end());
    cout << "\nReversed array: ";
    for (int n : a1)
        cout << n << " ";
    return 0;
}