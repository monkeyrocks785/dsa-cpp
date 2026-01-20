#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 9; k > 0; k-=(i*2))
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}