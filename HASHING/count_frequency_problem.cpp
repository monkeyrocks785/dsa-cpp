// Problem Statement: Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;

void freqcount(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                cnt++;
            }
        }
        cout << arr[i] << " -> " << cnt << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }
    freqcount(arr, n);

    return 0;
}