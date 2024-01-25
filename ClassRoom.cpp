#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int lo = 1, hi = a[n - 1] - a[0];
    // for (int i = 0; i < n - 1; i++)
    // {

    //     hi = max(hi, a[i + 1] - a[i]);
    // }

    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int placed = 1;
        int l = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= l + mid)
            {
                placed++;
                l = a[i];
            }
        }
        if (placed >= k)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
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

    return 0;
}
