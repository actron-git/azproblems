#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> s;

    while (n--)
    {
        string o;
        cin >> o;
        if (o == "add")
        {
            int a;
            cin >> a;
            s.push(a);
        }
        else if (o == "remove")
        {
            if (!s.empty())
            {   
                s.pop();
            }
        }
        else if (o == "print")
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
            }
            else
            {
                cout << 0 << endl;
            }
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