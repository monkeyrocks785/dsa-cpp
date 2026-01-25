#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "No is : " << n << endl;
    cout << "No of set bits is : " << __builtin_popcount(n) << endl;
    return 0;
}