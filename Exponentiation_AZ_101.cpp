#include <bits/stdc++.h>
using namespace std;

#define lli long long int
typedef long long int ll;
ll expo(ll a, ll x, ll p) //(a^x)%p
{
    ll n, ans = 1;
    // prod= (a^(2^p1))
    while (x)
    {
        if (x % 2)
        {
            ans = ((ans % p) * (a % p)) % p;
        }
        a = ((a % p) * (a % p)) % p;
        x = x / 2;
    }
    return ans;
}
void solve()
{
    // lli a, b, c, p;
    // cin >> a >> b >> c >> p;
    ll n, res, ans, a, b, c, p;
    cin >> a >> b >> c >> p;
    if (b == 0 && c != 0)
    {
        cout << '1' << '\n';
    }

    else if (a % p == 0 || a == 0)
    {
        cout << "0\n";
    }
    else
    {
        res = expo(b, c, p - 1);
        ans = expo(a, res, p);
        cout << ans << endl;
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
