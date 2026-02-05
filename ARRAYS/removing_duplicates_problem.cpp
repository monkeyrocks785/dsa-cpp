// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    // Approach : BruteForce
    // unordered_set<int> s;
    // int i = 0;
    // for (int n : arr)
    // {
    //     if (s.find(n) == s.end())
    //     {
    //         s.insert(n);
    //         arr[i] = n;
    //         i++;
    //     }
    // }
    // return i;

    // Approach : Optimal
    if (arr.empty())
    {
        return 0;
    }
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};
    int k = removeDuplicates(arr);
    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}