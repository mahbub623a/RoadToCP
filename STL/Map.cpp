#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    for (auto &pr : m)
        cout << pr.first << " " << pr.second << endl;
}

int main()
{
    /// initialize
    map<int, string> m; // map is one types of pairs

    /// declaration
    m[1] = "abc"; // T = log(n)
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m.insert(make_pair(6, "mah"));
    m[5] = "cde";
    /*
        / map always store unique * key *
    */

    // print
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl; // T = log(n)

    // easy way
    // for (auto &pr : m)
    //     cout << pr.first << " " << pr.second << endl;
    print(m);
    cout << endl;

    /// find value
    auto it = m.find(7); /// find return an iterator T = log(n)
    if (it == m.end())   /// if value does not exist, it return end() value
        cout << "No value\n";
    else
        cout << it->first << " " << it->second << endl;

    // erase
    /*
        / we can use key or iterator to erase value
    */

    m.erase(3); //  T = log(n)
    auto it = m.find(4);
    m.erase(it);
    print(m);

    return 0;
}