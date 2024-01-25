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
        st.insert(d);
    }

    if (n >= st.size())
    {
        cout << st.size() << endl;
    }
    else
    {
        cout << st.size() - n << endl;
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
