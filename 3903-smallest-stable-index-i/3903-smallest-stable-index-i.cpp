class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int idx = -1;
        for(int i = 0; i < n; ++i){
            int max_ = *max_element(nums.begin(), nums.begin() + i);
            int min_ = *min_element(nums.begin() + i, nums.end());
            int stable = max_ - min_;
            if(stable <= k){
                idx = i;
                break;
            }
        }
        return idx;
    }
};