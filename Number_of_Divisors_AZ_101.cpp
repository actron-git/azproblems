#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int nc = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                nc++;
            }
            else
            {
                nc += 2;
            }
        }
    }
    cout << nc << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    // cout << _t << endl;
    while (_t--)
    {
        solve();
    }
}
