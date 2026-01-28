// Problem Statement: Given a number X,  print its factorial.
// To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.
// Note: X  is always a positive number.

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // Approach 1 : Iterative
    // int factorial = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     factorial = factorial * i;
    // }
    // return factorial;

    // Approach 2 : Recursive
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int r = fact(n);
    cout << r;
    return 0;
}

//  here, we will not get appropriate output for large values of n as the factorial value grows very fast and exceeds the storage capacity of int data type. We can use 'long long' data type to store larger values, but for very large n, we may need to use libraries or data structures that can handle big integers.