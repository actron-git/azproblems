#include <bits/stdc++.h>
#define f(i, a, b) for (int i = a; i <= b; i++)
#define g(i, a, b) for (int i = a; i >= b; i--)
#define PI pair<int, int>
#define int long long
#define F first
#define S second
using namespace std;
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();

    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = 0;

        ch = getchar();
    }

    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }

    return f ? x : -x;
}
inline void write(int x, char end = ' ')
{
    static int k[31];
    int f = 0;

    if (x < 0)
        x = -x, putchar('-');

    do
    {
        k[f++] = x % 10, x /= 10;
    } while (x);

    while (f)
        putchar(k[--f] ^ '0');

    putchar(end);
}
int n = read(), m = read();
int a[1010][1010], lr[1010][1010], ud[1010][1010], f[1010][1010];
int st[1010], top;
int ans;
void solve()
{
    f(i, 1, n) f(j, 1, m) a[i][j] = read();
    f(i, 1, n)
    {
        int l, r = m;

        while (r)
        {
            l = r;

            while (l && a[i][l - 1] == a[i][l])
                l--;

            f(j, l, r) lr[i][j] = j - l + 1;
            r = l - 1;
        }
    }
    f(j, 1, m)
    {
        top = 0;
        f(i, 1, n)
        {
            if (a[i][j] != a[st[top]][j])
                top = 0;

            f[i][j] = f[st[top]][j];
            ud[i][j] = 1;

            while (top && lr[i][j] <= lr[st[top]][j])
            {
                ud[i][j] += ud[st[top]][j];
                f[i][j] -= lr[st[top]][j] * ud[st[top]][j];
                top--;
            }

            f[i][j] += lr[i][j] * ud[i][j];
            ans += f[i][j];
            st[++top] = i;
        }
    }
    write(ans);
}
signed main()
{
    solve();
}