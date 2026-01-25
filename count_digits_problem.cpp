// Problem Statement: Given an integer N, return the number of digits in N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // Approach 1: Using loop
    // int c = 0;
    // for (int i = 0; i < to_string(N).length(); i++)
    // {
    //     c++;
    // }
    // cout << "Number of digits in " << N << " is : " << c << endl;
    
    // Approach 2: Using log
    int c = (log10(N)+1);
    cout << "Number of digits in " << N << " is : " << c << endl;

    return 0;
}