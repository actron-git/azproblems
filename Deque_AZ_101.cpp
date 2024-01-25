#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    while (n--)
    {
        string op;
        cin >> op;

        // cout << op << endl;

        if (op == "insertback")
        {
            int d;
            cin >> d;
            dq.push_back(d);
        }
        else if (op == "eraseback")
        {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (op == "insertfront")
        {

            int d;
            cin >> d;
            dq.push_front(d);
        }
        else if (op == "erasefront")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (op == "printfront")
        {
            if (!dq.empty())
            {
                cout << dq.front() << endl;
            }
            else
            {
                cout << 0000 << endl;
            }
        }
        else if (op == "printback")
        {
            if (!dq.empty())
            {
                cout << dq.back() << endl;
            }
            else
            {
                cout << 00 << endl;
            }
        }
        else if (op == "print")
        {
            int d;
            cin >> d;
            if (d == 0)
            {
                if (!dq.empty())
                {
                    cout << dq.front() << endl;
                }
                else
                    cout << 0 << endl;
            }
            else if (dq.size() >= d - 1)
            {
                deque<int> dt;
                int loc = 0;
                bool f = false;
                while (!dq.empty())
                {
                    if (loc == d)
                    {
                        cout << dq.front() << endl;
                        f = true;
                        break;
                    }
                    else
                    {
                        dt.push_front(dq.front());
                        dq.pop_front();
                    }
                    loc++;
                }
                while (!dt.empty())
                {
                    dq.push_front(dt.front());
                    dt.pop_front();
                }
                if (f == false)
                {
                    cout << 0 << endl;
                }
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