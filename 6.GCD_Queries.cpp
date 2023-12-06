/*
    Mahbubur Rahman
    United International University
*/

/*
    https://www.codechef.com/JAN15/problems/GCDQ#:~:text=You%20will%20be%20given%20Q,remaining%20array%20is%20non%20empty.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define nl cout << endl
#define Yes printf("Yes\n")
#define No printf("No\n")
#define YES printf("YES\n")
#define NO printf("NO\n")
#define one printf("1\n")
#define _one printf("-1\n")
#define zero printf("0\n")
#define True printf("true\n")
#define False printf("false\n")

#define sortV(v) sort(v.begin(), v.end())
#define sortR(v) sort(v.rbegin(), v.rend())
#define Hacked return 0
#define loop(i, s, n) for (int i = s; i < n; i++)
#define rloop(i, n, s) for (int i = n - 1; i >= s; i--)

#define scan(x, s)              \
    for (int i = 0; i < s; i++) \
        cin >> x[i];
#define print(x)              \
    for (auto value : x)      \
        cout << value << " "; \
    cout << endl;

// const int h = 1e9 + 10;
// int Hash[h];

void Hack()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);

    int forward[n + 10];
    int backward[n + 10];
    forward[0] = backward[n + 1] = 0;

    loop(i, 1, n + 1)
    {
        cin >> arr[i];
    }

    // for (int i = 1; i <= n; i++)
    loop(i, 1, n + 1)
    {
        forward[i] = __gcd(forward[i - 1], arr[i]);
    }
    // for (int i = n; i >= 1; i--)
    rloop(i, n + 1, 1)
    {
        backward[i] = __gcd(backward[i + 1], arr[i]);
    }

    // print(arr);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
    }
}

int main()
{

    Hack();
    Hacked;
}