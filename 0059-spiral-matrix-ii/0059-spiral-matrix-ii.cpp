class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> omatrix(n, vector<int>(n, 0));
        vector<int> ans;

        int top = 0;
        int bottom = omatrix.size() - 1;
        int left = 0;
        int right = omatrix.size() - 1;

        int prev = 0;
        
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; ++i){
                omatrix[top][i] = prev + 1;
                prev++;
            }
            top++;

            for(int i = top; i <= bottom; ++i){
                omatrix[i][right] = prev + 1;
                prev++;
            }
            right--;

            if(top <= bottom){
                for(int i = right; i >= left; --i){
                    omatrix[bottom][i] = prev + 1;
                    prev++;
                }
                bottom--;
            }

            if(left <= right){
                for(int i = bottom; i >= top; --i){
                    omatrix[i][left] = prev + 1;
                    prev++;
                }
                left++;
            }
        }
        
    return omatrix;
    }
};