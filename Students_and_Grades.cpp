#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        mp[d]++;
    }

    for (int i = 0; i < m; i++)
    {
        int d;
        cin>>d;
        mp[d]++;
        if(mp[d]==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
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
