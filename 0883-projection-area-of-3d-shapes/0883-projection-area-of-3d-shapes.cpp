class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int area = 0;
        int n = grid.size();
        int m = grid[0].size();

        if (n == 1) {
            area = 2 * (grid[0][0]) + 1;
        }

        else {
            for (int i = 0; i < n; ++i) {

                int bestRow = 0;
                int bestCol = 0;
                for (int j = 0; j < m; ++j) {
                    if (grid[i][j] > 0)
                        area++;

                    bestRow = max(bestRow, grid[i][j]);
                    bestCol = max(bestCol, grid[j][i]);
                }
                area = area + bestRow + bestCol;
            }
        }
        return area;
    }
};