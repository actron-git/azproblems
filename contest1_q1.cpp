#include <bits/stdc++.h>
using namespace std;
const unsigned long long mod = 1e9 + 7;
unsigned long long expo(
    unsigned long long base,
    unsigned long long exponent)
{

    unsigned long long ans = 1;

    while (exponent != 0)
    {
        if ((exponent & 1) == 1)
        {
            ans = ans * base;
            ans = ans % mod;
        }

        base = base * base;
        base %= mod;
        exponent >>= 1;
    }

    return ans % mod;
}

unsigned long long solveac()
{

    unsigned long long N;
    cin >> N;

    unsigned long long ans = (expo(26, N) - expo(5, N) - expo(21, N)) % mod;

    ans += mod;
    ans %= mod;

    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t = 1;
    cin >> _t;
    while (_t--)
    {
        cout << solveac() << endl;
    }
    return 0;

    return 0;
}
