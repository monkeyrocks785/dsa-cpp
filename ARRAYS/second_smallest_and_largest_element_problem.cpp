// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 2];
}

int secondSmallest(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[1];
}

int main()
{
    int arr[5] = {8, 10, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ss = secondSmallest(arr, n);
    int sl = secondLargest(arr, n);
    cout << "Second Smallest: " << ss << endl;
    cout << "Second Largest: " << sl << endl;
    return 0;
}