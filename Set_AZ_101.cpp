    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;
        set<int> s;

        while (n--)
        {
            string o;
            cin >> o;
            if (o == "add")
            {
                int a;
                cin >> a;
                s.insert(a);
            }
            else if (o == "erase")
            {
                int a;
                cin >> a;
                s.erase(a);
            }
            else if (o == "find")
            {
                int a;
                cin >> a;
                auto i = s.find(a);
                // cout<<*i<<endl;
                if (i != s.end())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (o == "print")
            {
                for (auto it : s)
                {
                    cout << it << " ";
                }
                cout << endl;
            }
            else if (o == "empty")
            {
                s.clear();
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