// Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeBySign(vector<int> &A, int n)
{
    // Approach : Brute Force
    vector<int> pos;
    vector<int> neg;

    for (int x : A)
    {
        if (x > 0)
            pos.push_back(x);
        else
            neg.push_back(x);
    }

    for (int i = 0; i < n / 2; i++)
    {
        A[2 * i] = pos[i];
        A[2 * i + 1] = neg[i];
    }

    return A;
}

int main()
{
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    vector<int> ans = rearrangeBySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}