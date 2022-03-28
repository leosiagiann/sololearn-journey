#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a;
    cin >> a;
    int seats = 50 - (a % 50);
    cout << seats;
    return 0;
}