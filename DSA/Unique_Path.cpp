#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) return 0;
        int n = obstacleGrid[0].size();
        if (n == 0) return 0;

        vector<long long> dp(n, 0);

        // start cell
        dp[0] = (obstacleGrid[0][0] == 0) ? 1 : 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) {
                    // obstacle -> no ways to here
                    dp[j] = 0;
                } else {
                    if (j > 0) dp[j] += dp[j - 1];
                    // if j==0, dp[j] stays as it is (from top), unless obstacle set it to 0 above
                }
            }
        }

        return (int)dp[n - 1];
    }
};

// Simple demonstration main
int main() {
    Solution sol;

    // Example from LeetCode:
    vector<vector<int>> grid = {
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };
    // Expected output: 2

    cout << "Unique paths (example): " << sol.uniquePathsWithObstacles(grid) << endl;

    // Another test: start or end blocked
    vector<vector<int>> grid2 = {
        {1,0},
        {0,0}
    };
    // Expected: 0 (start blocked)
    cout << "Unique paths (start blocked): " << sol.uniquePathsWithObstacles(grid2) << endl;

    return 0;
}
