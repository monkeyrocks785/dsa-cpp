// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int a1[] = {5, 4, 6, 7, 8};
    int a2[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    cout << isSorted(a1, n1) << endl; // Expected Output: 0 (False)
    cout << isSorted(a2, n2) << endl; // Expected Output: 1 (True)
    return 0;
}