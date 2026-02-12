// Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int t;
    cout << "Enter the number to search: ";
    cin >> t;

    int r = linearSearch(arr, n, t);
    if (r != -1)
    {
        cout << "Element found at index: " << r << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}