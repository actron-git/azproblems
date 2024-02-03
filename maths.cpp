#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

bool isprime(int n)
{
    bool f = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            f = false;
            break;
        }
    }
    return f;
}

void seive()
{
    int n = 100;
    vector<bool> seiveof(n + 1, 1);
    seiveof[0] = seiveof[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        if (seiveof[i] == 0)
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            seiveof[j] = 0;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << i << " " << seiveof[i] << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t = 1;
    // cin >> _t;
    while (_t--)
        // cout << isprime(2);
        seive();
}
