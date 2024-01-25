#include <bits/stdc++.h>
using namespace std;
#define int long long

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
    for (int i = 1; i < n; i++)
    {   
        v[i] += v[i - 1];
    }
    // int i;
    while (m--)
    {
        int mm;
        cin >> mm;
        // int i = lower_bound(v.begin(), v.end(), mm) - v.begin();
        int ii = upper_bound(v.begin(), v.end(), mm) - v.begin();
        // cout << i << " " << ii << " \n";
        // cout << ii << " \n";
        // if (i >= mm)
        //     cout << i << " \n";
        // else
        cout << ii << "\n";
    }
    // cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t = 1;
    // cin >> _t;
    while (_t--)
        solve();
}
