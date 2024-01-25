#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                // cout << "PUSH" << endl;
            }
            else
            {
                if (st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                    // cout << "POP" << endl;
                }
                else
                {
                    st.push(s[i]);
                    // cout << "PUSH" << endl;
                }
            }
        }

        cout << st.size() << endl;
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
}