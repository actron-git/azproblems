#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

using lli = long long;
lli mod = 1000000007;

lli fact[200001] = {1};

lli binpow(lli a, lli b, lli m) // a^b % m
{
    lli ans = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }

    return ans;
}

void solve()
{
    lli m, n, M;
    cin >> m >> n;
    m %= mod;
    n %= mod;
    M = m + n;

    lli Nr = fact[M];
    lli dr = (fact[m] * fact[n]) % mod;
    lli Dr = binpow(dr, mod - 2, mod);

    lli ans = (Nr * Dr) % mod;

    cout << ((ans % mod) + mod) % mod << endl;
}

int main()
{
    // code to make i/o fast
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    // create factorial lookup array
    for (int i = 1; i <= 200000; i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
    }

    while (t--)
        solve();

    return 0;
}