// Now we need to find the appearence of the elements in query array, in the main array i.e. arr

#include <bits/stdc++.h>
using namespace std;

// Approach : BruteForce
// int bruteforce(int n, int a[], int u)
// {
//     int cnt = 0;
//     for (int i = 0; i < u; i++)
//     {
//         if (a[i] == n)
//         {
//             cnt += 1;
//         }
//     }
//     return cnt;
// }

// Time complexity of this approach will be - O(n*q) where n is size of arr, and q is size of query array

int main()
{
    int m = 3;
    int u = 5;
    int arr[u] = {0, 5, 1, 5, 8};
    int query[m] = {1, 5, 10};

    // for (int i = 0; i < m; i++)
    // {
    //     int r = bruteforce(query[i], arr, u);
    //     cout << "Appearence of " << query[i] << " is : " << r << endl;
    // }

    // Approach : Hashing
    // Here, maximum element in an array is 8, so we should create the hash array of size 9

    int hash[9] = {0};

    // Pre-storing
    for (int i = 0; i < u; i++)
    {
        hash[arr[i]] += 1;
    }

    // Just knowing what hash array looks like (just a debugging part to knw about the array no real use, we can just directly jump to fetching)
    // for (int i : hash)
    // {
    //     cout << i << " ";
    // }

    // Fetching
    for (int j = 0; j < m; j++)
    {
        cout << "Appearence of " << query[j] << " is : " << hash[query[j]] << endl;
    }
    return 0;
}