#include <bits/stdc++.h>
using namespace std;
int ch1(vector<int> aa, int mid)
{
    if (mid == aa.size() - 1)
        return 1;
    if (aa[mid] > aa[mid + 1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ch2(vector<int> aa, int mid, int t)
{
    if (aa[mid] >= t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int acsolve(vector<int> aa, int pp)
{
    int t;
    cin >> t;

    vector<int> ans(2);

    int lo = 0, hi = pp;
    int ff = -1, ss = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (ch2(aa, mid, pp) == 1)
        {
            ff = mid;
            hi = mid - 1;
            cout << aa[mid] << " " << t << endl;
            if (aa[mid] == t)
                break;
        }
        else
        {
            lo = mid + 1;
        }
    }

    // if (t == aa[ff])
    //     ans.push_back(ff + 1);
    // cout << ff << endl;

    // lo=pp;
    // hi=aa.size()-1;

    // while (lo <= hi)
    // {
    //     int mid = (lo + hi) / 2;
    //     if (ch2(aa, mid, pp) == 1)
    //     {
    //         ss = mid;
    //         lo = mid - 1;
    //     }
    //     else
    //     {
    //         hi = mid + 1;
    //     }
    // }

    // cout<<" "<<ss<<endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int nn, qq;
        cin >> nn >> qq;
        vector<int> aa(nn);

        for (int i = 0; i < nn; i++)
        {
            cin >> aa[i];
        }

        int pp = -1;
        int lo = 0;
        int hi = nn - 1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (ch1(aa, mid) == 1)
            {
                pp = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        // cout << pp;
        while (qq--)
        {
            acsolve(aa, pp);
        }
    }
}