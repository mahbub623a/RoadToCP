#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// we can compare STL
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {2, 3};
    cout << (p1 < p2) << endl; // output 1

    set<int> s1, s2;
    s1 = {1, 2, 2};
    s2 = {3, 4};
    cout << (s1 > s2) << endl; // output 0

    vector<int> v1, v2;
    v1 = {1, 2, 3, 4};
    v2 = {5};
    cout << (v2 > v1) << endl
         << endl; // output 1

    /// In maps we can use only comparable STL as a key
    map<pair<string, string>, vector<int>> map;

    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string f, l;
        int c;
        cin >> f >> l >> c; /// use getchar(); for no risk
        for (int j = 0; j < c; j++)
        {
            int x;
            cin >> x;
            map[{f, l}].push_back(x);
        }
    }

    for (auto &&pr : map)
    {
        auto name = pr.first;
        auto mark = pr.second;

        cout << name.first << " " << name.second << " " << mark.size() << endl;
        for (auto &&i : mark)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}