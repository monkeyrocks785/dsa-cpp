// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

#include <bits/stdc++.h>
using namespace std;

void getEle(int arr[], int n)
{
    if (n < 2)
    {
        cout << "Not enough elements in the array" << endl;
        return;
    }
    // Approach : Brute Force
    // sort(arr, arr + n);
    // int s = arr[1];
    // int l = arr[n - 2];
    // cout << "Second Smallest: " << s << " and Second Largest: " << l << endl;
    
    // Approach : Optimal
    int s = INT_MAX, l = INT_MIN;
    int ss = INT_MAX, sl = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        s = min(s, arr[i]);
        l = max(l, arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ss && arr[i] != s)
        {
            ss = arr[i];
        }
        if (arr[i] > sl && arr[i] != l)
        {
            sl = arr[i];
        }
    }
    cout << "Second Smallest: " << ss << " and Second Largest: " << sl << endl;
}

int main()
{
    int arr[5] = {8, 10, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    getEle(arr, n);
    return 0;
}