class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;
        int num = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<int> max_find;

        if(n * m == 1){
            return grid[0][0];
        }

        for(int i = 0; i < n; ++i){
            sort(grid[i].begin(), grid[i].end());
        }
        for(int j = 0; j < m; ++j){
            max_find.clear();
            for(int i = 0; i < n; ++i){
                max_find.push_back(grid[i][m - 1 - j]);
            }
            num = *max_element(max_find.begin(), max_find.end());
            sum = sum + num;
        }
        return sum;
    }
};