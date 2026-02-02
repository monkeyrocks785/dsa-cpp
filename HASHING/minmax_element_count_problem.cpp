// Problem Statement: Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

#include <bits/stdc++.h>
using namespace std;

void freqCount(int arr[], int n)
{
    // Approach : Brute Force
    // vector<bool> visited(n, false);
    // int minf = n;
    // int maxf = 0;
    // int mine = 0;
    // int maxe = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (visited[i] == true)
    //     {
    //         continue;
    //     }
    //     int cnt = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             visited[j] = true;
    //             cnt++;
    //         }
    //     }
    //     if (cnt > maxf)
    //     {
    //         maxe = arr[i];
    //         maxf = cnt;
    //     }
    //     if (cnt < minf)
    //     {
    //         mine = arr[i];
    //         minf = cnt;
    //     }
    // }
    // cout << "Max Frequency is : " << maxf << " of element : " << maxe << endl;
    // cout << "Min Frequency is : " << minf << " of element : " << mine << endl;

    // Approach : Optimal
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    int minf = n;
    int maxf = 0;
    int mine = 0;
    int maxe = 0;
    for (auto it : map)
    {
        int element = it.first;
        int cnt = it.second;

        if (cnt > maxf)
        {
            maxe = element;
            maxf = cnt;
        }

        if (cnt < minf)
        {
            mine = element;
            minf = cnt;
        }
    }
    cout << "Max Frequency is : " << maxf << " of element : " << maxe << endl;
    cout << "Min Frequency is : " << minf << " of element : " << mine << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }
    freqCount(arr, n);

    return 0;
}