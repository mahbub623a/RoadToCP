/*
Given an array A of N integers. Given Q queries and in each queries given a number x.
Print count of that number in array.

Constrains
1 <= N <= 1e5
1 <= A[i] <= 1e7
1 <= Q <= 1e5
*/

#include <bits/stdc++.h>
using namespace std;

// Hashing
const int N = 1e7 + 10;
int hsh[N]; // Global array always filled up with zero in each index.

int main()
{
    // Basic implementation. T = O(Ne2)
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int x, ans = 0;
    //     cin >> x;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] == x)
    //             ans++;
    //     }
    //     cout << ans << " ";
    // }

    // Hashing  T = O(N)
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, ans = 0;
        cin >> x;
        cout << hsh[x] << " ";
    }

    return 0;
}