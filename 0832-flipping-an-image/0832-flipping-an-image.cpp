class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();
        
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i = 0; i < n; ++i){
            reverse(image[i].begin(), image[i].end());
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(image[i][j] == 0){
                    ans[i][j] = 1;
                }
                else if(image[i][j] == 1){
                    ans[i][j] = 0;
                }
            }
        }
        return ans;
    }
};