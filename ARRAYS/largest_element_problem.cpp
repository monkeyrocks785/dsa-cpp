// Problem Statement: Given an array, we have to find the largest element in the array.

#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    // Approach : Brute Force
    // sort(arr, arr + n);
    // return arr[n - 1];

    // Approach : Optimal
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {8, 10, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = largest(arr, n);
    cout << "The largest element in the array is: " << l << endl;
    return 0;
}