class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int diag_sum = 0;
        int cen_num = 0;
        int final_ans = 0;

        if (n == 1) {
            final_ans = mat[0][0];
        }

        // Even-sized matrix
        else if (n % 2 == 0) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i == j) {
                        sum += mat[i][j];
                    }
                    if (i + j == n - 1) {
                        diag_sum += mat[i][j];
                    }
                }
            }
            final_ans = sum + diag_sum;
        }

        // Odd-sized matrix
        else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i == j) {
                        sum += mat[i][j];
                    }
                    if (i + j == n - 1) {
                        diag_sum += mat[i][j];
                    }
                }
            }

            // Center element (counted twice)
            cen_num = mat[n / 2][n / 2];

            final_ans = sum + diag_sum - cen_num;
        }

        return final_ans;
    }
};