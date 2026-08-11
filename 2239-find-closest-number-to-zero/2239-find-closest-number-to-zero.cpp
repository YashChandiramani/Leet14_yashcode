class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];

        for(int i = 1; i < n; ++i){
            if(abs(nums[i]) < abs(ans)){
                ans = nums[i];
            }
            else if(abs(nums[i]) == abs(ans) && nums[i] > ans){
                ans = nums[i];
            }
        }
        return ans;
    }
};