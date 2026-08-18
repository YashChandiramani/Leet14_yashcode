class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int vec_sum = 0;
        int missing = 0;
        int n = nums.size() + 1;
        for(int i = 0; i < n; ++i){
            sum += i;
        }
        for(int i = 0; i < n - 1; ++i){
            vec_sum += nums[i];
        }
        return sum - vec_sum;
    }
};