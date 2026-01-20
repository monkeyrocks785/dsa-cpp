#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        int s = i;
        if (i >= n)
            s = 2 * n - i;
        for (int j = 0; j < s; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}