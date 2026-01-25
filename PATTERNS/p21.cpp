#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int spaces, s;
    for (int i = 0; i < n; i++)
    {
        if (i % n == 0 || i == n - 1)
        {
            spaces = 0;
            s = n;
        }
        else
        {
            spaces = n - 2;
            s = 1;
        }

        for (int j = 0; j < s; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < s; j++)
        {
            if (i % n == 0 || i == n - 1)
            {
                continue;
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}