#include <bits/stdc++.h>
using namespace std;

/// Iterator is a pointer who point the memory address

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    vector<int>::iterator itv; /// itv = v.begin()

    for (itv = v.begin(); itv != v.end(); itv++)
        cout << (*itv) << " ";
    cout << endl;

    /// iterator pairs using vector
    vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;

    for (it = vp.begin(); it != vp.end(); it++)
    {
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl; // we can use this also
    }

    /*
        / it++ means next element of container
        / it + 1 means next location of memory
    */

    return 0;
}