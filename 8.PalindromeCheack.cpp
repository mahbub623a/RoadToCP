/*
   you'r given a string s and indicies l & r. Find is it possible to make palindrome from l to r from the string s.
   If possible print YES, else NO, You are given q quires as well.

inputs:
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
*/

#include <bits/stdc++.h>
using namespace std;

#define print(x)              \
    for (auto value : x)      \
        cout << value << " "; \
    cout << endl;

void bruteForce()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int hsh[26] = {0}; // taking all array element as zero
            // print(hsh);

            l--, r--; // for making zero based string we have given 1 based.
            for (int i = l; i <= r; i++)
            {
                hsh[s[i] - 'a']++;
            }

            int oddCount = 0;
            for (int i = 0; i < 26; i++)
            {
                if (hsh[i] % 2 != 0)
                    oddCount++;
            }

            if (oddCount > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}

const int N = 1e5 + 10;
int hsh[N][26];

void optimized()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            hsh[i + 1][s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j < n; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }

        while (q--)
        {
            hsh[N][26] = {0};
            int l, r;
            cin >> l >> r;
            int oddCount = 0;

            for (int i = 0; i < 26; i++)
            {
                int charCount = hsh[r][i] - hsh[l - 1][i];
                if (charCount % 2 != 0)
                    oddCount++;
            }

            if (oddCount > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}

int main()
{
    optimized();
    return 0;
}