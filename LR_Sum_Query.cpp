
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
const int N = 10000001;
int A[N];
void solve()
{

    int n, q;
    cin >> n >> q;
    // vector<int> A(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    int ps[n + 1];
    ps[0] = 0;
    // ps.push_back(A[0]);
    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + A[i];

        if (ps[i] < 0)
            ps[i] += MOD;
        if (ps[i] >= MOD)
            ps[i] -= MOD;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = ps[r] - ps[l - 1];

        if (ans < 0)
            ans += MOD;
        if (ans >= MOD)
            ans -= MOD;
        cout << ans << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;
    // cin >> _t;
    // while (_t--)
    solve();
}
