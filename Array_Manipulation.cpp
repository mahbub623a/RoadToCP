/*
    Mahbubur Rahman
    United International University
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

const int N = 1e7 + 10;
long long int ar[N];

void Hack()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;
        ar[b + 1] -= d;
    }
    loop(i, 1, n + 1)
        ar[i] += ar[i - 1];

    long long mx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mx < ar[i])
            mx = ar[i];
    }
    cout << mx;

}

int main()
{
    Hack();
    Hacked;
}