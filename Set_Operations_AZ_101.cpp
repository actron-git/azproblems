#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;

    set<int> a, b;
    set<int> u;

    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int d;
        cin >> d;
        a.insert(d);
        u.insert(d);
    }
    for (int i = 0; i < m; i++)
    {
        // cin >> b[i];
        int d;
        cin >> d;
        b.insert(d);
        u.insert(d);
    }

    // if (n < m)
    // {
    //     swap(n, m);
    //     swap(a, b);
    // }

    vector<int> i;
    vector<int> d;

    for (auto it : a)
    {
        if (b.find(it) == b.end())
        {
            d.push_back(it);
        }
        else
            i.push_back(it);
    }

    for (auto it : u)
    {
        cout << it << " ";
    }
    cout << "\n";
    for (int k = 0; k < i.size(); k++)
    {
        cout << i[k] << " ";
    }
    cout << "\n";
    for (int it = 0; it < d.size(); it++)
    {
        cout << d[it] << " ";
    }
    cout << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t = 1;
    cin >> _t;
    while (_t--)
        solve();
}
