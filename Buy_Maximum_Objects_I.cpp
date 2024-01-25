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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (m >= v[i])
        {
            m -= v[i];
            cnt++;
        }
    }
    cout << cnt << endl;
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
