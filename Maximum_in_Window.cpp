#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        mt.insert(v[i]);
        if (i - k >= 0)
            mt.erase(mt.find(v[i - k]));
        if (i >= (k - 1))
        {
            cout << *mt.rbegin() << " ";
        }
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    // cout << _t << endl;
    while (_t--)
    {
        solve();
    }
}
