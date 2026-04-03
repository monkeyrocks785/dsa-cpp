// Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeBySign(vector<int> &A, int n)
{
    // Approach : Brute Force
    // vector<int> pos;
    // vector<int> neg;

    // for (int x : A)
    // {
    //     if (x > 0)
    //         pos.push_back(x);
    //     else
    //         neg.push_back(x);
    // }

    // for (int i = 0; i < n / 2; i++)
    // {
    //     A[2 * i] = pos[i];
    //     A[2 * i + 1] = neg[i];
    // }

    // return A;

    // Approach : Optimal
    int posIndex = 0;
    int negIndex = 1;
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
    }

    return ans;
}

int main()
{
    vector<int> A{1, 2, -4, -5};
    int n = A.size();

    vector<int> ans = rearrangeBySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}