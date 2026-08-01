class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols,
                                        int rStart, int cStart) {
        vector<vector<int>> ans;

        int row = rStart;
        int col = cStart;

        // Starting cell is always inside the grid.
        ans.push_back({row, col});

        // East, South, West, North
        int directions[4][2] = {
            {0, 1},
            {1, 0},
            {0, -1},
            {-1, 0}
        };

        int steps = 1;
        int direction = 0;

        while (ans.size() < rows * cols) {

            // Use the same step length for two directions.
            for (int count = 0; count < 2; count++) {

                for (int i = 0; i < steps; i++) {
                    row += directions[direction][0];
                    col += directions[direction][1];

                    // Add only when the position is inside the grid.
                    if (row >= 0 && row < rows &&
                        col >= 0 && col < cols) {
                        ans.push_back({row, col});
                    }
                }

                direction = (direction + 1) % 4;
            }

            // Pattern: 1, 1, 2, 2, 3, 3...
            steps++;
        }

        return ans;
    }
};