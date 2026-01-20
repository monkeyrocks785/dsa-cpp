#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            a = 1 - a;
        }

        cout << endl;
    }

    return 0;
}