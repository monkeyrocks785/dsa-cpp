// Now we need to find the appearence of the elements in query array, in the main array i.e. arr

#include <bits/stdc++.h>
using namespace std;

// Approach : BruteForce
int bruteforce(int n, int a[], int u)
{
    int cnt = 0;
    for (int i = 0; i < u; i++)
    {
        if (a[i] == n)
        {
            cnt += 1;
        }
    }
    return cnt;
}

int main()
{
    int arr[5] = {0, 5, 1, 5, 52};
    int query[3] = {1, 5, 10};
    int m = sizeof(query) / sizeof(query[0]);
    int u = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < m; i++)
    {
        int r = bruteforce(query[i], arr, u);
        cout << "Appearence of " << query[i] << " is : " << r << endl;
    }

    return 0;
}