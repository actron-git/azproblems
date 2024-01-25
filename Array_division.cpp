#include <bits/stdc++.h>
using namespace std;
#define int long long
int check(int mid, vector<int> v, int k)
{
    int rk = 1;
    int ck = mid;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= ck)
        {
            ck -= v[i];
        }
        else
        {
            ck = mid;
            rk++;
            if (v[i] <= ck)
            {
                ck -= v[i];
            }
            else
            {
                return 0;
            }
        }
    }
    if (rk <= k)
        return 1;
    else
        return 0;
}
void solveac()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int tt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tt += v[i];
    }

    int lo = 0, hi = tt, ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (check(mid, v, k))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
signed main()
{
    // int tt;
    // cin >> tt;

    // while (tt--)
    // {
    solveac();
    // }
}
