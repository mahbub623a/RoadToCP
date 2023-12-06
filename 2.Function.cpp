/*
    Mahbubur Rahman
    ID:011221441
    United International University
*/

#include <bits/stdc++.h>
using namespace std;

int sumDigit(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

void increment(int &a) // pass by reference
{
    a++;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << sumDigit(a) + sumDigit(b);

    int a = 5;
    cout << a << endl;
    increment(a);
    cout << a << endl;

    // String pass by value
    // Only Array data structure pass by reference *

    return 0;
}