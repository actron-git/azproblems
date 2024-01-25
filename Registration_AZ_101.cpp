#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.find(s) != mp.end())
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
        else
        {
            cout << "OK\n";
            mp[s]++;
        }
    }
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
