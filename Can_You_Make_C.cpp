#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C;
    cin >> A >> B >> C;

    int gcd = abs(__gcd(A,B));

    if (C%gcd == 0)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }
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
