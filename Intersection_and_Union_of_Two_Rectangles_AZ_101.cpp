#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    int a1 = max(0, min(x2, x4) - max(x1, x3));
    int a2 = max(0, min(y2, y4) - max(y1, y3));
    
    int intersection_area = a1 * a2;
    int union_area = ((x2 - x1) * (y2 - y1)) + ((x4 - x3) * (y4 - y3)) - intersection_area;
    
    cout << intersection_area << " " << union_area << endl;
}

int main()
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
