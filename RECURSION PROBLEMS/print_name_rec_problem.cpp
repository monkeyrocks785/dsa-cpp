// Problem Description: Given an integer N, write a program to print your name N times.

#include <bits/stdc++.h>
using namespace std;

void printName(string name, int n, int cnt)
{
    if (cnt == n)
        return;
    cout << name << endl;
    printName(name, n, cnt + 1);
}
int main()
{
    cout << "Enter your name : ";
    string name;
    cin >> name;
    cout << "Enter the number of times you need to print your name : ";
    int n;
    cin >> n;
    int c = 0;
    printName(name, n, c);

    return 0;
}