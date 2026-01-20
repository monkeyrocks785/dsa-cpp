#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        char a = 'A';
        int ls = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << a << " ";
            if (j < ls)
            {
                a++;
            }
            else
            {
                a--;
            }
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }

    return 0;
}