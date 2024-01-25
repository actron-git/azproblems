#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<int> &boards, int painters, int maxLength)
{
    int numPainters = 1;
    int currentLength = 0;

    for (int board : boards)
    {
        if (board > maxLength)
        {
            return false;
        }

        if (currentLength + board <= maxLength)
        {
            currentLength += board;
        }
        else
        {
            numPainters++;
            currentLength = board;
        }

        if (numPainters > painters)
        {
            return false;
        }
    }

    return true;
}

int minTimeToPaint(vector<int> &boards, int painters)
{
    int totalLength = 0;
    int maxLength = 0;

    for (int board : boards)
    {
        totalLength += board;
        maxLength = max(maxLength, board);
    }

    int lo = maxLength;
    int hi = totalLength;

    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (check(boards, painters, mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return lo;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> boards(n);

        for (int i = 0; i < n; i++)
        {
            cin >> boards[i];
        }

        int result = minTimeToPaint(boards, k);
        cout << result << endl;
    }

    return 0;
}
