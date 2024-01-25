#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasPairWithSum(const vector<int> &arr, int target)
{
    unordered_set<int> seen;
    for (int num : arr)
    {
        if (seen.find(target - num) != seen.end())
        {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        if (hasPairWithSum(arr, S))
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
