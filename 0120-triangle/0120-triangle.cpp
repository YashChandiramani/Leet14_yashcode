class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n - 1].size();
        vector<int>dp = triangle[n - 1];
        for(int i = n - 2; i >= 0; --i){
            vector<int> temp;
            for(int j = 0; j <= i; ++j){
                temp.push_back(triangle[i][j] + min(dp[j], dp[j + 1]));
            }
            dp = temp;
        }
        return dp[0];
    }
};