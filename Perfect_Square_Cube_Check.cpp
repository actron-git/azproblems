#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, n;
    cin >> a >> n;

    if (a == 1)
    {
        if (n < 0)
        {
            cout << "NO\n";
        }
        else
        {
            int i = 1;
            while (i * i <= n)
            {
                if (i * i == n)
                {
                    cout << "YES\n";
                    return;
                }
                i++;
            }
            cout << "NO\n";
        }
    }
    else
    {
        if (n < 0)
        {
            cout << "NO\n";
        }
        else
        {
            int i = 1;
            while (i * i * i <= n)
            {
                if (i * i * i == n)
                {
                    cout << "YES\n";
                    return;
                }
                i++;
            }
            cout << "NO\n";
        }
    }
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
        solve();
    }
    return 0;
}