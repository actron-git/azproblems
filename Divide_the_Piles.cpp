#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        // v.push_back(d);
        gcd = __gcd(gcd, d);
        cout<<gcd<<" ";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     gcd = __gcd(gcd, v[i]);
    // }
    if (gcd > 1)    
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
