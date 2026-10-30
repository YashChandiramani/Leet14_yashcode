class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++) {
            int num = i;
            int count_1 = 0;

            while(num > 0) {
                if(num & 1) {
                    count_1++;
                }
                num = num >> 1;
            }
            ans.push_back(count_1);
        }
        return ans;
    }
};