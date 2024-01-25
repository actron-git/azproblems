#include <bits/stdc++.h>
using namespace std;

struct monotone_deque
{
    deque<int> dq;
    void insert(int x)
    {
        while (!dq.empty() && dq.back() < x)
        {
            dq.pop_back();
        }
        dq.push_back(x);
    }
    void remove(int x)
    {
        if ((dq.front()) == x)
        {
            dq.pop_front();
        }
    }
    int getmax()
    {
        return dq.front();
    }

    /* changes for getmin

        make getmin function in struct
        change while condition in insert() < to >
        good to go
    */
};

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    monotone_deque mt;

    for (int i = 0; i < n; i++)
    {
        mt.insert(v[i]);
        if (i - k >= 0)
            mt.remove(v[i - k]);
        if (i >= (k - 1))
        {
            cout << mt.getmax() << " ";
        }
    }
    cout << endl;
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
