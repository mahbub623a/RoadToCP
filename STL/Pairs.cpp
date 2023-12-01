#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// initialization
    pair<int, string> p;

    /// declaration
    p = make_pair(2, "abc");
    // p = {2, "abcd"};
    // cin >> p.first;
    // cin >>p.second;

    /// copy
    // pair<int, string> p1 = p;
    pair<int, string> &p1 = p; /// we can copy address of value
    p1.first = 3;

    /// print
    cout << p.first << " " << p.second << endl;

    // a[] = {1,2,3}, b[] = {4,5,6}
    /// pair array
    pair<int, int> pairArr[3]; // we can maintain two array
    pairArr[0] = {1, 4};
    pairArr[1] = {2, 5};
    pairArr[2] = {3, 6};

    for (int i = 0; i < 3; i++)
    {
        cout << pairArr[i].first << " " << pairArr[i].second << endl;
    }

    return 0;
}