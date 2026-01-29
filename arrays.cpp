#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(*arr);
    cout << "Array elements after initialization : " << endl;
    display(arr, size);
    cout << "Length : " << size << endl;
    cout << "Changing the character at index 0 to 15 : " << endl;
    arr[0] = 15;
    cout << "New array : " << endl;
    display(arr, size);

    return 0;
}