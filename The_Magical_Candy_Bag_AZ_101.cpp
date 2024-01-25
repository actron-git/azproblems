#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;

    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        mt.insert(d);
    }
    ll ch = 0;
    while (k--)
    {
        if (mt.size() == 0)
            break;
        int v = *mt.rbegin();
        ch += v;
        mt.erase(mt.find(v));
        mt.insert(v / 2);
    }
    cout << ch << endl;
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
