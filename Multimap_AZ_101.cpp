#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // int n;
    // cin >> n;
    int q;
    cin >> q;

    multimap<string, int> mp;

    while (q--)
    {
        string op;
        // int m;

        cin >> op;

        if (op == "add")
        {
            int m;
            string n;
            cin >> n >> m;
            mp.insert({n, m});
        }
        else if (op == "erase")
        {
            string n;
            cin >> n;
            if (mp.find(n) != mp.end())
            {
                mp.erase(mp.find(n));
            }
        }
        else if (op == "eraseall")
        {
            string s;
            cin >> s;

            mp.erase(s);
        }
        else
        {
            string s;
            cin >> s;
            if (mp.find(s) != mp.end())
            {
                cout << mp.find(s)->second << endl;
            }
            else
            {
                cout << 0 << endl;
            }
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
