// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
// The union of two arrays can be defined as the common and distinct elements in the two arrays.
// NOTE: Elements in the union should be in ascending order.

#include <bits/stdc++.h>
using namespace std;

vector<int> unionMaker(int a1[], int a2[], int n, int m)
{
    // Approach : Using map
    // map<int, int> freq;
    // vector<int> uni;

    // for (int i = 0; i < n; i++)
    // {
    //     freq[a1[i]]++;
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     freq[a2[i]]++;
    // }
    // for (auto it : freq)
    // {
    //     uni.push_back(it.first);
    // }

    set<int> freq;
    vector<int> uni;

    for (int i = 0; i < n; i++)
    {
        freq.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        freq.insert(a2[i]);
    }
    for (auto it : freq)
    {
        uni.push_back(it);
    }

    return uni;
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Array 1 : ";
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nArray 2 : ";
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        cout << arr2[i] << " ";
    }

    vector<int> uni = unionMaker(arr1, arr2, n, m);

    cout << "\nUnion of the two arrays is : ";
    for (auto it : uni)
    {
        cout << it << " ";
    }

    return 0;
}