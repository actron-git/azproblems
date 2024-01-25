#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    int c = 0;
    vector<int> v;
    multiset<int> st;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = st.upper_bound(v[i]);

        if (it == st.end())
        {
            c++;
            st.insert(v[i]);
        }
        else
        {
            st.erase(it);
            st.insert(v[i]);
        }
    }
    cout << c << endl;
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
