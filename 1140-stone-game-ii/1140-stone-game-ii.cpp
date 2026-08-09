class Solution {
public:
    int n;
    vector<int> suffix;
    vector<vector<int>> dp;

    int solve(int i, int M, vector<int>& piles) {
        // No piles left
        if (i >= n)
            return 0;

        // Already calculated
        if (dp[i][M] != -1)
            return dp[i][M];

        int ans = 0;

        // Total stones remaining from i
        int remaining = suffix[i];

        // Current player can take 1 to 2*M piles
        for (int X = 1; X <= 2 * M && i + X <= n; X++) {

            // Stones taken by current player
            int taken = suffix[i] - suffix[i + X];

            // New M
            int newM = max(M, X);

            // Opponent gets solve(i+X, newM)
            // So current player gets:
            int current = remaining - solve(i + X, newM, piles);

            ans = max(ans, current);
        }

        return dp[i][M] = ans;
    }

    int stoneGameII(vector<int>& piles) {
        n = piles.size();

        // suffix[i] = sum of piles[i ... n-1]
        suffix.resize(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }

        dp.assign(n, vector<int>(n + 1, -1));

        return solve(0, 1, piles);
    }
};