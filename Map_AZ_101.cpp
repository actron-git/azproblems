#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int q;
    cin >> q;

    unordered_map<string, int> mp;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "add")
        {
            string name;
            int marks;
            cin >> name >> marks;
            mp[name] = marks;
        }
        else if (op == "erase")
        {
            string name;
            cin >> name;
            mp.erase(name);
        }
        else if (op == "print")
        {
            string name;
            cin >> name;
            if (mp.find(name) != mp.end())
            {
                cout << mp[name] << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
