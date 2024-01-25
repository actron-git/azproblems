#include <bits/stdc++.h>
using namespace std;
using lli = long long;
#define endl '\n'

lli MOD = 1000000007;

lli A[1000100] = {0};

void solve()
{
    lli n, k, q, ans;
    lli big = 1000005;
    cin >> n >> k >> q;
    lli l, r, L, R;

    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        A[l]++;
        A[r + 1]--;
    }
    for (int i = 1; i <= big; i++)
    {
        A[i] += A[i - 1];
    }
    for (int i = 1; i <= big; i++)
    {
        A[i] = (A[i] >= k);
        A[i] += A[i - 1];
    }
    while (q--)
    {
        cin >> L >> R;
        ans = A[R] - A[L - 1];
        cout << ans << endl;
    }
}

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}