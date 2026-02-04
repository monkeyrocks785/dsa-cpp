// Problem Statement: Given an array of size n, sort the array using Merge Sort.

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    cout << "\nDividing : ";
    for (int i = low; i <= mid; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " and ";
    for (int i = mid + 1; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    cout << "\nMerging : ";
    for (int i = low; i <= mid; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " and ";
    for (int i = mid + 1; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    merge(arr, low, mid, high);
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
    mergeSort(arr, 0, n - 1);
    cout << "\nAfter : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}