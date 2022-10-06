#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkingPalindrome(string s)
{
    string temp;
    int length;
    bool isPolindrome = false;

    temp = s;
    length = s.length();

    for (int i = 0; i < length / 2; i++)
    {
        swap(s[i], s[length - i - 1]);
    }
    if (s == temp)
        isPolindrome = true;
    return isPolindrome;
}

int main()
{
    string s;
    bool palindrome;
    cout << "Enter A String: ";
    cin >> s;
    palindrome = checkingPalindrome(s);

    if (palindrome)
        cout << "String is Palindrome \n";
    else
        cout << "String is not Palindrome \n";
    return 0;
}