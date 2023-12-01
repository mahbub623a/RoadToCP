#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    /// for range base loop
    for (int value : v) // Here value is a copy of v
        cout << value << " ";
    cout << endl;

    for (int &value : v) /// Here 'value' is not a copy of 'v'. 'value' is a reference
        cout << value << " ";
    cout << endl;

    /*
        / we don't need to declare iterator if we use "auto" keyword
    */

    vector<int> vec = {1, 2, 3, 4, 5};
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << (*it) << " ";

    return 0;
}