#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // complete the function
    string temp = to_string(abs(x));
    int last = temp.size() - 1;
    for (int i = 0; i < temp.size() / 2; i++)
    {
        if (temp[i] != temp[last])
            return false;
        last--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " is a palindrome";
    }
    else
    {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}