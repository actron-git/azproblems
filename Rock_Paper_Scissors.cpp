#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// Function to find the lexicographically smallest sequence of moves that wins the game for Chef
string findSmallestWinningSequence(int n, string moves) {
    // Define the DP table
    vector<vector<string>> dp(n + 1, vector<string>(3));

    // Base case: empty string
    dp[0][0] = dp[0][1] = dp[0][2] = "";

    for (int i = 1; i <= n; ++i) {
        // Try playing Rock
        dp[i][0] = dp[i - 1][2] + "R";

        // Try playing Paper
        dp[i][1] = dp[i - 1][0] + "P";

        // Try playing Scissors
        dp[i][2] = dp[i - 1][1] + "S";
    }

    // Find the lexicographically smallest sequence that wins more than half of the rounds
    for (int i = n; i >= 0; --i) {
        for (int j = 0; j < 3; ++j) {
            if (dp[i][j].size() > n / 2) {
                return dp[i][j];
            }
        }
    }

    return ""; // Should not reach here
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string moves;
        cin >> moves;

        string result = findSmallestWinningSequence(n, moves);
        cout << result << endl;
    }

    return 0;
}
