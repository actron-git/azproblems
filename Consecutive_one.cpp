#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int mid, int kk, vector<int> &v)
{
    int ws = mid;
    int r = 0, l = 0;
    int cw = 0;
    int oc = 0, zc = 0;
    for (r; r < v.size(); r++)
    {
        cw++;
        if (v[r] == 1)
            oc++;
        else
            zc++;

        if (cw == ws)
            if (zc <= kk)
                return 1;
            else
            {
                cw--;
                if (v[l] == 1)
                    oc--;
                else
                    zc--;
            }
    }
    return 0;
}

void solveac()
{
    int nn, kk;
    cin >> nn >> kk;

    vector<int> v(nn);

    for (int i = 0; i < nn; i++)
    {
        cin >> v[i];
    }

    int lo = 1, hi = nn, ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (check(mid, kk, v))
        {
            ans = mid;
            // cout << ans << " ";
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}

signed main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        solveac();
    }
}
