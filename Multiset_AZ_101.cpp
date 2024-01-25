#include <iostream>
#include <set>
#include <iterator>

using namespace std;
void solveac()
{
    multiset<int> mset;
    int Q;
    cin >> Q;
    while (Q--)
    {
        string operation;
        int x;
        cin >> operation;

        if (operation == "add")
        {
            cin >> x;
            mset.insert(x);
        }
        else if (operation == "erase")
        {
            cin >> x;
            auto it = mset.find(x);
            if (it != mset.end())
            {
                mset.erase(it);
            }
        }
        else if (operation == "eraseall")
        {
            cin >> x;
            mset.erase(x);
        }
        else if (operation == "find")
        {
            cin >> x;
            auto it = mset.find(x);
            if (it != mset.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (operation == "count")
        {
            cin >> x;
            cout << mset.count(x) << endl;
        }
        else if (operation == "print")
        {
            for (const auto &val : mset)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else if (operation == "empty")
        {
            mset.clear();
        }
    }
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        solveac();
    }

    return 0;
}
