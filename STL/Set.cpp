#include <bits/stdc++.h>
using namespace std;

void print(auto &s)
{
    for (auto v : s)
        cout << v << " " << endl;

    // for (auto it = s.begin(); it != s.end(); it++)
    //     cout << (*it) << " ";
}

int main()
{
    set<string> s; // initialization

    // declaration
    s.insert("abc");
    s.insert("efg");
    s.insert("hij");

    // find a particular element
    // auto it = s.find("abc");
    // it != s.end() ? cout << *it << "\n" : cout << "Not found\n";

    // erase
    /*
        we can use index or use iterator to erase value
    */
    s.erase("abc");
    // s.erase(it);
    // print(s);

    // unordered set
    /*
       we can not use complex data type as a key. like pair, set, vector etc
       we can use int, double, float, char, string etc in unordered set
   */

    unordered_set<string> us;

    us.insert("Mahbub");
    us.insert("Riana");
    us.insert("Tamanna");
    // print(us);

    // multiset
    multiset<string> ms; // we can store same value any number of time

    ms.insert("Mahbub");
    ms.insert("Riana");
    ms.insert("Tamanna");
    ms.insert("Tasnuva");
    ms.insert("Mahbub");
    print(ms);

    auto it = ms.find("Mahbub"); // it will return iterator of first value if we have duplicate

    // erase
    /*
        we can use index or use iterator to erase value
    */
    ms.erase(it);       // it will delete only one time with "Mahbub"
    ms.erase("Mahbub"); // it will delete all "Mahbub"

    return 0;
}