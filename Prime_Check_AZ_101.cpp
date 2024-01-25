#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define it int 
// bool isPrime(int n)
// {
//     // Complexity √n 
//     if (n <= 1)
//     {
//         return false; // NO
//     }
//     if (n <= 3)
//     {
//         return true; // YES
//     }
//     if (n % 2 == 0 || n % 3 == 0)
//     {
//         return false; // NO
//     }

//     for (int i = 5; i * i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//         {
//             return false; // NO
//         }
//     }

//     return true; // YES
// }

bool isPrime(LL n)
{
    if(n<3)return false;
    for(LL i=2;i*i*i<=n;++i) if(n%i == 0) return false;
    for(int i = 3;i<1e5;++i)
    {
        LL r1=rand()%(n-1)+1;
        if(__gcd(rand()%(n-1)+1,n)!=1)return false;
    }   
    return true;

}
void solve()
{
    int n;
    cin >> n;

    bool f = isPrime(n);
    if (f)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    // if (n == 0 || n == 1)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }
    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;
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
