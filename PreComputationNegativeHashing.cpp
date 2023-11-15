/*
    Mahbubur Rahman
    ID:011221441
    United International University
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int q = 1e5;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // -2 5 7 9 -3 -6 1 -2 3
    {
        cin >> arr[i];
        arr[i] += 6; // Maximum negative -6 (We have to add maximum negative)
        hsh[arr[i]]++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << hsh[num + 6] << " ";
    }

    return 0;
}