#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int spaces = 2 * n;
    for (int i = 0; i <= 2 * n; i++)
    {
        int s = i;
        if (i > n)
        {
            s = 2 * n - i;
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
            cout << "* ";
        }
        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }

        cout << endl;
    }

    return 0;
}