#include <bits/stdc++.h>
using namespace std;
#define usia 999
int main()
{
    int ages[5];
    int muda = usia;
    for (int i = 0; i < 5; ++i)
    {
        cin >> ages[i];
        muda = min(muda, ages[i]);
    }
    // your code goes here
    double discount = 50;
    discount = discount - (discount * muda / 100);
    cout << discount;
    return 0;
}