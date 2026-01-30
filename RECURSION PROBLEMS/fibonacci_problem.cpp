// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

#include <bits/stdc++.h>
using namespace std;

// void fibonacci(int n)
// {
// Approach:
//     BruteForce / Iterative if (n < 1)
//                      cout
//         << n << " ";

//     int fib[n + 1];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         cout << fib[i] << " ";
//     }

// Approach:
//     Optimized Iterative int a = 0, b = 1;
//     if (n == 0)
//     {
//         cout << a << " ";
//     }
//     else
//     {
//         cout << a << " " << b << " ";
//         for (int i = 2; i <= n; i++)
//         {
//             int next = a + b;
//             cout << next << " ";
//             a = b;
//             b = next;
//         }
//     }
// }

// Approach : Recursive
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;
    // fibonacci(n);  // for direct approaches
    // For recursive Approach
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}