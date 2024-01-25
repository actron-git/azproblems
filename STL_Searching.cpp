#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    sort(v.begin(), v.end());
    // map<int, pair<int, int>> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[v[i]].;
    // }

    while (m--)
    {
        int o, t;
        cin >> o >> t;
        if (o == 1)
        {
            int i = lower_bound(v.begin(), v.end(), t) - v.begin();
            if (i == n)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        else if (o == 2)
        {
            int i = upper_bound(v.begin(), v.end(), t) - v.begin();
            if (i == n)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        else if (o == 3)
        {
            auto it = upper_bound(v.begin(), v.end(), t) - v.begin();
            cout << it << " ";
        }
        else
        {
            auto it = lower_bound(v.begin(), v.end(), t) - v.begin();
            cout << it << " ";
        }
    }
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
        solve();
}
