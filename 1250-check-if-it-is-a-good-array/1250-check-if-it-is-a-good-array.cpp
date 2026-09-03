class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        if(nums[0] == 1){
            ans = true;
        }
        int GCD = nums[0];
        for(int i = 1; i < n; ++i){
            GCD = gcd(GCD, nums[i]);
        }
        if(GCD == 1){
            ans = true;
        }
        return ans;
    }
};