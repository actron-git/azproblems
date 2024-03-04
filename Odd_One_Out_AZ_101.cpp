#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;

        if (st.find(d) == st.end())
        {
            st.insert(d);
        }
        else
        {
            st.erase(st.find(d));
        }
    }
    int t = -1;
    for (auto it : st)
    {
        t = it;
    }
    cout << t << endl;
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
