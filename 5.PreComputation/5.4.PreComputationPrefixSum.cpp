/*
    Given array of N integers. Given Q queries. In each queries
    given L & R. Print sum of array elements from index L to R(L, R included)

    Constrains
    1 <= N <= 1e5
    1 <= arr[i] <= 1e9;
    1 <= Q <= 1e5
    1 <= L,R <= N
*/

// #include <bits/stdc++.h>
// using namespace std;

// // For 1D array
// const int N = 1e5 + 10;
// int sumArr[N];

// int main() // Time complexity O(N+Q) = O(N)
// {
//     // For 1D array

//     int n;
//     cin >> n;
//     int arr[n + 1];
//     for (int i = 1; i <= n; i++) // we have to take "1" index base array to avoid (i-1 = -1) complexity
//     {
//         cin >> arr[i];
//         sumArr[i] = sumArr[i - 1] + arr[i];
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int l, r;
//         cin >> l >> r;
//         cout << sumArr[r] - sumArr[l - 1] << endl;
//     }

//     return 0;
// }

/*
    // Given 2D array a of N*N integers. Given Q query and each query  given a, b, c & d.
    Print sum of rectangle represented by top (a,b) as top left point and (c,d) as  bottom right point.

    Constrains
    1 <= N <= 10^3
    1 <= arr[i] <= 10^9
    1 <= Q <= 1e5
    1 <= a,b,c,d <= N

*/
#include <bits/stdc++.h>
using namespace std;
// For 2D array

const int N = 1e3;
long long arr[N][N];
long long sumArr[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            sumArr[i][j] = arr[i][j] + sumArr[i - 1][j] + sumArr[i][j - 1] - sumArr[i - 1][j - 1];
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long sum;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        sum = sumArr[c][d] - sumArr[a - 1][d] - sumArr[c][b - 1] + sumArr[a - 1][b - 1];

        cout << sum << endl;
    }

    return 0;
}