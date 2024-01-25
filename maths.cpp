#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void vid1()
{
    // Divisors
    int n;
    cin >> n;
    cout << isprime(n);
}

signed main()
{

    vid1(); // Basic Number Theory

    // vid2();

    // vid3();
}