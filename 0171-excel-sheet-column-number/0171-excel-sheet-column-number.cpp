class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int n = columnTitle.size();
        int num = 0;

        for(int i = 0; i < n; ++i){
            num = columnTitle[i] - 64;
            ans = ans * 26 + num;
        }
        return ans;
    }
};