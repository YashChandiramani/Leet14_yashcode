class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        sort(nums.begin(), nums.end());
        ans = (nums[n - 1] - 1) * (nums[n - 2] - 1);

    return ans;
    }
};