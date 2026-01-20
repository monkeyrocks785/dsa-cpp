#include <bits/stdc++.h>
using namespace std;

int inc(int x)
{
    x++;
    return x;
}

int dec(int &x)
{
    x--;
    return x;
}

int main()
{
    int a = 10;
    cout << "Pass by value : " << endl;
    cout << "Original value of a : " << a << endl;
    int b = inc(a);
    cout << "Value of a in the function : " << b << endl;
    cout << "Value of a after the function call : " << a << endl;
    cout << "Pass by reference : " << endl;
    dec(a);
    cout << "Value of a after the function call : " << a << endl;

    return 0;
}