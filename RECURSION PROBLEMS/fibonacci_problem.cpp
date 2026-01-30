// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    if (n < 1)
        cout << n << " ";

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i <= n; i++)
    {
        cout << fib[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}