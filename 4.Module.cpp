/*
    (a + b) % m = ((a % m) + (b % m)) % m
    (a * b) % m = ((a % m) * (b % m)) % m
    (a - b) % m = ((a % m) - (b % m) + m) % m
    (a / b) % m = ((a % m) * (b ^ -1) % m ) % m
*/

/*
    Given an number N. Print it's factorial
    Constrains 1 <= N <= 100

    Print answer module M
    where M = 47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 47;
    cin >> n;

    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i) % m;
    }
    cout << fact;

    return 0;
}