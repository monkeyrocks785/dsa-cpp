// Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    cout << endl
         << "After : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Pass " << i << endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
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
    bubbleSort(arr, n);

    return 0;
}