#include <bits/stdc++.h>
using namespace std;

void print(auto &m)
{
    for (auto &pr : m)
        cout << pr.first << " " << pr.second << endl;
}

int main()
{
    unordered_map<int, string> m;
    m[1] = "abc"; // T = O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[3] = "kgf";
    print(m);
    cout << endl;

    /*
        / we can not use complex data type as a key. like pair, set, vector etc
        / we can use int, double, float, char, string etc as a key
    */

    multimap<int, string> mp; /// we can store multiple same key
    mp.insert({1, "mah"});
    mp.insert({1, "bub"});
    mp.insert({1, "mah"});

    print(mp);
    return 0;
}