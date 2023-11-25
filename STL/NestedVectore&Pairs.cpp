#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    // vector of pairs
    // vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}};
    // print(v);

    // int n;
    // cin >> n;
    // vector<pair<int, int>> vp;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     vp.push_back({x, y});
    //     // vp[i] = make_pair(x,y); // only for vp(n) type
    //     // vp[i] = {x, y};
    // }
    // print(vp);

    // vector of arrays
    // int N;
    // cin >> N;
    // vector<int> v[N];

    // for (int i = 0; i < N; i++)
    // {
    //     int s;
    //     cin >> s;
    //     for (int j = 0; j < s; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vectors of vector
    int s;
    cin >> s;
    vector<vector<int>> vv;

    for (int i = 0; i < s; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vv.push_back(temp);
    }

    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}