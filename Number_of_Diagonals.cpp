#include <bits/stdc++.h>>
using namespace std;

int numberOfDiagonals(int n)
{
    return  ((n*(n-1))/2-n)%1000000007;
}

void solve()
{
    int n;
    cin >> n;
    cout << numberOfDiagonals(n) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
        solve();

    // Part 1

    // Primality check
    // for (int i = 1; i <= _t; i++)
    // {
    //     cout << i << ": ";
    //     checkprime(i);
    // }

    // finddiv();
}