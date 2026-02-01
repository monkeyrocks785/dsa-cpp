#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the numebr of elements in the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }

    // Pre-storing
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Iterating the map
    // for (auto i : hash)
    // {
    //     cout << i.first << " -> " << i.second << endl;
    // }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while (q--)
    {
        int c;
        cout << "Enter the query : ";
        cin >> c;

        // fetching
        cout << "Appearence of " << c << " is : " << hash[c] << endl;
    }

    return 0;
}