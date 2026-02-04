// Problem Statement: Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void recInsertionSort(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
    recInsertionSort(arr, n, i + 1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    recInsertionSort(arr, n, 0);
    cout << "\nAfter : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}