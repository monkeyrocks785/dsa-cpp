#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello";
    cout << "String : " << s << endl;
    cout << "Length : " << s.length() << endl;
    cout << "Iterating : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }
    cout << "Changing the character at index 0 to H : " << endl;
    s[0] = 'H';
    cout << "New string : " << s << endl;

    cout << "Comapring two strings : " << endl;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}