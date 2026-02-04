// Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void recBubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    recBubbleSort(arr, n - 1);
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
    recBubbleSort(arr, n);
    cout << "\nAfter : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}