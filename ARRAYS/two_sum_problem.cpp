// Problem Statement: Given an array of integers arr[] and an integer target.
// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

#include <bits/stdc++.h>
using namespace std;

string solve1(vector<int> &a, int t, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == t)
            {
                return "YES";
            }
        }
    }
    return "NO";
}

vector<int> solve2(vector<int> &a, int t, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == t)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // Variant 1
    cout << solve1(arr, target, arr.size()) << "\n";

    // Variant 2
    vector<int> res = solve2(arr, target, arr.size());
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}