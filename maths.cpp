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
int binpoww(int a, int x)
{
    if (x == 0)
        return 1;
    if (x % 2)
    {
        int res = binpoww(a, (x - 1) / 2);
        return res * res * a;
    }
    else
    {
        int res = binpoww(a, x / 2);
        return res * res;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << isprime(2);
    // seive();
    int n = binpoww(2, 3);
    cout << n;
}
