class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<unordered_set<int>> rows(n);
        vector<unordered_set<int>> cols(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rows[i].insert(matrix[i][j]);
                cols[j].insert(matrix[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (rows[i].size() != n || cols[i].size() != n) {
                return false;
            }
        }

        return true;
    }
};