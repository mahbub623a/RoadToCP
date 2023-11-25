#include <bits/stdc++.h>
using namespace std;

#define print(x)              \
    for (auto value : x)      \
        cout << value << " "; \
    cout << endl;

int main()
{
    // initialization
    vector<int> v; // <int, string, char, bool> anything we want

    // declaration
    v.push_back(10);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "size:" << v.size() << endl;
    print(v);

    // vector of array
    vector<int> vec(5, 3); // 5 size array which is filled up with 3
    print(vec);

    vec.pop_back(); // delete from last
    print(vec);

    // copy
    vector<int> vec2 = vec; // O(n) time complexity
    print(vec2);

    return 0;
}