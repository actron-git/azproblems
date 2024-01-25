#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, p;
    cin >> n >> m >> p;
    int n1 = n;
    int n2 = m;
    int m1 = m;
    int m2 = p;
    vector<vector<int>> A;
    vector<vector<int>> B;

    for (int i = 0; i < n; i++)
    {
        vector<int> vt;
        for (int j = 0; j < m; j++)
        {
            int d;
            cin >> d;
            vt.push_back(d);
        }
        A.push_back(vt);
    }

    for (int i = 0; i < m; i++)
    {
        vector<int> vt;

        for (int j = 0; j < p; j++)
        {
            int d;
            cin >> d;
            vt.push_back(d);
        }
        B.push_back(vt);
    }

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        vector<int> vt;
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += (A[i][k] * B[k][j]);
            }
            vt.push_back(sum);
        }
        ans.push_back(vt);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {

    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < p; j++)
    //     {

    //         cout << B[i][j] << " ";
    //     }
    //     cout << endl;
    // }
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