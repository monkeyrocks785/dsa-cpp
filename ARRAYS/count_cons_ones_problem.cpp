// Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

#include <bits/stdc++.h>
using namespace std;

int cons_ones(vector<int> &nums)
{
    int cnt = 0, mx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return mx;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << cons_ones(nums) << endl;
    return 0;
}