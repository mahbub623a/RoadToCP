/*
Given T test case and each test case a number N. Print its factorial for each test
case % M
Where M = 1e9+7

Constrains
1 <= T <= 1e5
1 <= N <= 1e5
Time limit = 1s
*/

#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;

// pre computation
const int n = 1e5 + 10;
long long factArray[n];

int main()
{
    // basic code which has Time complexity O(N^2) / O(T*N)
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long fact = 1;

        for (int i = 2; i <= n; i++)
        {
            fact = (fact * i) % m;
        }
        cout << fact << endl;
    }

    // Pre Computation.   Time complexity O(N) / O(T+N)
    factArray[0] = factArray[1] = 1 % m;
    for (int i = 0; i < n; i++)
    {
        factArray[i] = (factArray[i - 1] * i) % m;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << factArray[n] << endl;
    }

    return 0;
}