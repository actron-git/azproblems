#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        mp[d]++;
    }

    int cnt = 0;

    for (auto it : mp)
    {
        if (it.first != it.second)
        {
            if (it.first > it.second)
            {
                cnt += it.second;
            }
            else
            {
                cnt += (it.second - it.first);
            }
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
